//Programa que calcule el valor de un numero factorial!
#include <iostream>
using namespace std;

int main (){

int n, i=1, factorial=1;

cout << "Escriba un numero entero: ";
cin >> n;

for (i=1; i<=n; i++){
    factorial *= i;
}

cout << "El factorial de " << n << " es igual a: " << factorial << "\n" << endl;

    return 0;
}