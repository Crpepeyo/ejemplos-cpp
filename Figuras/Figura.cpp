#include <iostream>
#include "Figura.h"

Figura::Figura()
{
    area=0;
}

void Figura::calcularArea()
{
    std::cout <<"No se como calcular el area" << std::endl;
}

void Figura::imprimirArea()
{
    std::cout << "El area es:" << area << std::endl;
}
