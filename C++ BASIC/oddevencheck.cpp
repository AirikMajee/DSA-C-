#include <iostream>
using namespace std;

bool isEven (int n) {
    return (n % 2 == 0);
}

int main () {
    int n = 100;
    if (isEven(n)) 
    cout << "True";
    else
    cout << "False";
}