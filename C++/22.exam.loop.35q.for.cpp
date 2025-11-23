#include <iostream>
using namespace std;

int main () {
	int usri;
	int row;
	int spa=0;
        
	cout<<"input number of rows\n";
	cin>>usri;
	  for(int i=0, row=usri;i<usri;i++)
	   {
	     if(spa>0){
		for(int ss=0;ss<spa;ss++){
		    cout<<" ";
	     }}
	     for(int rr=0;rr<row;rr++){
                 cout<<"*";
		 }
		spa++;
		row--;
                cout<<"\n";
		
}
cout<<usri<<"\n"<<row<<"\n"<<spa<<"\n";

}
