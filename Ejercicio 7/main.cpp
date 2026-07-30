#include <iostream>
using namespace std;

int main(){
	string nombre;
	int capital;
	int tasa;
	int tiempo;
	int interessimp;
	int capitalFinal;
	
	cout<<" Digite el nombre: "<<endl;
	cin>>nombre;
	
	cout<<"Digite el capital a prestar: "<<endl;
	cin>>capital;
	
	cout<<"Digite la tasa de interes (0-100): "<<endl;
	cin>>tasa;
	
	cout<<"Digite el tiempo de duracion a pagar en funcion de annios: "<<endl;
	cin>>tiempo;
	
	interessimp= capital*tasa*tiempo;
	capitalFinal= capital+interessimp; 
	
	cout<<" El interes simple que debera pagar "<<nombre<<" al final del prestamo es: "<<interessimp<<endl;
	
	cout<<" El monto final que debera pagar "<<nombre<<" es: "<<capitalFinal<<endl;
	
	return 0;
}
