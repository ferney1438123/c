/* Nombres: Ferney Hurtado, Juan Diego, Cesar Gomez
	Proyecto 3*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct producto
{
	char nombre[40];
	int precio;
	int cpro;
	int c;
};
struct producto pro[]={
"Tomate",2000,6,0,
"Cebolla de huevo",1600,4,0,
"Cebolla de rama",2200,4,0,
"Platano verde",1300,10,0,
"Habichuela",2500,2,0,
"Zanahoria",2500,4,0,
"Remolacha",2800,4,0,
"Arracacha",3000,4,0,
"Papa lavada",1500,12,0,
"Papa sin lavar",1200,12,0,
"Papa criolla",2800,6,0,
"Ajo",600,15,0,
"Pimenton",800,6,0,
"Arroz Flor Huila",1600,24,0,
"Huevos",300,300,0,
"Cafe aguila roja",1000,24,0,
"Nescafe papeleta 2 g",150,50,0,
"Nescafe papeleta 7 g",1000,12,0,
"Salsa de tomate",1000,12,0,
"Mayonesa",1000,12,0,
"Salsa rosada",1000,12,0,
"Mantequilla",800,16,0,
"Aromatel suavisante",300,12,0,
"Limpido Clorox",1000,24,0,
"Limpido Blancox",1000,24,0,
"Limpido patojito",1000,24,0,
"Detergente Fab 100 g",1000,24,0,
"Detergente Fab 250 g",2000,24,0,
"Detergente Fab 450 g",3600,24,0,
"Detergente Dersa 100 g",1000,24,0,
"Detergente Dersa 250 g",1900,24,0,
"Detergente Dersa 500 g",2900,24,0,
"Platano maduro",1300,10,0,
"VIVE 100% 380 ml",2000,12,0,
"Speed Max plastico",1000,12,0,
"Speed Max en lata",1000,12,0,
"Arroz Diana",1400,24,0,
"Pepsi 2 litros",2500,16,0,
"Arroz ROA",1500,24,0,
"De todito limon 150 g",3800,12,0,
"De todito BBQ 150",3800,12,0,
"De todito natural 150 g",3800,12,0,
"De todito MIX 45 g",3800,12,0,
"De todito limon 45 g",3800,12,0,
"De todito BBQ 45 g",1700,12,0,
"De todito natural 45 g",1700,12,0,
"Choclitos 230 g",3200,12,0,
"Choclitos 29 g",800,12,0,
"Chocoramo 70 g",1300,12,0,
"Gansito 45 g",600,12,0,
"Malboro fusion",500,100,0
};

void nYp()
{
	cout<< "Lista de productos TIENDA MELO: "<<endl<<endl;
for (int i=0;i<50;i++)
{
	
	cout<<"["<<i<<"]"<<pro[i].nombre<< " ("<<"Precio: "<<"$"<<pro[i].precio<<")" <<endl;

}
	cout<<endl;
}
void pagos()
{	int doo,caja=100000,n=0,cp=0,total1,total2,devuelta=0,dinero=0;
	cout<<endl<<endl;

	do
	{
	cout<<"Ingrese el numero del producto que necesita"<<endl<<endl;
	cin>>n;
	cout<<"Ingrese la cantidad de productos que necesita"<<endl<<endl;
	cin>>cp;
	pro[n].cpro-=cp;
 	total1=pro[n].precio*cp;
	total2=total2+total1;

if(cp>=(pro[n].cpro*0.5))
{
pro[n].c+=1;
}
cout<<"Desea adquirir otro producto?"<<endl;
	cout<<"Si: 0 "<<"No: 1 "<<endl;
	cin>>doo;

}
	while(doo<1);
	

	cout<<"Ingrese la cantidad con la cual va a pagar"<<endl<<endl;
	cin>>dinero;
	devuelta=dinero-total2;
	if (devuelta<0)
	{
		devuelta=devuelta*-1;
		cout<<"Debe : "<<devuelta<<endl;
	}

	else
	{
	cout<<"Su devuelta es: "<<devuelta<<endl;
	cout<<"El dinero en caja es: "<<caja<<endl;
	caja=((caja+dinero)-devuelta);
	cout<<"El dinero en caja es:"<<caja<<endl;
	}
		
	}

void inventario()
{
	int c,ax;
	cout<<"INGRESE LA CLAVE"<<endl;
	cin>>c;
	if(c==1234)//contraseña
		{
				{
			for (int i=0;i<50;i++)
	{
	cout<<"La cantidad de cada producto es: "<<pro[i].nombre<<" = "<<pro[i].cpro<<" unidades"<<endl;
	}

		for (int i=0;i<50;i++)
	{
			if (pro[i].c>0)
	{
		int s=pro[i].precio*0.8;
		
		cout<<"Se debe adquirir: "<<pro[i].nombre<<endl<<endl;
		cout<<"Precio de adquisicion por unidad: "<<s<<endl<<endl;
		cout<<"Cuantas unidades desea adquirir?"<<endl<<endl;
		cin>>ax;
		pro[i].cpro=ax;
		int s2= (s*ax);
		cout<<"Usted adquirio "<<ax<<" unidades de "<<pro[i].nombre<<" Por : $"<<s2<<endl<<endl;
		//cout<<"Su saldo actual en caja es: "<<endl;
		


}

	}	
	}
		}

else
{
	cout<<"FATAL ERROR"<<endl;
}
	}

void preciop()
{
	int n,m;
	int c;
	cout<<"INGRESE LA CLAVE"<<endl;
	cin>>c;
	if(c==1234)//contraseña
	{
	cout<<"Ingrese el numero del producto al cual se va a modificar su valor "<<endl<<endl;
	cin>>n;
	cout<<"Ingrese el nuevo precio del producto"<<endl;
	cin>>m;
	pro[n].precio=m;
	}
	else
{
	system("cls");
	cout<<"FATAL ERROR"<<endl;
}

}
																																																																																																																																																																																																																																																															
int main()
{	
int o;
do
{
cout<<endl;
cout<<"Selecione una accion: "<<endl<<endl;
cout<<"1: ver productos"<<endl;
cout<<"2: adquirir un producto"<<endl;
cout<<"3: inventario (SOLO ADMINISTRADORES!)"<<endl;
cout<<"4: modificar precio (SOLO ADMINISTRADORES!)"<<endl;
cout<<"5: Salir"<<endl;

cin>>o;
system("cls");
switch(o)
{
case 1:
nYp();
break;
case 2:
nYp();
pagos();
break;
case 3:
inventario();
break;
case 4:
nYp();
preciop();
break;
case 5:
cout<<"Gracias por usar este programa"<<endl;
break;
}
}
while (o>=1&&o<5);
}


