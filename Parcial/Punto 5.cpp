
//punto 5
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void funpot()
{	
int a=0,b=0;
int c=0;
	cout<<"ingrese el numero"<<endl;
	cin>>a;
	cout<<"ahora ingrese su respectiva potencia"<<endl;
	cin>>b;
	c=pow(a,b);
	cout<<"el resultado es: "<<c<<endl;
}
int main()
{
	funpot();
}
