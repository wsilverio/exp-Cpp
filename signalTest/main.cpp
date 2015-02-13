#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void ctrlC(int signum){
    cout << "Recebido sinal de interrupção: " << signum << ".\n";
    exit(signum);  

}

int main (){
    signal(SIGINT, ctrlC);

    cout << "Para sair, pressione ctrl+c" << endl;

    unsigned int sec = 0;

    for(;;){
        cout << "secs: " << ++sec << endl;
        sleep(1);
    }

    return 0;
}