#include <iostream>
using namespace std;


struct datos{
	int identificacion;
	string nombre;
	string materia;
	double nota;
};	double acumular; 

datos notas[3]; 

int main()
{
	for (int i=0;i<=2;i++)
	{
		cout<<"identificacion "<<endl;
		cin>>notas[i].identificacion;
		cout<<"Nombre "<<endl;
		cin>>notas[i].nombre;
		cout<<"Materia"<<endl; 
		cin>>notas[i].materia;
		cout<<"Nota"<<endl;
		cin>>notas[i].nota;
		system("cls");
		cout<<notas[i].identificacion<<"\t"<<notas[i].nombre<<"\t"<<notas[i].materia<<"\t"<<notas[i].nota<<endl;
		acumular=acumular+notas[i].nota;
		system("pause");
		system("cls");
	}
	system("cls");
	
	
	
	for (int i=0;i<=2;i++)
	{
		cout<<notas[i].identificacion<<"\t"<<notas[i].nombre<<"\t"<<notas[i].materia<<"\t"<<notas[i].nota<<endl;
		acumular=acumular+notas[i].nota;
		
	}
	cout<<"Promedio grupo "<<acumular/3<<endl;
	
}
