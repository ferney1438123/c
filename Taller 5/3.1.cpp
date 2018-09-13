#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int i,n;
using namespace std;
void funcion()
{
	cout<<"ingrese su numero"<<endl;
	cin>>n;
	if(n<0)
		{
		cout<<"Error"<<endl;
		}
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;		
	}
}
int main()
{
	funcion();	
}
