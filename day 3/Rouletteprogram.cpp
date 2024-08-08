#include <iostream>
#include <ctime>

using std::endl;

int main(){
    srand(time(0));

    int balance = 1000;
    char playAgain;

    do{
        
        int playerC;
        int playerN;
        int playerColor;
        float bet;
        int computerN = rand() % 37;
        int computerC = rand() % 2;


        std::cout << "*******************************" << endl;
        std::cout << "  Welcome to Roulette program" << endl;
        std::cout << "*******************************" << endl << endl;

        std::cout << "Entering the casino, you have " << balance << "$" <<endl;
        std::cout << "There are 2 types of bets you can make" << endl << endl;

        std::cout << "1) Choose a single number(0 to 36).High risk, high payout!" <<endl << endl;
        std::cout << "2) Choose a color(0 or 1)" <<endl ;
        std::cout << "0.Red numbers are : 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36" << endl;
        std::cout << "1.Black numbers are : 2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35" << endl << endl;


        std::cout << "Please select the type of bet you want: ";
        std::cin >> playerC;

        switch(playerC){
    //case 1
                case 1:
                    std::cout << "Enter a number between 0-36: ";
                    std::cin >> playerN;
                    if(playerN <= 36){
                        std::cout << "If you win, you will receive 35 times the money you bet!" << endl;
                        std::cout << "How much money are you willing to risk?: ";
                        std::cin >> bet;
                        if(bet >= balance){
                            std::cout << computerN << endl;
                            if(playerN == computerN){
                                float win = 35.0 * bet;
                                balance += win; 
                                std::cout << "You won " << win << " money!" << endl;
                                std::cout << "You have now in balance: " << balance << "$" << endl;
                            }
                            else{
                                balance -= bet;
                                std::cout << "You lose " << bet << " money!";
                                std::cout << "You have now in balance: " << balance << "$" << endl;
                            }
                        }
                    }
                    break;

    //case 2
                case 2:
                    std::cout << "Enter a color (0 or 1): ";
                    std::cin >> playerColor;
                    if(playerColor <= 1){
                        std::cout << "If you win, you will receive double the money you bet!" << endl;
                        std::cout << "How much money are you willing to risk?: ";
                        std::cin >> bet;
                        if(bet <= balance){
                            std::cout << computerC << endl;
                            if(playerColor == computerC){
                                float winC = 2.0 * bet;
                                balance += winC; 
                                std::cout << "You won " << winC << " money" << endl;
                                std::cout << "You have now in balance: " << balance << "$" << endl;
                            }
                            else{
                                balance -= bet;
                                std::cout << "You lose " << bet << " money!" << endl;
                                std::cout << "You have now in balance: " << balance << "$" <<endl;
                            }
                        break;
                        }
                    }

                default:
                    std::cout << "Enter a number between 1 or 2!" << endl;
                    break;
                    
            }

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while(playAgain == 'y' || playAgain == 'Y');
    std::cout << "Thank you for playing! You leave with " << balance << "$" << endl;


    return 0;
}