#include <iostream>
 
using namespace std;
 
int main() {
	
    int cantidad(0);
    int numero(0);
    int menor(0);
    int mayor(0);
    float suma(0.0f);
 
    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;
 
    for (int cont(1); cont <= cantidad; ++cont) {
        cout << "num " << cont << " = ";
        cin >> numero;
        if (cont == 1) {
            menor = numero;
            mayor = numero;
        } else if (numero < menor) {
            menor = numero;
        } else if (numero > mayor) {
            mayor = numero;
        }
        suma += numero;
    }
 
    cout << "----------------\n"
         << "menor = " << menor << endl
         << "mayor = " << mayor << endl
         << "media = " << suma / cantidad;
    return 0;
}
