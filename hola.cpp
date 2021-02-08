#include <iostream>
using namespace std;


class Calcular
{
private:
    

public:
    Calcular(){}
    ~Calcular(){}
    int PrimeGen(int, int);
};


int main(int argc, char const *argv[])
{
    cout<< " please enter number" <<endl;
    int x, y;

    cin>>x>>y;
    return 0;
}

int Calcular::PrimeGen(int x, int y){
    for (int i = x; i < y; i++)
    {
        bool etiempo=true;
       for (int j = 2; j*j <= i; j++) {
           if(i % j != 0){
               etiempo= false;
               break;
           }
       }
    }
}