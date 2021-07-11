// Our First C++ Program

#include <iostream>

int main() {
    int user_input;
    std::cout << "Welcome to our first C++ program! \n";
    std::cout << "Please type a number between 1 & 100. \n";
    std::cin >> user_input;
    std::cout << "Thank you for typing a number between 1 & 100. The number you entered is: "<< user_input << '\n';
    return 0;
}