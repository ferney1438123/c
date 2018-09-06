#include <iostream>
#include <math.h>
using namespace std;
int funcion(int n)
{	int r,R,V;
	V=fabs(n);
	R=sqrt(V);
	r=R;
	return r;
}
int main()
{ 	int n;
	cout<<"ingrese un numero "<<endl;
	cin>>n;
	cout<<"el resultado es: "<<funcion(n);
}
