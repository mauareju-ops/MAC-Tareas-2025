#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ui;
    cout<<"Ingresa el numero hasta el que quieres validar si es primo:\n";
    cin>>ui;
    cout<<"Numeros primos entre 0 y " << ui << ":\n";
    for (int i = 2; i <= ui; i++){
        bool isP=true;
      for(int j=2;j<=sqrt(i);j++){
        if(i%j==0){
          isP=false;
          break;
          }}if(isP){
          cout<<i<<" ";}
      }cout<<"\n";
}
