#include <iostream>
 
{int sumar_valores(int a, int b)
 
int resultado = a + b;
 
return (resultado);
 
}
 
float promedio (int a, int b)
 
{
 
return ( (a+b)/2.0 );
 
}
 
main()
 
{
 
int x,y;
 
cout << "El programa le pedir� que ingrese dos n�meros enteros. ";
 
cout << "\n\nIngrese el primer n�mero: ";
 
cin >> x;
 
cout << "\nIngrese el segundo n�mero: ";
 
cin >> y;
 
cout << "\nEl promedio es: " << promedio(x,y);  cout << "\n\nLa suma de los n�meros es : " << sumar_valores(x,y);
 
}
