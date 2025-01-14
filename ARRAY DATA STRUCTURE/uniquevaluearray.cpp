#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {

    cout << "The unique elements are: ";

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i!=j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main () {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    printUniqueValues(arr, size);

    return 0;
}
