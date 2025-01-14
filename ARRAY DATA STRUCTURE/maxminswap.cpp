#include <iostream>
#include <climits>
using namespace std;

void maxmin(int arr[], int size) {

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int minIndex = 0; int maxIndex = 1;


    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            minIndex = i;
        }

        if (arr[i] > largest) {
            largest = arr[i];
            maxIndex = i;
            
      }

  }

   cout << "Smallest: " << smallest << " at index: " << minIndex << endl;
   cout << "Largest: " << largest << " at index: " << maxIndex << endl;

   swap(arr[minIndex], arr[maxIndex]);

   cout << "Modified array: ";
   for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
   
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

    maxmin(arr, size);

    return 0;
}