// -std=c++11

#include <iostream>
#include <iomanip>

int main () {
  double pi = 3.14159;

  std::cout << std::setprecision(3) << pi << std::endl;

  std::cout << std::setfill('0') << std::setw(10) << pi << std::endl;

  return 0;
}
