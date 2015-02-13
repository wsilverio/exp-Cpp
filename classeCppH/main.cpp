#include <iostream>

#include "classe_teste.h"

int main(int argc, char const *argv[]){

    Teste teste;

    std::cout << teste.getName() << std::endl;
    teste.setName("Teste");
    teste.setInt(123456);
    teste.setFloat(3.1416);

    std::cout << std::endl;

    std::cout << teste.getName() << std::endl;
    std::cout << teste.getInt() << std::endl;
    std::cout << teste.getFloat() << std::endl;

    return 0;
}