#include <iostream>
using namespace std;
int main() {
	int usri;
	int numsqrt=0;
	int i=1;
	cout<<"Ingresa el n numero de numeros al cuadrado a sumar\n";
	cin>>usri;
	while(i<=usri){
		numsqrt+=i*i;
		if(i!=usri){cout<<i<<"^2"<<" + ";
		 
		}else cout<<"\nResultado: "<<numsqrt;
		i++;
}

}
