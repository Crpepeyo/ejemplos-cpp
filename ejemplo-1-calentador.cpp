#include <iostream>

class Calentador
{
    private: 
        int temperatura;
        int incremento;
    
    public:
        Calentador();
        void calentar();
        void enfriar();
        void imprimeT();
        int accedeT() const;// a los metodos de acceso se le agrega const para indicar que no modifica las variables
        void imprimeFaren() const;
};// punto y coma obligatorio

Calentador::Calentador()
{
    temperatura=15;
    incremento=3;
}

void Calentador::calentar()
{
    if(temperatura+incremento<=30)
         temperatura+=incremento;
}

void Calentador::enfriar()
{
    if(temperatura-incremento>=-10)
        temperatura-=incremento;
}

void Calentador::imprimeT()
{
    std::cout<<"La temperatura en Centigrados es: "<<temperatura<<" C°"<<std::endl;
}

int Calentador::accedeT() const
{
    return temperatura;
}

void Calentador::imprimeFaren() const
{
    std::cout<<"La temperatura en Farenheit es: "<<temperatura*1.8+32<<" F°"<<std::endl;
}

int main()
{
    Calentador c1,c2;
    for(int i=0;i<5;i++)
    {
        c1.calentar();
        c1.imprimeT();
        c1.imprimeFaren();
    }
    std::cout<<std::endl;
    for(int i=0;i<8;i++)
    {
        c2.enfriar();
        c2.imprimeT();
        c2.imprimeFaren();
    }
    
    
}