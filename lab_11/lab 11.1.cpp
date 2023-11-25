#include <iostream>
#include <string>

using namespace std;

// Функція для отримання повної назви штату за його скороченням
string getStateName(const string& abbreviation) {
    switch (abbreviation[0]) {
        case 'A':
            if (abbreviation == "AL") return "Алабама";
            if (abbreviation == "AK") return "Аляска";
            if (abbreviation == "AZ") return "Арізона";
            if (abbreviation == "AR") return "Арканзас";
            break;
        case 'C':
            if (abbreviation == "CA") return "Каліфорнія";
            if (abbreviation == "CO") return "Колорадо";
            if (abbreviation == "CT") return "Конектікут";
            break;
        // Додайте інші штати тут за аналогією
        default:
            break;
    }

    return "";  // Повертає порожній рядок, якщо скорочення не знайдено
}

int main() {
    string abbreviation;

    while (true) {
        cout << "Введіть скорочення штату (для виходу введіть 'exit'): ";
        cin >> abbreviation;

        if (abbreviation == "exit") {
            break;
        }

        string stateName = getStateName(abbreviation);

        if (!stateName.empty()) {
            cout << "Повна назва штату: " << stateName << endl;
            break;
        } else {
            cout << "Помилка: невірне скорочення штату. Спробуйте ще раз." << endl;
        }
    }

    return 0;
}
