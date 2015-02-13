#ifndef CLASSE_TESTE_H
#define CLASSE_TESTE_H

#include <iostream>
#include <string.h>

class Teste{
public:
    Teste(){name = "Padrão";}
    Teste(std::string name_){setName(name_);}

    void setName(std::string name_){ name = name_;}
    void setInt(int i){ intVal = i;}
    void setFloat(float f){ fVal = f;}

    std::string getName(){ return name;}
    int getInt(){ return intVal;}
    float getFloat(){ return fVal;}

private:
    std::string name;
    int intVal;
    float fVal;
};

#endif