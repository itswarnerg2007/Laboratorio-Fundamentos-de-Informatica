#include <iostream>
using namespace std;

int main(){
	string nombre;
	int fechaactual;
	int fecharetiro;
	int cantPasteles;
	int preciopasteles;
	int abono;
	int total;
	float iva;
	int totalDefini;
	int saldo;
	
	cout<<"Digite el nombre Completo del cliente: "<<endl;
	getline(cin, nombre);
	cout<<"Digite la fecha actual (dd/mm/aaaa): "<<endl;
	cin>>fechaactual;
	cout<<"Digite la fecha del retiro (dd/mm/aaaa): "<<endl;
	cin>>fecharetiro;
	cout<<"Digite la cantidad de pasteles: "<<endl;
	cin>>cantPasteles;
	cout<<"Digite el precio de pasteles: "<<endl;
	cin>>preciopasteles;
	cout<<"Digite el abono a realizar: "<<endl;
	cin>>abono;
	
	
	total=cantPasteles*preciopasteles;
	iva= total *0.15;
	totalDefini=total+iva;
	saldo=totalDefini-abono;
	
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"\t \t Factura Digital"<<endl;
	cout<<"\t\t El Rey Del Pastelito"<<endl;
	
	cout<<"Fecha actual: "<<fechaactual<<endl;
	cout<<"Fecha de entrega: "<<fecharetiro<<endl;
	cout<<"Nombre: "<<nombre<<endl<<endl;
	
	cout<<"\t Producto \t cantidad \t Precio X Unidad \t Total"<<endl;
	cout<<"\t Pasteliro \t\t"<<cantPasteles<<"\t"<<preciopasteles<<"\t\t\t"<<total<<endl<<endl;
	
	cout<<"IVA---------------------------------------------------------"<<"\t +"<<iva<<endl<<endl;
	cout<<"Total a pagar----------------------------------------------"<<"\t"<<totalDefini<<endl<<endl;
	cout<<"Abono----------------------------------------------------"<<"\t -"<<abono<<endl<<endl;
	cout<<"Saldo---------------------------------------------------"<<"\t"<<saldo<<endl<<endl;
	
	cout<<"--------------------------------------------------------"<<endl;
		
	system ("pause>0");
}
