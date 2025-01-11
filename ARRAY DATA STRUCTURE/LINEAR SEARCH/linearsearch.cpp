#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }

    }
    return -1;
}

    int main () {

       int size;
       cout << "Enter the size of the array: ";
       cin >> size;

       int arr[size];

       cout << "Enter" << size << "elements of the array: ";
       for (int i = 0; i < size; i++) {
            cin >> arr[i];
            }

        int target;

        cout << "Enter the target: ";
        cin >> target;

        int result = linearSearch(arr, size, target);

        if (result!= -1){
            cout << "Target found at index: "<< result << endl;
            } else {
                cout << "Target not found at index " <<endl;
            }
        return 0;
    
    }
