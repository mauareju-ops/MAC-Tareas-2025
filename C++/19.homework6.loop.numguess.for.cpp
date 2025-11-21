#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    srand(time(0));
    int NUMERO_ADIVINAR = rand()%100+1 , numero_usuario=-1;
    while(NUMERO_ADIVINAR!=numero_usuario){
    cout << "Ingresa el número a adivinar [1, 100]:\n";
    cin >> numero_usuario;
    if(numero_usuario == NUMERO_ADIVINAR){cout<< "Felicidades, adivinaste el número :)";
    }else if (numero_usuario<NUMERO_ADIVINAR) {cout << "El numero a adivinar es mayor\n";
    }else {cout<<"El numero a adivinar es menor\n";}

}
}
