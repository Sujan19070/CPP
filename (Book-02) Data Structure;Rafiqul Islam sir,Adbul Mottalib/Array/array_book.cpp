#include <iostream>
using namespace std;


int main() {
    // Declaration and initialization of an array of integers
    int numbers[5] = {1, 2, 3, 4, 5};
    numbers[3]=59;
    // Accessing elements of the array
    cout << "First element: " << numbers[0] << std::endl;
    cout << "Second element: " << numbers[1] << std::endl;
    cout << "Third element: " << numbers[2] << std::endl;
    cout << "Fourth element: " << numbers[3] << std::endl;
    cout << "Fifth element: " << numbers[4] << std::endl;

    return 0;
}
