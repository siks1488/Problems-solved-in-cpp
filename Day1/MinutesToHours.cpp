#include <iostream>

using std::endl;

int main(){
    double min;
    double hours;

    std::cout << "Enter minutes: ";
    std::cin >> min;

    hours = min / 60;

    std::cout << min << " minutes in hours is : " << hours << endl;

    return 0;
}