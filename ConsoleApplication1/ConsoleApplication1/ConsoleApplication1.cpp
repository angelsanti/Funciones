#include <string>
#include <iostream>
using namespace std;



int a, b, sum, rest, divi, multiplicacion;
void pausa()
{
	cout << endl << "Presiona ENTER para continuar...\n";
	getwchar();
	getwchar();
}
void suma()
{
	cout << "Ingresa el primer valor: \n";
	cin >> a;
	cout << "Ingresa el segundo valor: \n";
	cin >> b;
	sum = a + b;
	cout << "La suma es: " << sum;
	pausa();
}
void multi()
{
	cout << "Ingresa el primer valor: \n";
	cin >> a;
	cout << "Ingresa el segundo valor: \n";
	cin >> b;
	multiplicacion = a * b;
	cout << "La multiplicacion es: " << multiplicacion;
	pausa();
}
void division()
{
	cout << "Ingresa el primer valor: \n";
	cin >> a;
	cout << "Ingresa el segundo valor: \n";
	cin >> b;
	divi = a / b;
	cout << "La division es: " << divi;
	pausa();
}
void resta()
{
	cout << "Ingresa el primer valor: \n";
	cin >> a;
	cout << "Ingresa el segundo valor: \n";
	cin >> b;
	rest = a - b;
	cout << "La resta es: " << rest;
	pausa();
}
void menu()
{
	bool Salida = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "=============================\n";
		cout << "= Calculadora con Funciones =\n";
		cout << "=============================\n";
		cout << endl;
		cout << "Opciones:\n";
		cout << endl;
		cout << "\t1.- Sumar\n";
		cout << "\t2.- Restar\n";
		cout << "\t3.- Multiplicar\n";
		cout << "\t4.- Dividir\n";
		cout << "\t5.- Salir\n";
		cout << endl;
		cout << "Elige una opcion: \n";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			system("cls");
			Salida = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida\n";
			pausa();
			break;
		}
	} while (Salida != true);

}
int main()
{
	menu();
	return 0;
}

