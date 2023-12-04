#include <iostream>
#include <cstdlib>
#include <ctime>

const int NUM_TOWNS = 6;
const int NUM_CANDIDATES = 5;

int main() {
    setlocale(LC_ALL, "UKR");
    int votes[NUM_TOWNS][NUM_CANDIDATES];
    int ratings[NUM_CANDIDATES] = { 0 };

    // Ініціалізація генератора випадкових чисел
    srand(time(NULL));

    // Заповнення таблиці результатів голосування та обчислення рейтингів
    for (int town = 0; town < NUM_TOWNS; ++town) {
        std::cout << "Населений пункт " << town + 1 << ":\n";
        for (int candidate = 0; candidate < NUM_CANDIDATES; ++candidate) {
            votes[town][candidate] = rand() % 500 + 50 * (candidate + 1);
            std::cout << "Кандидат " << candidate + 1 << ": " << votes[town][candidate] << " голосів\n";
            ratings[candidate] += votes[town][candidate];
        }
        std::cout << std::endl;
    }

    // Виведення таблиці результатів голосування
    std::cout << "Таблиця результатів голосування:\n";
    for (int town = 0; town < NUM_TOWNS; ++town) {
        for (int candidate = 0; candidate < NUM_CANDIDATES; ++candidate) {
            std::cout << votes[town][candidate] << "\t";
        }
        std::cout << std::endl;
    }

    // Виведення рейтингів кандидатів
    std::cout << "\nРейтинги кандидатів:\n";
    for (int candidate = 0; candidate < NUM_CANDIDATES; ++candidate) {
        std::cout << "Кандидат " << candidate + 1 << ": " << ratings[candidate] << " голосів\n";
    }

    // Знаходження кандидата, що набрав максимальну кількість голосів у другому населеному пункті
    int maxVotesIndex = 0;
    for (int candidate = 1; candidate < NUM_CANDIDATES; ++candidate) {
        if (votes[1][candidate] > votes[1][maxVotesIndex]) {
            maxVotesIndex = candidate;
        }
    }

    std::cout << "\nКандидат " << maxVotesIndex + 1 << " набрав максимальну кількість голосів у другому населеному пункті.\n";

    return 0;
}
