#include <iostream>
#include <string>

using namespace std;

int main() {
	// Zona de Variables
	string nombre_estudiante;
	string id_estudiante;
	int examen1, examen2, examen3, tarea1, tarea2, proyecto;
	double e1, e2, e3, t1, t2, pro, calificacion, curva, total;
	
	// Zona de Ingreso de datos
	cout << "Ingrese su nombre  : "; getline(cin, nombre_estudiante);
	cout << "Ingrese su Id      : "; cin >> id_estudiante;
	cout << "Ingrese su Examen 1: "; cin >> examen1;
	cout << "Ingrese su Examen 2: "; cin >> examen2;
	cout << "Ingrese su Examen 3: "; cin >> examen3;
	cout << "Ingrese su tarea 1 : "; cin >> tarea1;
	cout << "Ingrese su tarea 2 : "; cin >> tarea2;
	cout << "Ingrese su proyecto: "; cin >> proyecto;
	
	// Zona de Operaciones
	e1 = examen1 * 0.20;
	e2 = examen2 * 0.20;
	e3 = examen3 * 0.25;
	t1 = tarea1 * 0.075;
	t2 = tarea2 * 0.075;
	pro = proyecto * 0.20;
	calificacion = e1 + e2 + e3 + t1 + t2 + pro;
	curva = calificacion * 0.10;
	total = calificacion + curva + 2;
	
	// Zona de Salida de Datos
	system("cls");
	cout << "Nombre Completo: " << nombre_estudiante << endl;
	cout << "Id: " << id_estudiante << endl << endl << endl;
	cout << "<<===============================================>>" << endl;
	cout << "Examen 1: " << examen1 << ", porcentaje: " << e1 << endl;
	cout << "Examen 2: " << examen2 << ", porcentaje: " << e2 << endl;
	cout << "Examen 3: " << examen3 << ", porcentaje: " << e3 << endl;
	cout << "tarea 1 : " << tarea1 << ", porcentaje : " << t1 << endl;
	cout << "tarea 2 : " << tarea2 << ", porcentaje : " << t2 << endl;
	cout << "Proyecto: " << proyecto << ", porcentaje: " << pro << endl;
	cout << "<<===============================================>>" << endl;
	cout << "Calificacion: " << calificacion << endl;
	cout << "Curva       : +" << curva << endl;
	cout << "Bono        : +2" << endl;
	cout << "Calificacion final: " << total << endl;
	
	system("pause > 0");
}
