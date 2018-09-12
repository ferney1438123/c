#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int c1=0,c2=0;
	int i=1;
	do
	{
	cout<<"ingrese un numero"<<endl;
	cin>>i;
	if(i==0)
	{
		cout<<"Adios";
	}
	else
		if(i%2==0){
	c1+=1;
	cout<<"El numero de pares hasta el momento es : "<< c1<<endl;
}
if(i%2>0){
	c2+=1;
	cout<<"El numero de impares hasta el momento es : "<< c2<<endl;
}
	}
	while(i!=0);
	
}
