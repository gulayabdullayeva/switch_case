#include <iostream>
using namespace std;

int main() {
    float a, b;
    char oper;

    cout << "birinci ededi daxil edin: ";
    cin >> a;

    cout << "ikinci ededi daxil edin: ";
    cin >> b;

    cout << "emeliyyati daxil edin (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << "ededlerin cemi: " << a + b << endl;
            break;

        case '-':
            cout << "ededlerin ferqi: " << a - b << endl;
            break;

        case '*':
            cout << "ededlerin hasili: " << a * b << endl;
            break;

        case '/':
            if (b == 0) {
                cout << "sifira bolmek olmaz" << endl;
                break;
            }
            else {
                cout << "ededlerin nisbeti: " << a / b << endl;
                break;
            }

        default:
            cout << "seh v emeliyyat daxil etdiniz" << endl;
    }

    return 0;
}