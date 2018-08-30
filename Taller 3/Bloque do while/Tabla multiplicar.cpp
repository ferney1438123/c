
#include <iostream>
using namespace std;
main(){
int m,n,i=1;
cout<<"Ingresa el numero de la tabla : "<<endl;
cin>>n;
do{

m = n * i;
cout<< n <<" * "<< i <<" = "<< m <<endl;
i++;
}
while(i<=10);

return 0;
}
