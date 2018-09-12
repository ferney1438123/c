#include <iostream>
#include <conio.h>
using namespace std;
void proceso();
void ciclo();
int main()
{
	proceso();
}
void proceso()
{
	int a, b;
	float p;
	cout<<"ingrese el numero de preguntas de la prueba"<<endl;
	cin>> a;
	cout<<"Ingrese el numero de respuesta correctas del trabajador"<<endl;
	cin>>b;
	p=((b*100)/a);
	if(p>=80)
	cout<<"El trabajador tiene un nivel maximo, con un "<<p<<"%";
	else
	  if(p>=65&&p<80)
	  cout<<"El trabajador tiene un nivel medio, con un "<<p<<"%";
	    else
	      if(p>=40&&p<65)
	      cout<<"El trabajador tiene un nivel regulas, con un "<<p<<"%";
	        else
	         if(p<40)
	         cout<<"El trabajador tiene un nivel bajo, con un "<<p<<"%";
	         ciclo();
	         
}
void ciclo()
{
	int z;
	cout<<"\nQuiere repetir el calculo\n";
	cout<<"----\n";
	cout<<"1=SI\n";
	cout<<"2=NO\n";
	cout<<"----\n";
	cin>>z;
	if(z==1)
	{
		proceso();
	}
	else
	cout<<"Adios entonces";
	
}
