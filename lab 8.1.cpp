#include <iostream>
using namespace std;

void Calc() {
    double operand1, operand2;
    char operation;

    cout << "Введiть перший операнд, операцiю i другий операнд: ";
    cin >> operand1 >> operation >> operand2;

    double result;

    if (operation == '+') {
        result = operand1 + operand2;
    }
    else if (operation == '-') {
        result = operand1 - operand2;
    }
    else if (operation == '*') {
        result = operand1 * operand2;
    }
    else if (operation == '/') {
        if (operand2 != 0) {
            result = operand1 / operand2;
        }
        else {
            cout << "Дiлення на нуль неможливе." << endl;
            return;
        }
    }
    else {
        cout << "Невiрна операцiя." << endl;
        return;
    }

    cout << "Результат дорiвнює " << result << endl;
}

int main() {
    setlocale(LC_ALL, "UKR");
    char choice;

    do {
        Calc();

        cout << "Виконати ще одну операцiю (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
