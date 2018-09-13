#include <iostream>
#include <conio.h>
using namespace std;
void mult(float a, float b)
{
	float multiplicacion;
	multiplicacion=a*b;
	cout<<"el resultado es: "<<multiplicacion;

}
int main()
{
	float a=0,b=0;
	cout<<"ingrese los numeros que se van a multiplicar"<<endl;
	cin>>a;
	cin>>b;
 	mult(a,b);
     
}
