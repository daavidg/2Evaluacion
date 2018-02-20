//Leer lineas
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("miFichero.txt");
    string mensaje;
    int salir;
    getline(fichero,mensaje);
    cout<<"La primera linea dice: ";
    cout<<mensaje;
    cin>>salir;
    }
