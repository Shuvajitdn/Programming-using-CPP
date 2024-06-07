#include<iostream>
using namespace std;

int main() {
    int password;

    do {
        cout << "Enter the password:" << endl;
        cin >> password;
        if (password < 999999) {
            cout << "The password does not meet the required conditions. Please enter the password again." << endl;
        }
    } while (password < 999999);

    cout << "Password accepted." << endl;

    return 0;
}
