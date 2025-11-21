#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int usnum;
    int rev;
    int powr=0;
    cout<<"ingresa el numero binario a convertir a base 10\n";
    cin>>usnum;
     for(rev=0;usnum>0;usnum/=10){
      int rem=usnum%10;
      rev+=rem*pow (2, powr);
      powr++;
}
cout<<rev<<"\n";

}
