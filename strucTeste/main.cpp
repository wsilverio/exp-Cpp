#include <iostream>

using namespace std;

struct Teste{
    int a, b;

    inline int min(void) {
        return (a<b)?a:b;
    }

    inline int max(void){
        return (a>b)?a:b;
    }
};

int main(void) {

    Teste teste;

    teste.a = 1;
    teste.b = 2;

    cout << "a: " << teste.a << endl;
    cout << "b: " << teste.b << endl;
    cout << "min(): " << teste.min() << endl;
    cout << "max(): " << teste.max() << endl;

    return 0;
}