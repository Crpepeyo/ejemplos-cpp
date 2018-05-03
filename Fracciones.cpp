#include <iostream>

class Fraccion 
{
    private:
        int numerador;
        int denominador;

    public:
        Fraccion(int num,int den);
        Fraccion operator+(Fraccion f2);
        Fraccion operator-(Fraccion f2);
        Fraccion operator*(Fraccion f2);
        Fraccion operator/(Fraccion f2);
        void imprime();
};

Fraccion::Fraccion(int num,int den)
{
    this->numerador=num;
    this->denominador=den;
}

Fraccion Fraccion::operator+(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.denominador)+(this->denominador*f2.numerador);
    f.denominador=this->denominador*f2.denominador;
    return f;
}

Fraccion Fraccion::operator-(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.denominador)-(this->denominador*f2.numerador);
    f.denominador=this->denominador*f2.denominador;
    return f;
}

Fraccion Fraccion::operator*(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.numerador);
    f.denominador=this->denominador*f2.denominador;
    return f;
}

Fraccion Fraccion::operator/(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.denominador);
    f.denominador=this->denominador*f2.numerador;
    return f;
}

void Fraccion::imprime()
{
    std::cout<<this->numerador<<std::endl;
    std::cout<<"--"<<std::endl;
    std::cout<<this->denominador<<std::endl;
    std::cout<<std::endl;
}

int main()
{
    Fraccion f1{3,8};
    Fraccion f2{4,5};
    Fraccion f3{1,1};
    f3=f1+f2;
    f3.imprime();
    f3=f1-f2;
    f3.imprime();
    f3=f1*f2;
    f3.imprime();
    f3=f1/f2;
    f3.imprime();
    return 0;
}


