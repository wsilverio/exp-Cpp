#include <iostream>

int converte(const float &v, int func(float)){
	return func(v * 180 / 3.14);
}

int arredonda(float v){
	return (int) v;
}

int main(){
	float ang = 2 * 3.14;

	std::cout << converte(ang, arredonda) << std::endl;

	return 0;
}