#include <iostream>
using namespace std;
int main() {
	int usri;
	int numsqrt=0;
	cout<<"Ingresa el n numero de numeros al cuadrado a sumar\n";
	cin>>usri;
	for(int i=1;i<=usri;i++){
		numsqrt+=i*i;
		if(i!=usri){cout<<i<<"^2"<<" + ";
		 
		}else cout<<"\nResultado: "<<numsqrt;
}

}
