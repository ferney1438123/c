#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"ingrese los tres numeros: "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if (a>b && a>c){
		cout<<"el numero mayor es: "<<a<<endl;
	}
	else if (b>a && b>c){
		cout<<"el numero mayor es: "<<b<<endl;
	}
	else if (c>a && c>b){
		cout<<"el numero mayor es: "<<c<<endl;
	}
	
	
	
	
	
	
	return 0;
}
