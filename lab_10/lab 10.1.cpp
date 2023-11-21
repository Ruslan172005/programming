#include <iostream>

using namespace std;

const float PERSON_WT = 170.0; // Вага людини
const float LBS_PER_GAL = 6.7; // Вага одгого галону палива 
const float EMPTY_WEIGHT = 9887.0; // Вага порожньго літака
const float EMPTY_MOMENT = 3185853.0; // Момент порожнього літака

float CrewMoment(int crew) { // Обчислення моменту команди
    return PERSON_WT * 143.0 * crew;
}

float PassengerMoment(int passengers) { // Обчислення моменту пасажирів
    float distance;
    if (passengers <= 2 && passengers >= 0) { // Якщо кількість пасажирів від 0 до 2
        distance = PERSON_WT * 265 * passengers;
    }
    else if (passengers <= 4 && passengers > 2) { // Якщо кількість пасажирів 3 або 4
        distance = (PERSON_WT * 265 * 2) + (PERSON_WT * 219 * (passengers - 2));
    }
    else if (passengers <= 6 && passengers > 4) { // Якщо кількість пасажирів 5 або 6
        distance = (PERSON_WT * 265 * 2) + (PERSON_WT * 219 * 2) + (PERSON_WT * 295 * (passengers - 4));
    }
    else if (passengers <= 8 && passengers > 6) {// Якщо кількість пасажирів 7 або 8
        distance = (PERSON_WT * 265 * 2) + (PERSON_WT * 219 * 2) + (PERSON_WT * 295 * 2) + (PERSON_WT * 341 * (passengers - 6));
    }
    else {
        distance = 0;
    }
    return distance;
}

float CargoMoment(int closet, int bagage) { // Обчислення моменту багажу
    return 182.0 * closet + 386.0 * bagage;
}

float FuelMoment(int fuel) { // Обчислення моменту багажа
    float distance;
    if (fuel >= 0 && fuel <= 59) { // Якщо кількість палива від 0 галонів до 58 галонів
        distance = LBS_PER_GAL * fuel * (fuel * 314.6);
    }
    else if (fuel >= 60 && fuel <= 360) { // Якщо кількість палива від 60 галонів до 360 галонів
        distance = LBS_PER_GAL * fuel * (305.8 + (-0.01233 * (fuel - 60)));
    }
    else if (fuel >= 361 && fuel <= 520) { // Якщо кількість палива від 361 галонів до 520 галонів
        distance = LBS_PER_GAL * fuel * (303.0 + (0.12500 * (fuel - 361)));
    }
    else if (fuel >= 521 && fuel <= 565) { // Якщо кількість палива від 521 галонів до 565 галонів
        distance = LBS_PER_GAL * fuel * (323.0 + (-0.04444 * (fuel - 521)));
    }
    else {
        distance = 0;
    }
    return distance;
}

void PrintWarning(float totalWeight, float centerOfGravity) {
    if (totalWeight > 14900.0) { // Вивід попередження якщо надміра вага 
        cout << "WARNING: Detected high weight. Risk of crash!" << endl;
    }
    else if (centerOfGravity < 280.0 || centerOfGravity > 350.0) { // Вивід попередження якщо некоректний центр ваги
        cout << "WARNING: Detected incorrect center of gravity. Risk of crash!" << endl;
    }
}

int main() {
    int crew, passengers, closet, baggage, fuel;
    cout << "Number of crew: ";
    cin >> crew; // Ввід кількості учасників команди
    cout << "Number of passengers: ";
    cin >> passengers; // Ввід кількості пасажирів
    cout << "Weight of closet: ";
    cin >> closet; // Ввід ваги туалету
    cout << "Weight of baggage: ";
    cin >> baggage; // Ввід ваги багажу
    cout << "Amount of fuel (in gallons): ";
    cin >> fuel; // Ввід кількості палива
    float totalWeight = EMPTY_WEIGHT + (crew + passengers) * PERSON_WT +
        closet + baggage + (fuel * LBS_PER_GAL); // Обчислення загальної ваги літака 
    float centerOfGravity = ((CrewMoment(crew) + PassengerMoment(passengers) +
        CargoMoment(closet, baggage) + FuelMoment(fuel) + EMPTY_MOMENT)) / totalWeight; // Обчислення центру ваги
    cout << "Total weight of the aircraft: " << totalWeight << " pounds" << endl; // Вивід ваги
    cout << "Center of gravity: " << centerOfGravity << " inches from the nose of the aircraft" << endl; // Вивід центру ваги
    PrintWarning(totalWeight, centerOfGravity); // Виконання функції виводу попереждення
    return 0;
}
