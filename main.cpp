#include <iostream> // Header for iostream library

/**
 * @brief
 * Some multiline comments in C++
 * @return int
 */

int addNumbers(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}

void integerModifiers(){
    signed int value1 {10};
    signed int value2{-20};

    std::cout << "Signed value 1 : " << value1 << std::endl;
    std::cout << "Signed value 2 : " << value2 << std::endl;
}

void getUserInfo(){
    int age;
    std::string firstName, lastName;

    std::cout << "Please type in your first name and last name separated by spaces: " << std::endl;
    std::cin >> firstName >> lastName;

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << firstName << " "  << lastName << "! You are " << age << " years old!" << std::endl;
}

int main(){
    int firstNumber {12}; // Braces initialization
    int secondNumber (9); // Functional initialization

    int sum = addNumbers(firstNumber, secondNumber);
    std::cout << "The sum of the two numbers is : " << sum << std::endl;

    getUserInfo();
    integerModifiers();

    return 0;
}