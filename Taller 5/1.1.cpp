#include <iostream>
#include <conio.h>
using namespace std;
int a,b,c,aux;
void funcion()
{ 
if(a>b) 
{aux=a; 
a=b; 
b=aux; 
} 
if(a>c) 
{aux=a; 
a=c; 
c=aux; 
} 
if(b>c) 
{aux=b; 
b=c; 
c=aux; 
} 
cout<<"los datos ordenados son: "<<endl; 
cout<<a<<endl<<b<<endl<<c<<endl; 
getch(); 
}
int main()
{
	
cout<<"ingrese los tres datos:"<<endl; 
cin>>a;
cin>>b; 
cin>>c;
funcion();
}

