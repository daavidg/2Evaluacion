#include <iostream>
using namespace std;
int main(){
    int salir;
    int m[3][3];
    int fila, col;
    int aux;
    for (fila=0; fila<3; fila++){
        for (col=0; col<3;col++){
            cout<<"Matriz ["<<fila<<"]["<<col<<"]"<<endl;
            cin>>m[fila][col];
            }
        }
     for (fila=0; fila<3; fila++){
        for (col=0; col<3;col++){
            cout<<m[fila][col]<<" ";
            }
            cout<<endl;
        }
    std::cout<<"Tocar cualquier tecla para salir\n";
    std::cin>>salir;
    return 0;
}
