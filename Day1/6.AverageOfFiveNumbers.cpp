#include <iostream>

using std::endl;

int main() {
    const int numCount = 5;
    int num[numCount];
    int sum = 0;

    std::cout << "Introdu cinci numere: " <<endl;
    for(int i = 0; i < numCount; i++){
        std::cout << "Numar " << i + 1 << ":";
        std::cin >> num[i];
    }

    for (int i = 0; i < numCount; ++i){
        sum += num[i];
    }

    double media = static_cast<double>(sum) / numCount;
    std::cout << "Media aritmetică a celor cinci numere este: " << media << endl;

    return 0;
}