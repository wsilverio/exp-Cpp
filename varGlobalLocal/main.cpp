#include <iostream>

int variavel = 0xCADE;

int main(){
    int variavel = 0xF1CA;

    std::cout << std::uppercase;
    std::cout <<  "Local: " << std::hex <<   variavel << std::endl;
    std::cout << "Global: " << std::hex << ::variavel << std::endl;

    return 0;
}