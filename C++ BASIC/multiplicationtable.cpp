#include <iostream>
using namespace std;

void printTable(int n) {
    
    for (int i = 1; i <= 10; i++) 
    cout << n << "*" << i << "="
    << n * i << endl;
    
    }

    int main () {

        int n = 5;
        printTable(n);
        return 0;
    }