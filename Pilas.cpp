#include <iostream>

template <typename Tipo>
class Pila
{
    private:
        int tope;
        Tipo *arreglo;
        int max;
    public:
        Pila(int tam); //Constructor 
        ~Pila(); //Destructor
        void Push(Tipo);
        Tipo Pop();
};

template <typename Tipo>
Pila<Tipo>::Pila(int tam)
{
    tope=0;
    max=tam;
    arreglo = new Tipo[max]; 
}

template <typename Tipo>
Pila<Tipo>::~Pila()
{
    delete[] arreglo;
}

template <typename Tipo>
void Pila<Tipo>::Push(Tipo d)
{
    if(tope<max)
    {
        arreglo[tope]=d;
        tope++;
    }
    else
        std::cout<<"Pila llena";
}

template <typename Tipo>
Tipo Pila<Tipo>::Pop()
{
    if(Tope>=0)
    {
        
    }
}

int main()
{
    Pila <int> P1{5};
    P1.Push(3);
    /*P1.push(7);
    int x=P1.pop();
    std::cout<<x<<"\n";
    x=P1.pop();
    std::cout<<x<<"\n";
    x=P1.pop();
    std::cout<<x<<"\n";*/
}