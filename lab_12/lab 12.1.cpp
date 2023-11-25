#include <iostream>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");
    char input;
    do {
        cout << "Введiть лiтеру: ";
        cin >> input;

        if (isalpha(input)) {
            input = toupper(input); // Перетворення на великi лiтери
            int digit;

            // Визначення цифри за введеною лiтерою
            if (input >= 'A' && input <= 'C') {
                digit = 2;
            }
            else if (input >= 'D' && input <= 'F') {
                digit = 3;
            }
            else if (input >= 'G' && input <= 'I') {
                digit = 4;
            }
            else if (input >= 'J' && input <= 'L') {
                digit = 5;
            }
            else if (input >= 'M' && input <= 'O') {
                digit = 6;
            }
            else if (input >= 'P' && input <= 'S') {
                digit = 7;
            }
            else if (input >= 'T' && input <= 'U') {
                digit = 8;
            }
            else if (input >= 'W' && input <= 'Y') {
                digit = 9;
            }
            else {
                cout << "Введений неправильний символ. Введiть Q або Z для виходу." << endl;
                continue;
            }

            cout << "Буква " << input << " вiдповiдає цифрi " << digit << " на телефонi." << endl;
        }
        else if (input != 'Q' && input != 'Z') {
            cout << "Введений неправильний символ. Введiть Q або Z для виходу." << endl;
        }
    } while (input != 'Q' && input != 'Z');

    cout << "Вихiд." << endl;

    return 0;
}
