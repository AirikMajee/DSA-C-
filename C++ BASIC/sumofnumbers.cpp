
#include <iostream>
using namespace std;

int main() {
    int range, sum = 0;
    cout << "Enter the range of the number: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        sum += i;
    }
    
    cout << "Sum of numbers from 1 to " << range << " is: " << sum << endl;
    return 0;
}
