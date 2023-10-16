#include <iostream> // Header for iostream library

/**
 * @brief
 * Some multiline comments in C++
 * @return int
 */

int addNumbers(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
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

void integerModifiers(){
    signed int value1 {10};
    signed int value2{-20};

    std::cout << "Signed value 1 : " << value1 << std::endl;
    std::cout << "Signed value 2 : " << value2 << std::endl;
}

void fractionalNumbers(){
    float number1{1.12344556666666f};
    double number2{1.23342344444345456};
    long double number3{1.12232543657768879980L};

    std::cout << "size of float : " << sizeof(float) << std::endl;
    std::cout << "size of double : " << sizeof(double) << std::endl;
    std::cout << "size of long double : " << sizeof(long double) << std::endl;
}

void booleanTypes(){
    bool red_light{true};
    bool green_light{false};

    if(red_light && green_light){
        std::cerr << "You cannot stop and go at the same time!";
        return;
    }

    if(red_light){
        std::cout << "Hey, stop!";
    }

    if(green_light){
        std::cout << "Cool, go on!";
    }
}

void playWithChars(){
    char character1 {'C'};
    char character2 {'+'};
    char character3 {'+'};

    std::cout << character1 << character2 << character3 << std::endl;
}

int main(){
    // int firstNumber {12}; // Braces initialization
    // int secondNumber (9); // Functional initialization

    // int sum = addNumbers(firstNumber, secondNumber);
    // std::cout << "The sum of the two numbers is : " << sum << std::endl;

    // getUserInfo();
    // integerModifiers();
    // fractionalNumbers();

    // booleanTypes();
    playWithChars();

    return 0;
}