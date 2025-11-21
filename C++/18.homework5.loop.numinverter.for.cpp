#include <iostream>
using namespace std;

int main(){
    int usnum;
    int rev;
    cout<<"ingresa el numero a invertir\n";
    cin>>usnum;
     for(rev=0;usnum>0;usnum/=10){
      int rem=usnum%10;
      rev=rev*10+rem;
}
cout<<rev<<"\n";

}
