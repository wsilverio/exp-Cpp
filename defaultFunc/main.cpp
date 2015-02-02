#include <iostream>
#include <stdlib.h> 

int soma(int a, int b, int p = 0){
	return (p)?(a + b):abs(a+b);
}

int main(){

	std::cout << soma(-10,2) << std::endl;
	std::cout << soma(-10,2,1) << std::endl;


	return 0;
}