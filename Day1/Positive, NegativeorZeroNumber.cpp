#include <iostream>

using std::endl;

int main(){
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num >0){
        std::cout << "Your number is positive";
    }
    else if(num == 0){
        std::cout << "Your number is 0";
    }
    else{
        std::cout << "Your number is negative";
    }

    return 0;
}       