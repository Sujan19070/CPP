#include <iostream>
using namespace std;
int main() {
    // Array of 10 numbers
    int numbers[10] = {12, 45, 78, 23, 56, 89, 34, 67, 90, 32};

    // Assume the first number as the largest
    int largest = numbers[0];

    // Loop through the array to find the largest number
    for (int i = 1; i < 10; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Print the largest number
    cout << "The largest number in the array is: " << largest << std::endl;

    return 0;
}
