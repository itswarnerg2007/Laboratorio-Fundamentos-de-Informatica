#include <iostream>
#include <string>

using namespace std;

int main() {
	system("color 70");
	// Zona de Variables
	string nombre_Cliente;
	string id_Cliente;
	int cant_Carritos;
	int cant_Munecas;
	double precioCarritos, pesoCarritos;
	double precioMunecas, pesoMunecas;
	double total, envio;
	
	// Zona de Ingreso de Datos
	cout << "<<======== Jugueteria El Mundo ========>>\n";
	cout << "  Ingrese el Nombre: "; getline(cin, nombre_Cliente);
	cout << "  Ingrese el Id: "; cin >> id_Cliente;
	
	system("cls");
	
	cout << "Ingrese la cantidad de carritos: "; cin >> cant_Carritos;
	cout << "Ingrese la cantidad de munecas : "; cin >> cant_Munecas;
	
	// Zona de Calculos / Operaciones
	precioCarritos = cant_Carritos * 3000;
	precioMunecas = cant_Munecas * 5500;
	pesoCarritos = cant_Carritos * 112;
	pesoMunecas = cant_Munecas * 75;
	envio = ((pesoCarritos + pesoMunecas) / 1000) * 500;
	total = precioCarritos + precioMunecas + envio;
	
	
	// Zona de Salida de datos
	system("cls");
	cout << "<<====== FACTURA PROFORMA =======>>\n";
	cout << " Nombre Cliente: " << nombre_Cliente << endl;
	cout << " ID            : " << id_Cliente << endl;
	cout << "<<===============================>>\n";
	cout << "  Carritos:\n";
	cout << "\t" << cant_Carritos << " carritos (3000 x unidad): " << precioCarritos << endl;
	cout << "\t" << "Peso de carritos: " << pesoCarritos / 1000 << "kg.\n\n";
	
	cout << "  Munecas:\n";
	cout << "\t" << cant_Munecas << " munecas (5500 x unidad): " << precioMunecas << endl;
	cout << "\t" << "Peso de Munecas: " << pesoMunecas / 1000 << "kg.\n";
	
	cout << "<<===============================>>\n";
	cout << "Envio: " << envio << endl;
	cout << "Costo Final: " << total << endl;
	
	system("pause");
	system("cls");
	
	
	
	system("pause > 0");
}
