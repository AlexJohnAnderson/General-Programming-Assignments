#include <iostream>
#include <limits>
int main(){
	int n;
	std::cout << "\nEnter n:";
	std::cin >> n;
	
	while(std::cin.fail()){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nInvalid type.Enter again:";
		std::cin >> n;
	}
	std::cout << "\nValue entered:" << n << "\n";

	return 0;
}
