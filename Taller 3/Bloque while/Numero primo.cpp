#include <iostream>
using namespace std;
int main(){
	int numero,m=2;
	bool sentencia = true;
	
	cout<< "ingrese su numero "<<endl;
	cin>> numero;
	while(sentencia && m < numero){
		if(numero % m == 0)
			sentencia = false;
			m = m+1;
	}
	if(sentencia)
		cout<<"el numero es primo "<<endl;
		else
		cout<<"el numero no es primo"<<endl;
	
	
	
	
	return 0;
}
