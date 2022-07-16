#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n = 0;
	cout<<"CUANTOS NUMEROS: ";
	cin>>n;
	int num[n];
	for(int i= 0; i < n; i++) {
		cout<<"ingrese los numeros: ";
		cin>>num[i];
	}
	for(int i= 0; i < n; i++) {
		cout<<num[i]*num[i]<<"-";
	}

}
