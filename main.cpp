#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>

bool comparePairs(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.first < b.first;
}

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


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Enter a sequence of pairs of numbers: ";
    std::vector<std::pair<int, int>> pairs;
    int a, b;
    //while (std::cin >> a >> b) {
    //    pairs.push_back({a, b});
    //}

    // loop above to be substituted with below:
    //for (int i = 0; i < 10000; ++i) {
    //        std::cin >> x;
    //        if (x != 0){
    //            numbers.push_back(x);
    //        } else {
    //            i = 10000;
    //        }
    //    }

    std::sort(pairs.begin(), pairs.end(), comparePairs);
    std::cout << "The sorted pairs are: " << std::endl;
    for(const auto &p : pairs){
        std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a sequence of words: ";
    std::map<std::string, int> frequency;
    std::string word;
    while (std::cin >> word) {
        ++frequency[word];
    }

    std::cout << "The frequency of each word is: " << std::endl;

    for(const auto &pair : frequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }


    return 0;
}


