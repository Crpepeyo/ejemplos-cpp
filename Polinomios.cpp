#include <iostream>
#include <cmath>

class Polinomio 
{
    friend void operator <<(std::ostream &salida, Polinomio p);
    friend void operator >>(std::istream &entrada, Polinomio &p);
    
    private:
        int a;
        int b;
        int c;
    public:
        Polinomio(int a, int b, int c);
        int operator()(int);
        float operator~();
        Polinomio operator+(Polinomio otro);
};

Polinomio :: Polinomio(int a, int b, int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

void operator <<(std::ostream &salida, Polinomio p)
{
    salida<<p.a<<"x^2+"<<p.b<<"x+"<<p.c;
}

void operator >>(std::istream &entrada, Polinomio &p)
{
    std::cout<<"a:";
    entrada>>p.a;
    std::cout<<"b:";
    entrada>>p.b;
    std::cout<<"c:";
    entrada>>p.c;
}

int Polinomio::operator()(int x)
{
    return (this->a*x*x) + (this->b*x) + (this->c);
}

float Polinomio::operator~()
{
        return (-this->b + std::sqrt(this->b*this->b-(4*this->a*this->c)))/2*this->a;
}
Polinomio Polinomio::operator+(Polinomio otro)
{
    Polinomio r{this->a+otro.a,this->b+otro.b,this->c+otro.c};
    return r;
}

int main()
{
    Polinomio p{0,0,0};
    Polinomio o{1,2,3};
    std::cin>>p;
    int x=2;
    int r=p(x);
    std::cout<<"Polinomio: "<<p;
    std::cout<<std::endl;
    std::cout<<"Evaluado en "<<x<<" es "<<r<<std::endl;
    std::cout<<"Raiz: "<<~p<<std::endl;
    std::cout<<p;
    std::cout<<"  +  ";
    std::cout<<o;
    std::cout<<"  =  ";
    std::cout<<p+o;
    return 0;
}