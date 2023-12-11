#include <iostream>
#include <sstream>
using namespace std;

class Rational {
public:
    Rational() : numerator_(0), denominator_(1) {}

    Rational(int numerator, int denominator) {
        const int gcd_val = GreatestCommonDivisor(abs(numerator), abs(denominator));
        numerator_ = numerator / gcd_val;
        denominator_ = denominator / gcd_val;

        // Додати відповідні знаки для чисельника і знаменника
        if (denominator < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
    }

    int Numerator() const {
        return numerator_;
    }

    int Denominator() const {
        return denominator_;
    }

private:
    int GreatestCommonDivisor(int a, int b) const {
        if (b == 0) {
            return a;
        }
        else {
            return GreatestCommonDivisor(b, a % b);
        }
    }

    int numerator_;
    int denominator_;
};

// Оператор виводу
ostream& operator<<(ostream& stream, const Rational& rational) {
    stream << rational.Numerator() << '/' << rational.Denominator();
    return stream;
}

// Оператор вводу
istream& operator>>(istream& stream, Rational& rational) {
    int numerator, denominator;
    char delimiter;

    stream >> numerator >> delimiter >> denominator;

    if (stream && delimiter == '/') {
        rational = Rational(numerator, denominator);
    }

    return stream;
}

int main() {
    {
        ostringstream output;
        output << Rational(-6, 8);
        if (output.str() != "-3/4") {
            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
            return 1;
        }
    }

    // Додайте інші тести для виводу та вводу тут

    cout << "OK" << endl;
    return 0;
}
