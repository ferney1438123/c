#include <iostream>
#include <conio.h>
using namespace std;
int n=0,horas=0,minutos=0,segundos=0;
int sgtotal,hr,sg,mn;
void tiempo(int sgtotal,int hr, int sg, int mn)
{
cout<<"ingrese el numero de segundos que desea convertir"<<endl;
cin>>sgtotal;
   hr=(sgtotal/3600);
    mn=((sgtotal - hr * 3600)/60);
    sg=(sgtotal - (hr*3600+mn*60));
    cout<<hr<<"h "<<mn<<"m "<<sg<<"s";
}
int main()
{
	tiempo(sgtotal,hr,sg,mn);	
}
