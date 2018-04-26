#include <iostream>

class Calentador
{
    private: 
        int temperatura;
        int incremento;
        int min,max;
    
    public:
        Calentador(int min,int max,int temperatura=0);
        void calentar();
        void enfriar();
        void imprimeT();
        int accedeT() const;// a los metodos de acceso se le agrega const para indicar que no modifica las variables
        void imprimeFaren() const;
};// punto y coma obligatorio

Calentador::Calentador(int min,int max,int temperatura)
{
    if(min>max)
    {
        std::cout<<"Error en el rango minimo-maximo"<<std::endl;
        exit(EXIT_FAILURE);
        //throw "Error en el rango min-max";
    }
    if(temperatura>=min && temperatura <=max)
    {
        this->temperatura=temperatura;
    }
    else
    {
        this->temperatura=min;
    }
    this->temperatura=temperatura;
    incremento=3;
    this->min=min;
    this->max=max;
}

void Calentador::calentar()
{
    if(temperatura+incremento<=max)
         temperatura+=incremento;
}

void Calentador::enfriar()
{
    if(temperatura-incremento>=min)
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
    //try
    //{
        Calentador c1{-10,10};
        Calentador c2{30,10,-10};
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
    //}
    //catch(const std::runtime_error &e)
    //{
        
    //}
    
}