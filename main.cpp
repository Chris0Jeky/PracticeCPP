#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <vector>


int main() {
    std::cout << "Hello, World!" << std::endl;
    // 2 inputs added
    int x;
    int y;
    std::cout <<"Enter two number and you'll get their sum! SCIENCE BITCH!" << std::endl;
    std::cin >> x >> y;
    std::cout << x + y << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the string you want the reverse of... Yes, it can do that" << std::endl;
    std::string input;
    std::getline(std::cin, input);
    std::string reversedString;
    for (int i = input.length() - 1; i >= 0; i--) {
        reversedString = reversedString + input[i];
    }

    std::cout << "Reversed: " << reversedString << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a number of digits then, when you're done, enter 0" << std::endl;
    std::vector<int> numbers;
    for (int i = 0; i < 10000; ++i) {
        std::cin >> x;
        if (x != 0){
            numbers.push_back(x);
        } else {
            i = 10000;
        }
    }

    std::sort(numbers.begin(), numbers.end());

    std::cout << "The sorted numbers are: " << std::endl;

    for (int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << std::endl;



    return 0;
}