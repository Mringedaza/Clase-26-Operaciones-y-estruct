#include <iostream>	
using namespace std;
int n1,n2,rs; 

void captura()
{
	cout<<"ingrese valor 1"<<endl;
	cin>>n1;
	
	cout<<"ingrese valor 2"<<endl;
	cin>>n2;
}

void suma()
{
	rs=n1+n2;
	cout<<"El resultado de la suma es "<<rs<<endl;
}

void resta()
{
	rs=n1-n2;
	cout<<"El resultado de la resta es "<<rs<<endl;
}

int main ()
{
    captura();
    suma();
    resta();
}
