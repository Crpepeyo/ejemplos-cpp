#include <iostream>


class Fraccion 
{
    private:
        int numerador;
        int denominador;

    public:
        Fraccion(int num,int den);
        Fraccion operator +(Fraccion f2);
        Fraccion operator -(Fraccion f2);
        Fraccion operator *(Fraccion f2);
        Fraccion operator /(Fraccion f2);
        void imprime();
        friend void operator <<(std::ostream &salida, Fraccion f);
        friend void operator >>(std::istream &entrada, Fraccion &f);
};

void operator <<(std::ostream &salida, Fraccion f)
{
    salida<<f.numerador<<"\n--"<<"\n"<<f.denominador<<"\n";
}

void operator >>(std::istream &entrada, Fraccion &f)
{
    std::cout<<"numerador:";
    entrada>>f.numerador;
    std::cout<<"denominador:";
    entrada>>f.denominador;
}

Fraccion::Fraccion(int num,int den)
{
    this->numerador=num;
    this->denominador=den;
}

Fraccion Fraccion::operator +(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.denominador)+(this->denominador*f2.numerador);
    f.denominador=this->denominador*f2.denominador;
    return f;
}

Fraccion Fraccion::operator -(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.denominador)-(this->denominador*f2.numerador);
    f.denominador=this->denominador*f2.denominador;
    return f;
}

Fraccion Fraccion::operator *(Fraccion f2)
{
    Fraccion f{0,0};
    f.numerador=(this->numerador*f2.numerador);
    f.denominador=this->denominador*f2.denominador;
    return f;
}

Fraccion Fraccion::operator /(Fraccion f2)
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
    Fraccion f1{1,1};
    std::cin>>f1;
    std::cout<<f1;
    Fraccion f2{1,1};
    std::cin>>f1;
    std::cout<<f1;
    Fraccion f3{1,1};
    f3=f1+f2;
    std::cout<<f3;
    f3=f1-f2;
    std::cout<<f3;
    f3=f1*f2;
    std::cout<<f3;
    f3=f1/f2;
    std::cout<<f3;
    return 0;
}


