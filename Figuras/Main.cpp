#include "Figura.h"
#include "Circulo.h"

int main()
{
    /*Figura f1;
    f1.calcularArea();
    f1.imprimirArea();*/
    
    Circulo c1{10};
    /*c1.calcularArea();
    c1.imprimirArea();*/
    
    Figura *f2;
    f2=&c1;
    f2->calcularArea();
    f2->imprimirArea();
    
    return 0;
}