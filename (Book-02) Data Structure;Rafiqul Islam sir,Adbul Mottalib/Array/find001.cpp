#include <iostream>
using namespace std;

// Function to find an element in the array
int findElement(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Return index of element if found
        }
    }
    return -1; // Return -1 if element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int key;

    cout << "Enter the element to search for: ";
    cin >> key;

    int index = findElement(arr, size, key);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
