#include <iostream>
using namespace std;
int main(){
int n[100];
 int i=0,suma = 0,c=0; 
 for(int i=1;i<=200;i++){  
      if(i%2==0){
      	n[c]=i;
      	c++;
	  }	
  }
  for (int i=0;i<c;i++){
  	cout<<n[i]<<endl;
  suma+=n[i];
  }
  cout<<"el resultado de la suma es: "<<suma<<endl;
 return 0;
 
 }


