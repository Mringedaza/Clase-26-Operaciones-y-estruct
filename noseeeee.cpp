#include <iostream>
using namespace std; 
int n1,n2,rs; 
void suma(int x,int y)
{
	int rs1;
	rs1=x+y;
	cout<<"el restultado de la suma es "<<rs1<<endl;
}


int main()
{
	cout<<"Ingrese valor 1"<<endl;
	cin>>n1;
	cout<<"Ingrese valor 2"<<endl;
	cin>>n2;
	suma(n1, n2);
	
}
