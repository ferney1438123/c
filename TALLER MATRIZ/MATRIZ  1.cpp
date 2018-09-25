#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int numeros[3][4];
		for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
	cout<<"Matriz ordenada"<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]<<",";
		}
		cout<<endl;
	}
	
		cout<<"Primera fila:"<<endl;
		for(int i=0;i<1;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]<<",";
			
		}	
	}
	cout<<endl;
			cout<<"Primera columna:"<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<1;j++){
			cout<<numeros[i][j]<<",";
		}	
	}
	
		cout<<endl;
			cout<<"Ultima fila:"<<endl;
		for(int i=2;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]<<",";
		}	
	}
	
	getch();
	return 0;
}
	
