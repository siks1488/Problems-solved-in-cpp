#include <iostream>
#include <vector>

using std::endl;
void add(std::vector<std::string>& ShoppingList);
void show(const std::vector<std::string>& ShoppingList);
void remove(std::vector<std::string>& ShoppingList);

int main(){
    std::vector<std::string> ShoppingList;
    int switchOpt; // option for switch 

        do{
        std::cout << "==========" << endl;
        std::cout << "   MENU" << endl;
        std::cout << "==========" << endl;
        std::cout << "1.Add an item " << endl;
        std::cout << "2.Delete an item" << endl;
        std::cout << "3.Display all items" << endl;
        std::cout << "4.Quit" << endl;
        std::cout << "Enter an option: ";
        std::cin >> switchOpt;

        switch(switchOpt){
            case 1:
                add(ShoppingList);
                break;
            case 2:
                remove(ShoppingList);
                break;
            case 3:
                std::cout << endl;
                std::cout << "***********************" << endl; 
                show(ShoppingList);
                std::cout << "***********************" << endl;
                break;
            case 4:
                exit(0);
                break;
            default:
                std::cout << "Invalid option. Try again." << endl;
        }
    }while(switchOpt != 4);

    return 0;
}

void add(std::vector<std::string>& ShoppingList){
        char option;
        std::string item;
    do{
        std::cout << "Enter an item:  ";
        std::cin.ignore();
        getline(std::cin, item);
        ShoppingList.push_back(item);

        std::cout << "Do you want to add an item? (y/n): ";
        std::cin >> option;
    } while(option == 'y' || option =='Y');

}

void show(const std::vector<std::string>& ShoppingList){
    for(int i = 0;i < ShoppingList.size();i++){
        std::cout << i << "." << ShoppingList[i] << endl;
    }
}

void remove(std::vector<std::string>& ShoppingList){
    int number;
    std::cout << "Delete an element by its number?: ";
    std::cin >> number;

    if(number >= 0 && number < ShoppingList.size()){
        ShoppingList.erase(ShoppingList.begin() + number);
        std::cout << "Item deleted successfully." << endl;
    }
    else{
        std::cout << "Invalid item number." << endl;
    }

}