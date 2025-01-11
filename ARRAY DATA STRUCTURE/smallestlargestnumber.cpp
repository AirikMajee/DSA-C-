#include <iostream>
#include <climits> // to include INT_MAX
using namespace std;

int main () {

    int nums [] = {8, 20, 56, 78, -12, 6};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {

        smallest = min(nums [i], smallest);
        largest = max(nums[i], largest);
        
        /* if(nums[i] < smallest) {
            smallest = nums[i]; 
        } */

    }
    
    cout << "smallest number = " << smallest << endl;
    cout << "largest number = " << largest << endl;

    return 0;
}