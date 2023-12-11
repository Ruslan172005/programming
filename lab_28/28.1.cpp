#include <iostream>
#include <string>

using namespace std;

// Прототипи функцій
void SendSms(const string& number, const string& message);
void SendEmail(const string& email, const string& message);

// Абстрактний базовий клас INotifier
class INotifier {
public:
    virtual void Notify(const string& message) const = 0;
};

// Клас SmsNotifier
class SmsNotifier : public INotifier {
public:
    SmsNotifier(const string& phoneNumber) : phoneNumber_(phoneNumber) {}

    // Переозначення методу Notify для SmsNotifier
    void Notify(const string& message) const override {
        SendSms(phoneNumber_, message);
    }

private:
    string phoneNumber_;
};

// Клас EmailNotifier
class EmailNotifier : public INotifier {
public:
    EmailNotifier(const string& emailAddress) : emailAddress_(emailAddress) {}

    // Переозначення методу Notify для EmailNotifier
    void Notify(const string& message) const override {
        SendEmail(emailAddress_, message);
    }

private:
    string emailAddress_;
};

// Функція відправки SMS
void SendSms(const string& number, const string& message) {
    cout << "Send '" << message << "' to number " << number << endl;
}

// Функція відправки Email
void SendEmail(const string& email, const string& message) {
    cout << "Send '" << message << "' to e-mail " << email << endl;
}

// Функція для виклику методу Notify об'єкта, що вказує на INotifier
void Notify(const INotifier& notifier, const string& message) {
    notifier.Notify(message);
}

int main() {
    // Створення об'єктів SmsNotifier та EmailNotifier
    SmsNotifier sms{ "+38-067-777-77-77" };
    EmailNotifier email{ "lab28-final@pnu.edu.ua" };

    // Виклик методу Notify для об'єктів
    Notify(sms, "I am learning C++");
    Notify(email, "and I want to be successful");

    return 0;
}
