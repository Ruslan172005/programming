#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
//Функція для зчитування матриці у файл
vector<vector<int>> readMatrixFromFile(const string& filename, int n) {
    ifstream file(filename);
    vector<vector<int>> matrix;

    if (file.is_open()) {
        int num;
        for (int i = 0; i < n; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                file >> num;
                row.push_back(num);
            }
            matrix.push_back(row);
        }
        file.close();
    }
    else {
        cerr << "Unable to open file " << filename << endl;
    }

    return matrix;
}

//Функція для запису матриці у файл
void writeMatrixToFile(const string& filename, const vector<vector<int>>& matrix) {
    ofstream file(filename);

    if (file.is_open()) {
        for (const auto& row : matrix) {
            for (int num : row) {
                file << num << " ";
            }
            file << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file: " << filename << endl;
    }
}
//обчислення матриці C за формулою
vector<vector<int>> calculateMatrixC(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n, 0));

    //Обчислення 2AB
    vector<vector<int>> temp1(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                temp1[i][j] += 2 * A[i][k] * B[k][j];
            }
        }
    }

    //Обчислення BA^3
    vector<vector<int>> temp2(n, vector<int>(n, 0));
    vector<vector<int>> A_cubed = A; // A_cubed = A^1

    //Обчислення A^3
    for (int p = 0; p < 2; ++p) { // Підносимо A до степеня 3
        vector<vector<int>> temp(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    temp[i][j] += A_cubed[i][k] * A[k][j];
                }
            }
        }
        A_cubed = temp;
    }

    //Обчислення BA^3
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                temp2[i][j] += B[i][k] * A_cubed[k][j];
            }
        }
    }

    //Обчислення C = 2AB + BA^3
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = temp1[i][j] + temp2[i][j];
        }
    }

    return C;
}
int main()
{
    int i = 7;
    int n = i + 4;

    //Зчитування матриць з файлів
    vector<vector<int>> A = readMatrixFromFile("a.txt", n);
    vector<vector<int>> B = readMatrixFromFile("b.txt", n);

    //Обчислення матриці C
    vector<vector<int>> matrixC = calculateMatrixC(A, B);

    //Запис результату у файл
    writeMatrixToFile("c.txt", matrixC);
    return 0;
}
