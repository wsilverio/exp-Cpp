#include <iostream>

class Teste{
private:
    std::string nome;
    int ivar;
    float fvar;

public:
    int pvar;

    Teste():nome("Teste"),ivar(1),fvar(10),pvar(100){}

    Teste(std::string str, int i, float f, int p = 0) {
        nome = str;
        ivar = i;
        fvar = f;
        pvar = p;
    }

    void setNome(std::string str) {
        nome = str;
    }

    void setInt(int i) {
        ivar = i;
    }

    void setFloat(float f) {
        fvar = f;
    }

    std::string getNome() {
        return nome;
    }

    int getInt() {
        return ivar;
    }

    float getFloat() {
        return fvar;
    }

};

void Print(Teste *p){
    // como 'p' é um ponteiro, o acesso aos atributos e métodos é feito com o operador '->'
    std:: cout  << "\nnome: "   << p->getNome()
                << "\nint: "    << p->getInt()
                << "\nfloat: "  << p->getFloat()
                << "\npublic: " << p->pvar
                << std::endl;
}

int main() {

    Teste teste; // contrutor padrão
    Print(&teste);

    std::string nome[5]={"um","dois","tres","quatro","cinco"};
    float f = 0.0;

    for (int i=1; i<=5; ++i) {
        teste.setNome(nome[i-1]);
        teste.setInt(i);
        teste.setFloat(f+=0.25);
        teste.pvar = 5 - i;

        Print(&teste);
    }

    std::cout << "\n---------\n";

    teste = Teste("Padrao", 100, 99.0, 5);
    Print(&teste);

    return 0;
}