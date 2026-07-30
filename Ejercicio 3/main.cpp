#include<iostream>
#include <math.h>
using namespace std;

int main(){
	float hipotenusa=0;
	float resultado=0; 
	float cat1=0;
	float cat2=0;
		
	cout<<"Digite el primer cateto: "<<endl;
	cin>>cat1;
	cout<<"Digite el segundo cateto: "<<endl;
	cin>>cat2;
	
	hipotenusa= sqrt((cat1*cat2)+(cat1*cat2));
	cout<<"Hipotenusa: "<<hipotenusa<<endl;
	
	resultado= (cat1*cat2)/2;
	cout<<"Area: "<<resultado<<endl;
	
	resultado= hipotenusa+cat1+cat2;
	cout<<"Perimetro: "<<resultado<<endl;
	
	
	return 0;
}
