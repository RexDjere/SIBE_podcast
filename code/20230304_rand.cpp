// Random Number Generator
// Author: Rex Djere
// Website: https://saxtalk.com/
// License: GNU GPL version 3 or later

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Create an array of numbers 1 through 48
    int numbers[48];
    for (int i = 0; i < 48; i++) {
        numbers[i] = i + 1;
    }

    // Shuffle the array using std::shuffle
    std::shuffle(std::begin(numbers), std::end(numbers), std::mt19937(std::rand()));

    // Print out the shuffled array
    for (int i = 0; i < 48; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
