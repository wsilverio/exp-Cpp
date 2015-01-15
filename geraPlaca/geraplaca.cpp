/*
real    7m57.075s
user    2m11.066s
sys 5m45.337s
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

    if (argc > 1){
        
        ofstream placas;

        const char* arquivo = argv[1];
            
        placas.open(arquivo);

        for(char L1 = 'A'; L1 <= 'Z'; ++L1)
            for(char L2 = 'A'; L2 <= 'Z'; ++L2)
                for(char L3 = 'A'; L3 <= 'Z'; ++L3)
                    for(int N = 0; N < 10000; ++N)
                    // for(int N1 = 0; N1 < 10; ++N1)
                        // for(int N2 = 0; N2 < 10; ++N2)
                            // for(int N3 = 0; N3 < 10; ++N3)
                                // for(int N4 = 0; N4 < 10; ++N4)
                        placas << L1 << L2 << L3 << '-' << setfill ('0') << setw(4) << N << endl;
                                    // placas << L1 << L2 << L3 << '-' << N1 << N2 << N3 << N4 << endl;

        placas.close();
            
    }else{
        std::cout << "Informe um nome para o arquivo.";
    }

    return 0;
        
}
