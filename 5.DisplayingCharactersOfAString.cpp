#include <iostream>

int main() {

    int size = 5;
    int num[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter a number: ";
        std::cin >> num[i];
    }

    std::cout << "The array elements are: ";

    for(int i = 0; i < size; i++){
        std::cout << num[i] << std::endl;
    }
    return 0;
}
