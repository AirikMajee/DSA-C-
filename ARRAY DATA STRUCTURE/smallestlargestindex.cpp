#include <iostream>
#include <climits>
using namespace std;

int main () {

    int nums[] = {12, 45, 65, -32, 78, -13};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums [i];
            smallestIndex = i;
        }

        if (nums[i] > largest) {
            largest = nums [i];
            largestIndex = i;
        }
    }

    cout << "The index of the smallest number is: " << smallestIndex << endl;
    cout << "The index of the largest number is: " << largestIndex << endl;

    return 0;

}