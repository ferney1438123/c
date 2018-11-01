//Ferney Hurtado
//30/10/2018
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct producto
{
char nombre[40];
int precio;
int cantidad;
};

struct tienda
{
	char nombre[40];
	struct producto pro[4];

}tien [4];

int n;
int total[4];
int t=0;
	void nombreTienda(){
		cout << " Ingrese el nombre de la tienda " << endl;	
		for (int i=1;i<=4;i++){
			cout<<"Tienda: "<<i<<endl;
			cin.getline(tien[i].nombre,40);
		}
		}




void mostrarTienda(){	
		cout << " \na que tienda desea dirigirse \n" <<endl;
			for (int i=1;i<=4;i++){
			cout<<i<<" : "<<tien[i].nombre<<endl<<endl;	
		}
		cin>>n;
		}
				
void nombreProducto()
{
cout<<"\nIngrese el nombre de los cuatro productos\n"<<endl;	
for(int i=1;i<=4;i++){
cout<<"Producto: "<<i<<endl;
cin>>tien[n].pro[i].nombre;		
				}
cout<<endl<<endl;
	
		}

void precioProducto(){
	cout<<"\nIngrese el precio de los cuatro productos\n"<<endl;	
for(int i=1;i<=4;i++){
cout<<"Producto: "<<i<<endl;
cin>>tien[n].pro[i].precio;	
				}
cout<<endl<<endl;
		}



void cantidadProductoYtotal()
{
cout<<"\nIngrese cuantos productos compro\n"<<endl;	
for(int i=1;i<=4;i++){
cout<<"Producto: "<<i<<endl;
cin>>tien[n].pro[i].cantidad;		

				}
cout<<endl<<endl;

}
void totalCadaProducto(){
	
for(int i=1;i<=4;i++){		
total[i]=tien[n].pro[i].cantidad*tien[n].pro[i].precio;
cout<<"El valor es: "<<total[i]<<endl;
}	

}

void totalPagar()
{
	
t=(tien[n].pro[1].cantidad*tien[n].pro[1].precio)+(tien[n].pro[2].cantidad*tien[n].pro[2].precio)+(tien[n].pro[3].cantidad*tien[n].pro[3].precio)+(tien[n].pro[4].cantidad*tien[n].pro[4].precio);
cout<<"\nEl total global es: "<<t<<endl;	
}


int main()
{	


nombreTienda();
for (int i=1;i<=4;i++){
mostrarTienda();

nombreProducto();

precioProducto();

cantidadProductoYtotal();

totalCadaProducto();

totalPagar();
}
}

				
		
