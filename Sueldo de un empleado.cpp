//Programa que obtenga la nomina mensual, salario neto de empleados cuyo trabajo se paga por horas
#include <iostream>
using namespace std;

//variables
string nombre;
int horas, horas2;
float salario=0, impuestos=0, extra=0, neto=0;

int main() {
  cout << "Escriba su nombre: ";
  cin >> nombre;
  
  cout << "Escriba sus horas trabajadas: ";
  cin >> horas;
  
  if (horas<=160){
    salario= 10 * horas;
    cout << nombre << " su sueldo seria de" << " $" << salario << endl;
     } 

else if (horas>160){
horas2=horas-160;
extra= horas2 * 15;
salario= (160 * 10) + extra; 
cout << nombre << " su sueldo con horas extra seria de" << " $" << salario  << endl;
cout << "Sus horas extra son: " << horas2<< "\n";
}
if (salario>=2000 && salario<=2200){
impuestos=salario*0.20;
neto=salario - impuestos;
cout << nombre << " su salario despues de impuestos seria de: " << " $" << neto;
}
 else if (salario>2201){
 impuestos=salario*0.30;
 neto=salario - impuestos;
 cout << nombre << " su salario despues de impuestos seria de: " << " $" << neto;
 }
    return 0;
}