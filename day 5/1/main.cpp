#include <iostream>

int main(){
	int number;

	std::cin >> number;
	if(number % 2 == 0){
		std::cout << "par";
	}
	else{
		std::cout << "impar";
	}

	return 0;
}
