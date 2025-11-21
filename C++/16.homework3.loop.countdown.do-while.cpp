#include <iostream>
using namespace std;
int main() {
	int usri;
	int i=0;
	cout<<"Ingresa el n numero del que inicia la cuenta regresiva\n";
	cin>>usri;
	do{
	    cout<<usri-i<<"\n";
	    i++;
        }while(i<=usri);
}
