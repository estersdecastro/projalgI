#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> positivos; 
    vector<int> negativos; 
    int i, numero;

    for (i=0; i<10; i++) 
    {
        cout<<"Digite um número: ";
        cin>>numero;
        if (numero>=0)
        {
            positivos.push_back(numero);
        }
        else 
        {
            negativos.push_back(numero);
            
        }
    }
    
    cout<<positivos.size()<<" positivos"<<endl;
    cout<<negativos.size()<<" negativos";
}
