//Programa que simule un ascensor de un edificio de 25 niveles
#include <iostream>
using namespace std;

int main (){

//variables
int piso=0;

cout << "Bienvenido, en que piso se encuentra? del 1 al 25: ";
cin >> piso;

if (piso==1){
    cout << "Usted esta en el piso 1" << "\n";
    cout << "A que piso desea subir? ";
    cin >> piso;
}
else if (piso>1 && piso<25){
    cout << "Usted esta en el piso " << piso << "\n";
    cout << "A que piso desea subir o bajar? ";
    cin >> piso;
    
}
if (piso==25){
    cout << "Usted esta en el piso 25" << "\n";
    cout << "A que piso desea bajar? ";

}



    return 0;
}