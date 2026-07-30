#include <iostream>
#include <string>

using namespace std;

void calculoInteresCompuesto(double& monto, double interes) {
	monto = monto + (monto * interes);
}

int main() {
	system("color 70");
	
	// ZONA DE VARIABLES
	double monto;
	double interes;
	int anios;
	
	double total;
	
	
	// ZONA DE INGRESO DE DATOS
	cout << "Ingrese el capital inicial    : "; cin >> monto;
	cout << "Ingrese la tasa de Interes    : "; cin >> interes;
	cout << "Ingrese los anios de la cuenta: "; cin >> anios;
	
	// ZONA DE CALCULO
	
	// Primera forma
	total = monto * pow(1 + interes, anios);
	
	// Segunda forma
	for (int i = 0; i < anios; i++) {
		calculoInteresCompuesto(monto, interes);
	}
	
	// ZONA DE SALIDA DE DATOS
	cout << "\n\nMonto ahorrado durante " << anios << " anios: " << (int)monto << " Segunda Forma" << endl;
	cout << "\n\nMonto ahorrado durante " << anios << " anios: " << (int)total << " Primera Forma" << endl;
	system("pause > 0");
}}
