#include <iostream>
int main()
{
	std::cout << "Vvedite chislo: ";
	int a;
	bool b=false;
	std::cin >> a;
	std::cout << a << "=";
	for (int i = 5; i > -1; i--) {
		int ten = 1;
		for (int i1 = 0; i1 < i; i1++) { ten = ten * 10;}
		//std::cout << ten << std::endl;
		if ((a / ten % 10) == 0) {
			if (b == false) {continue;}
			else {
				if (a >= 0) { std::cout << "+" ; }
				std::cout << a / ten % 10 << "*10^" << i;
			}
		}
		else {
			if ((b == true) and (a>=0)) { std::cout << "+"; }
			b = true;
			std::cout <<a / ten % 10 << "*10^" << i;
		}
	}
	std::cout << std::endl;
	return 0;
}
