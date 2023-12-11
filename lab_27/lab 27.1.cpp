#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    const string Name;
    // Конструктор класу Animal, який ініціалізує поле Name
    Animal(const string& name) : Name(name) {}
};

class Dog : public Animal {
public:
    // Конструктор класу Dog, який викликає конструктор Animal та ініціалізує поле Name у класі Animal
    Dog(const string& name) : Animal(name) {}

    // Метод Bark класу Dog, який виводить звук гавкання та ім'я собаки
    void Bark() {
        cout << Name << " barks: woof!" << endl;
    }
};

int main() {
    // Створення об'єкта класу Dog та виклик методу Bark
    Dog myDog("Buddy");
    myDog.Bark();

    return 0;
}
