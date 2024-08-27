
#include <iostream>
using namespace std; 
int n1,n2,rs; 
int opcion;
bool seguir=true;


int suma (int x, int y)
{
	cout<<"ingrese valor 1"<<endl;
	cin>>x;
	
	cout<<"ingrese valor 2"<<endl;
	cin>>y;
	
	int rs2;
	rs2=x+y;
	return rs2;
}

int resta (int x, int y)
{
	int rs2;
	rs2=x-y;
	return rs2;
}

int multiplicacion (int x, int y)
{
	int rs3;
	rs3= x*y;
	return rs3;
}
int division(int x, int y)
{
	int rs4;
	rs4= x/y;
	return rs4;
}

int main()
{
	
	do{
		cout<<"Menu operaciones"<<endl;
		cout<<"2. Suma"<<endl;
		cout<<"3. Resta"<<endl;	
		cout<<"4. Multiplicacion"<<endl;
		cout<<"5. Division"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>opcion;
		
		switch(opcion)
		{
		
			case 1: rs=suma(n1,n2);
				cout<<"el restultado de la suma es "<<rs<<endl;
				break;
			case 2: rs=resta(n1,n2);
				cout<<"el restultado de la resta es "<<rs<<endl;
				break;;
			case 3: cout<<"el restultado de la multiplicacion es "<<rs<<endl;
				break;
			case 4: rs=division(n1,n2);
				cout<<"el restultado de la division es "<<rs<<endl;
				break;
			case 5: seguir=false;
				break; 
			 
		}

	}while(seguir==true);
	
	
	
	
	
	
	
}
