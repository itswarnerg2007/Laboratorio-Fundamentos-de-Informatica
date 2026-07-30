#include<iostream>
using namespace std;

int main(){
	float perimetroCuadr, areaCuadr,ladoCuadr;
	float perimetroRect, areaRect, ladoanchoRect, ladolargoRect;
	float perimetroTri, areaTri, ladoTri, baseTri, alturaTri;
	float perimetroPenta, areaPenta, ladoPenta, apotemPenta;
	
	cout<<"Digite el lado del cuadrado: "<<endl;
	cin>>ladoCuadr;
	
	cout<<"Digite el largo del rectangulo: "<<endl;
	cin>>ladolargoRect;
	cout<<endl<<"Digite el ancho del rectangulo: "<<endl;
	cin>>ladoanchoRect;
	
	cout<<endl<<"Digite la base del triangulo: "<<endl;
	cin>>baseTri;
	cout<<endl<<"Digite el lado del triangulo: "<<endl;
	cin>>ladoTri;
	cout<<endl<<"Digte la altura del triangulo: "<<endl;
	cin>>alturaTri;
	
	cout<<endl<<"Digite el lado del pentagono: "<<endl;
	cin>>ladoPenta;
	cout<<endl<<"Digite la apotema del pentagono: "<<endl;
	cin>>apotemPenta;
	
	perimetroCuadr= ladoCuadr*4;
	areaCuadr= ladoCuadr*ladoCuadr;
	
	perimetroRect=(ladolargoRect*2)+(ladoanchoRect*2);
	areaRect= ladolargoRect*ladoanchoRect;
	
	perimetroTri=(ladoTri*2)+baseTri;
	areaTri= (baseTri*alturaTri)/2;
	
	perimetroPenta= ladoPenta*5;
	areaPenta=(perimetroPenta*apotemPenta)/2;
	
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"\t El perimetro del cuadrado es: "<<perimetroCuadr<<endl;
	cout<<"\t El area del cuadrado es: "<<areaCuadr<<endl<<endl;
	
	cout<<"\t El perimetro  del rectangulo es: "<<perimetroRect<<endl;
	cout<<" \t El area del rectangulo es: "<<areaRect<<endl<<endl;
	
	cout<<" \t El perimetro del triangulo es: "<<perimetroTri<<endl;
	cout<<" \t El area del triangulo es: "<<areaTri<<endl<<endl;
	
	
	cout<<" \t El perimetro del pentagono es: "<<perimetroPenta<<endl;
	cout<<" \t El area del pentagono es: "<<areaPenta<<endl<<endl;
	
	
	system ("pause>0");
}
