#include<iostream>
using namespace std;

int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	float resultado=0.0;
	float resultadoCuad=0.0;
	
	
	cout<<"Ingrese el numero #1: "<<endl;
	cin>>a;
	cout<<"Ingrese el numero #2: "<<endl;
	cin>>b;
	cout<<"Ingrese el numero #3: "<<endl;
	cin>>c;
	cout<<"Ingrese el numero #4: "<<endl;
	cin>>d;
	cout<<"Ingrese el numero #5: "<<endl;
	cin>>e;
	cout<<"Ingrese el numero #6: "<<endl;
	cin>>f;
	
	resultado= (a+(b/c))/(d+(e/f));
	cout<<"El resultado de la formula(a+(b/c))/(d+(e/f)) es: "<< resultado<<endl;
	resultadoCuad=resultado*resultado;
	cout<<"El resultado de elevar el "<<resultado<<"al cuadrado es: "<<resultadoCuad<<endl;
	cout<<"El valor del incremento es: "<<resultado*0.9<< " y el resultado es: "<<resultado*1.9<<endl;
	
	return 0;
}
