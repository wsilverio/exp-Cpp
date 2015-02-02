#include <iostream>
#include <vector>

int main (){
    std::vector<int> vertorTeste;

    for (int i = 1; i <= 10; i++)
        vertorTeste.push_back(i);

    for (int i=0; i < vertorTeste.size(); i++)
        std::cout << ' ' << vertorTeste[i];

    std::cout << std::endl;

    // 6o elemento
    vertorTeste.erase(vertorTeste.begin() + 5);

    // 3 primeiros elementos
    vertorTeste.erase(vertorTeste.begin(), vertorTeste.begin()+3);

    std::cout << "vertorTeste:\n";
    for (int i = 0; i < vertorTeste.size(); i++)
        std::cout << ' ' << vertorTeste[i];
  
    std::cout << '\n';

    return 0;
}