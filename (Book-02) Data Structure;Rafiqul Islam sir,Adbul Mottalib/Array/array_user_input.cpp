#include <iostream>
using namespace std;

int main() {


    int size; 
    cin>>size;
    int arr[size]; // taking user input from user

    // Input 10 elements into the array
    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Displaying the elements of the array
    std::cout << "The elements you entered are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}