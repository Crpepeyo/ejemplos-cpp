#include <iostream>

class Calentador
{
    private: 
        int temperatura;
    
    public:
        Calentador();
        void calentar();
        void enfriar();
        void imprimeT();
};// punto y coma obligatorio

Calentador::Calentador()
{
    temperatura=15;
}

void Calentador::calentar()
{
    temperatura+=5;
}

void Calentador::enfriar()
{
    temperatura-=5;
}

void Calentador::imprimeT()
{
    std::cout<<"La temperatura es "<<temperatura<<std::endl;
}

int main()
{
    Calentador c1,c2;
    c1.calentar();
    c1.imprimeT();
    c2.enfriar();
    c2.imprimeT();
}