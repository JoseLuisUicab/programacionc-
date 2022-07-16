#include<iostream>
#include<conio.h>
#include <sstream>
#include <limits>
using namespace std;
using std::cin;
using std::numeric_limits;
struct vehiculo
{
    char marca[30];
    char modelo[35];
    int anio;
    char color[10];
    int precio;
} vehiculo1;

int main()
{
    cout<<"marca vehiculo: ";
    cin.getline(vehiculo1.marca,30);
    cout<<"modelo vehiclo: ";
    cin.getline(vehiculo1.modelo,30);
    cout<<"año del vehiculo: ";
    cin>>vehiculo1.anio;
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');// limpiar el buffer
    cout<<"color deñ vehiculo: ";
    cin.getline(vehiculo1.color,30);
    cout<<"precio vehiculo: ";
    cin>>vehiculo1.precio;

    cout<<"marca|"<<"  |modelo|"<<"  |anio|"<<" color|"<<"  precio|"<<endl;
    cout<<vehiculo1.marca<<"\t"<<vehiculo1.modelo<<"\t"
        <<vehiculo1.anio<<"\t"<<vehiculo1.color<<"\t"<<vehiculo1.precio<<endl;

}
