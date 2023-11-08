#include <iostream>
using namespace std;

double CalculateHarmonicMean(double x, double y) {
    return 2.0 * x * y / (x + y);
}

int main() {
    setlocale(LC_ALL, "UKR");
    double x, y;

    do {
        cout << "Введiть перше число (x): ";
        cin >> x;

        cout << "Введiть друге число (y): ";
        cin >> y;

        if (x != 0 && y != 0) {
            double harmonic_mean = CalculateHarmonicMean(x, y);
            cout << "Середнє гармонiйне: " << harmonic_mean << endl;
        }
    } while (x != 0 && y != 0);

    return 0;
}
