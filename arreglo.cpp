#include <iostream>

using namespace std;

int main(){
	
	int m[5],a,b,x;
	
	cout<<"Porfavor introduzca el tama�o del arreglo (5): ";
	cin>>b;
	
	for(a=0; a<b; a++)
	{
		
		cout<<"Introduzca el numero "<<a+1<<": ";
		cin>>m[b];
		
	}
	
	x=m[0];
	
	for(a=0; a<b; a++)
	{
		
		if (x<m[b])
		x=m[b];
		
	}
	
	cout<<"El numero m�s grande es: "<<x;
	
	return 0;
	
}
