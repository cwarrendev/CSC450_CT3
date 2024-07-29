#include <iostream> // For std::cout, std::cin, std::cerr
#include <stdexcept> // For std::runtime_error

int main() {
    // Declare three pointers to integers and initialize them to nullptr
    int *ptrA = nullptr;
    int *ptrB = nullptr;
    int *ptrC = nullptr;

    try {
        // Allocate memory for three integers
        ptrA = new int;
        ptrB = new int;
        ptrC = new int;

        // Prompt the user for three integers
        std::cout << "Enter the first integer: ";
        if (!(std::cin >> *ptrA)) throw std::runtime_error("Invalid input for first integer");
        
        std::cout << "Enter the second integer: ";
        if (!(std::cin >> *ptrB)) throw std::runtime_error("Invalid input for second integer");
        
        std::cout << "Enter the third integer: ";
        if (!(std::cin >> *ptrC)) throw std::runtime_error("Invalid input for third integer");

        // Display the values using pointers
        std::cout << "The first integer is: " << *ptrA << std::endl;
        std::cout << "The second integer is: " << *ptrB << std::endl;
        std::cout << "The third integer is: " << *ptrC << std::endl;
    } catch (const std::exception &e) {
        // Display the error message if an exception is thrown
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Clean up the dynamically allocated memory
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0; // Return 0 to indicate successful completion
}