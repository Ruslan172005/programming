#include <iostream>
#include <string>

int countNotEquals(const std::string& str) {
    int count = 0;

    for (size_t i = 0; i < str.length() - 1; i++) {
        if (str[i] == '!' && str[i + 1] == '=') {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "UKR");
    std::string inputString = "abc!= def!= abc! def=";

    int result = countNotEquals(inputString);

    std::cout << "Кiлькiсть операцiй '!=': " << result << std::endl;

    return 0;
}
