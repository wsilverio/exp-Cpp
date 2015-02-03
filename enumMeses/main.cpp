#include <iostream>

using std::cout;
using std::endl;

int main(){
    enum Meses{JAN = 1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};

    for(char mes = JAN; mes <= DEZ; mes++)
        cout << (int) mes << endl;

    return 0;
}