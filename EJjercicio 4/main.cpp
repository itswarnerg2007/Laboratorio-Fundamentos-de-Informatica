#include<iostream>
using namespace std;

int main(){
	int annioactual=0;
	string nombre= "";
	int annionacimiento=0;
	float peso=0;
	float estatura=0.0;
	int edad;
	float imc;
	
	
	cout<<"Digite el annio actual: "<<endl;
	cin>>annioactual;
	cout<<"Digite su nombre: "<<endl;
	cin>>nombre;
	cout<<"Digite su annio de nacimiento: "<<endl;
	cin>>annionacimiento;
	cout<<"Digite su peso en kilos: "<<endl;
	cin>>peso;
	cout<<"Digite su estatura en metros. "<<endl;
	cin>>estatura;
	
	edad= annioactual-annionacimiento;
	imc=peso/(estatura*estatura);
		
	cout<<"---------------------------------------------"<<endl;
	cout<<"Hola "<<nombre<<" su edad es de "<<edad<<endl;
	cout<<"Su indice de masa coropral es de "<<imc<<endl<<endl;
	cout<<"Le deseo un bonito dia"<<endl;
	cout<<"---------------------------------------------"<<endl;
}
