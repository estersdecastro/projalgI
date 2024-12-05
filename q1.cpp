#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define NUMEROS 20

int main()
{    
    unsigned int seed = static_cast<unsigned int>(time(0));
    srand(seed);
    int i, numero[NUMEROS], pares, impares;
    
    for (i=0; i<20; i++) 
    {
        numero[i] = 1+rand()%2;
        
        if (numero[i] == 1) 
        {
            impares++;
        }
        else 
        {
            pares++;
        }
        
    }
    
    cout<<pares<<endl;
    cout<<impares<<endl;
    

    return 0;
}
