#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n = 0,cubo,cuadrado;
    double raiz=0;

    do
    {
        cout<<"\n";
        cout<<"ingrese un numero: ";
        cin>>n;
        if(n<0)
        {
            cubo = pow(n,3);
            cout<<"el numero: "<<n<<" su cubo es: "<<cubo;
        }
        else if(n>=0 && n<=100)
        {
            cuadrado=pow(n,2);
            cout<<"el numero: "<<n<<" su cuadrado es: "<<cuadrado;
        }
        else if(n>=101 && n<=1000)
        {
            raiz=sqrt(n);
            cout<<"el numero: "<<n<<" su raiz es: "<<raiz;
        }
    }
    while(n!=0);


    }
