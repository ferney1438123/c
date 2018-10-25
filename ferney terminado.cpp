#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct promedio
{
	float n1;
	float n2;
	float n3;	
};

struct estudiante
{
	char nombre[40];
	char cc[40];
	struct promedio prom;	
}alumno;

int main()
{
int o,i=0,n;
float prom_alum;

do
{
cout<<"Selecione un numero: "<<endl;
cout<<"1: Ingresar datos"<<endl;
cout<<"2: Mostrar notas"<<endl;
cout<<"3: Mostrar estudiante"<<endl;
cout<<"4: Mostrar estudiante, notas del estudiante y promedio"<<endl;
cout<<"5: salir"<<endl;
cin>>o;

switch(o)
{
	case 1:
	cout<<"Ingrese el numero de estudiantes"<<endl;
	cin>>n;
	while(i<n){
	cout<<"Ingrese los nombres del nombre  del estudiante"<<endl;
	cin>>alumno.nombre ;
	cout<<"\ningrese las notas del alumno"<<endl;
	cin>>alumno.prom.n1;
	cin>>alumno.prom.n2;
	cin>>alumno.prom.n3;
	prom_alum=((alumno.prom.n1+alumno.prom.n2+alumno.prom.n3)/3);
	i++;
	}
	break;
	
	case 2:
	cout<<alumno.prom.n1<<endl;
	cout<<alumno.prom.n2<<endl;
	cout<<alumno.prom.n3<<endl;
	break;
	
	case 3:
	cout<< alumno.nombre<<endl;
	break;
	
	case 4:
	cout<<alumno.nombre<<endl;
	cout<<alumno.prom.n1<<endl;
	cout<<alumno.prom.n2<<endl;
	cout<<alumno.prom.n3<<endl;
	cout<<prom_alum<<endl;
	break;
	
	case 5:
	cout<<"EL PROGRAMA FINALIZO GRACIAS POR USARLO"<<endl;
	break;	
	case 6:
		if (o<1 || o>5)
		{
			cout<<"Numero no valido"<<endl;
		}
	break;
}

}
while (o<5);
}

	
