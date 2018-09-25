#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int numeros[2][5];
		cout<<"Primera columna de la matriz: "<<endl<<endl;
		for(int i=0;i<2;i++){
		for(int j=0;j<1;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
		cout<<endl;
		cout<<"Segunda columna de la matriz: "<<endl<<endl;
		for(int i=0;i<2;i++){
		for(int j=1;j<2;j++){
		
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	
		cout<<endl;
		cout<<"Tercera columna de la matriz: "<<endl<<endl;
		for(int i=0;i<2;i++){
		for(int j=2;j<3;j++){
		
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	
		cout<<endl;
		cout<<"Cuarta columna de la matriz: "<<endl<<endl;
		for(int i=0;i<2;i++){
		for(int j=3;j<4;j++){
		
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	
		cout<<endl;
		cout<<"Quinta  columna de la matriz: "<<endl<<endl;
		for(int i=0;i<2;i++){
		for(int j=4;j<5;j++){
		
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"Matriz ordenada"<<endl;
		for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			cout<<numeros[i][j]<<",";
		}
		cout<<endl;
	}
		}
