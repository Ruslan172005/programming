#include <iostream>
using namespace std;

int CalculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * CalculateFactorial(n - 1);
    }
}

void PrintFactorial() {
    int n;
    cout << "Введiть цiле число для обчислення факторiалу: ";
    cin >> n;

    if (n < 0) {
        cout << "Факторiал не визначений для вiд'ємних чисел." << endl;
    }
    else {
        int factorial = CalculateFactorial(n);
        cout << n << "! = " << factorial << endl;
    }
}

int main() {
    setlocale(LC_ALL, "UKR");
    char choice;
    do {
        PrintFactorial();
        cout << "Бажаєте продовжити (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
