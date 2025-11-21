#include <iostream>
using namespace std;
int main() {
	int usri;
	int numsqrt=0;
	int i=1;
	cout<<"Ingresa el n numero de numeros al cuadrado a sumar\n";
	cin>>usri;
	do{
		numsqrt+=i*i;
		cout<<i<<"^2"<<" + ";
		i++;
}while(i<=usri);
cout<<"\nResultado: "<<numsqrt;
}
