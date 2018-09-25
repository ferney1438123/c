#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int m1[3][3];
int m2[3][3];
int suma[3][3];

		cout<<"Primera matriz: "<<endl<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}
	} 
	
		cout<<"Segunda matriz: "<<endl<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m2[i][j];
		}
	} 
	
	cout<<"Primera matriz ordenada"<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<m1[i][j]<<",";
		}
		cout<<endl;
	}
		cout<<"Segunda matriz ordenada"<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<m2[i][j]<<",";
		}
		cout<<endl;
	}
	
    for  (int i=0;i<3;i++)
    {
        for  (int j=0;j<3;j++)
        {
            suma[i][j]=m1[i][j]+m2[i][j];
            cout << "Valor posicion "<<"("<<i<<")"<<"("<<j<<"): "<<suma[i][j]<<endl;
        }
    }
}

