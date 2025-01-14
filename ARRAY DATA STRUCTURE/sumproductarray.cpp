#include <iostream>
using namespace std;

// Function to calculate product and sum
void productandSum(int arr[], int size, int &sum, int &product) {
    sum = 0;
    product = 1;

    for (int i = 0; i < size; i++) { // Use i < size, not i <= size
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Declare the array after reading size
    int sum = 0, product = 1;

    cout << "Enter the " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) { // Use i < size
        cin >> arr[i];
    }

    // Call the function
    productandSum(arr, size, sum, product);

    // Display results
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The product of the numbers is: " << product << endl;

    return 0;
}
