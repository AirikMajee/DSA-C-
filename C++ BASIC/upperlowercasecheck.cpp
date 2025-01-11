#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ( ch>='a' && ch<='z' ) {
        cout << "The entered character is a lowercase letter." << endl;
    } else {
        cout << "The entered character is a uppercase letter." << endl;
    }
    return 0;
}