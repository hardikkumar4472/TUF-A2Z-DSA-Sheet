#include <iostream>
#include <cmath>

int main() {
    int num, originalNum, remainder, digits = 0, result = 0;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num)
        std::cout << num << " is an Armstrong number.";
    else
        std::cout << num << " is not an Armstrong number.";

    return 0;
}
