#include <iostream>
#include <stdexcept>
#include <utility>

std::pair<int, float> division(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    int intQuotient = a / b; // integer division
    float floatQuotient = float(a) / float(b); // floating-point division
    std::cout << "Integer Quotient: " << intQuotient << std::endl;
    std::cout << "Floating-point Quotient: " << floatQuotient << std::endl;

    return std::pair<int, float>(intQuotient, floatQuotient);
}

int callDivision(){
    int a, b;
    std::cout << "Enter two integers (a b): ";
    std::cin >> a >> b;

    try {
        auto result = division(a, b);
        std::cout << "Results: (" << result.first << ", " << result.second << ")" << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

int incrementAndDecrement() {
    int a = 5;

    std::cout << "Prefix increment: " << ++a << std::endl; // increments first → prints 6

    std::cout << "Postfix increment: " << a++ << std::endl; // prints 6, THEN a becomes 7

    std::cout << "Prefix decrement: " << --a << std::endl; // decrements first → prints 6

    std::cout << "Postfix decrement: " << a-- << std::endl; // prints 6, THEN a becomes 5
}

int main(){
    std::cout << "Hello, World!" << std::endl;

    
    incrementAndDecrement();

    std::cout << "End of program." << std::endl;
    return 0;
}