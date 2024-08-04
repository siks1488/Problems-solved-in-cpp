#include <iostream>
#include <ctime>

using std::endl;

int main(){
    srand(time(0));

    int yourN;
    int computerN = rand() % 5 + 1;//random number betwen 1 and 5

    do{
        std::cout << "What is your number? (1-5): ";
        std::cin >> yourN;

        if(yourN > computerN){
            std::cout << "Your number is higher than the computer's number" << endl;
        }
        else if (yourN == computerN){
            std::cout << "You Won" << endl;
        }
        else{
            std::cout << "Your number is lower than the computer's number" << endl;
        }
    }
    while(yourN != computerN);
    return 0;
}