#include <iostream>
using namespace std;
int main(){
	
	int n;
	cout<< "ingrese el numero de estudiantes: "<<endl;
	cin>> n;
for (int i=1;i<=n;i++)
{	int p,n,nUno,nDos,nTres;
	
	cout<<"ingrese las notas del estudiante: "<<endl;
	cin>> nUno;
	cin>> nDos;
	cin>> nTres;
	p=((nUno+nDos+nTres)/3);
	cout<<"El promedio del estudiante es: "<<p<<endl<<endl;

}

	return 0;

	}
