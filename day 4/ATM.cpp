#include <iostream>
#include <ctime>

using std::endl;

int main(){
    srand(time(0));
    int account = rand() % 9999 + 1000;
    int pin = 0;
    int choose;
    float deposit = 0;
    float balance = 0;
    float withdraw = 0;


    std::cout << "================" << endl;
    std::cout << "ATM DEMO PROJECT"<< endl; 
    std::cout << "================" << endl;

    while(pin < 1000 || pin > 9999){
        std::cout << "ENTER PIN NUMBER(4 numbers): " << endl;
        std::cin >> pin;
    }

    std::cout << "Welcome to your account!" << endl << endl;

    while(choose != 4){
        std::cout << "1. Deposit" << endl;
        std::cout << "2. Withdraw" << endl;
        std::cout << "3. Checking Account Balance" << endl;
        std::cout << "4. End Transactions" << endl;
        std::cin >> choose;

        switch(choose){
            case 1:
                std::cout << "      DEPOSIT" << endl;
                std::cout << "Enter Deposit Amount $";
                std::cin >> deposit;
                
                std::cout << endl << "--------Deposit Receipt--------" << endl;
                std::cout << "Amount Deposited - $" << deposit << endl;
                balance += deposit;
                std::cout << "New balance $" << balance << endl;
                std::cout << "---------------------------------" << endl << endl;
                break;
            
            case 2:
                std::cout << "      WITHDRAW" << endl;
                std::cout << "Enter Withdraw Amount $";
                std::cin >> withdraw;
                
                std::cout << endl << "--------Withdraw Receipt--------" << endl;
                std::cout << "Amount Withdraw - $" << withdraw << endl;
                if (withdraw <= balance){
                    balance -= withdraw;
                    std::cout << "New balance $" << balance << endl;
                }
                else{
                    std::cout << "Error" << endl;
                }
                std::cout << "---------------------------------" << endl << endl;
                break;

            case 3:
                std::cout << "      Checking Account Balance" << endl;
                std::cout << endl << "--------Checking Account Balance--------" << endl;
                std::cout << "Checking Account # xxxxxxxx"<< account << endl;
                std::cout << "Balance = $" << balance << endl;
                std::cout << "---------------------------------" << endl << endl;
                break;
            
            case 4:
                return(0);
                break;
            
            default:
                std::cout << "YOU NEED TO CHOOSE BETWEEN 1-4!" << endl;
                break;
        }
    }
    return 0;
}