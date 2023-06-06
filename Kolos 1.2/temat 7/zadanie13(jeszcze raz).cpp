#include <iostream>
#include <cstring>

char* createCopy(const char* input, int size) {
    char* copy = new char[size];
    for(int i = 0; i < size; i++)
    {
        copy[i] = input[i];
    }
    return copy;
}

int main() {
    const int size = 100;
    char* input = new char[size];
    std::cout << "Enter the characters of the array: ";
    std::cin >> input;
    char* copy = createCopy(input, size);
    std::cout << "Original array: " << input << std::endl;
    std::cout << "Copied array: " << copy << std::endl;
    delete[] input;
    delete[] copy;
    return 0;
}