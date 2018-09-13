#include <iostream>
#include <conio.h>
using namespace std;
int i=0,j=0,aux=0;
int v[100],t;
void funcion();
void escribir();
void leer()
{
cout<<"ingrese el tamaño del vector"<<endl;
cin>>t;
for (i=0;i<t;i++){
	cout<<"ingrese los valores numericos"<<endl;
	cin>>v[i];
}
}
void funcion()
{
	for (i=0;i<t;i++)
	{
		for (j=i+1;j<t;j++)
		{
			if(v[j]<v[i])
			{
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
			}
		}
	}
}
void escribir()
{
	for (i=t-1;i>=0;i--)
	{
		cout<<"los numeros en orden son: "<<v[i]<<endl;
	}
}
int main()
{
leer();
funcion();
escribir();		
}
