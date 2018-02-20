#include <iostream>
using namespace std;
int main(){
    int salir;
    int i;
    int v[5];
    int suma=0;
    for (i=0;i<5;i++){
        cout<<"Dime la posicion "<<i<<": ";
        cin>>v[i];
       }
    
    for (i=0;i<5;i++){
        suma+=v[i];
       }
    
    for (i=0;i<5;i++){
        cout<<"El vector v["<<i<<"] es: "<<v[i]<<endl;
       }
    cout<<suma;
    std::cout<<"Tocar cualquier tecla para salir\n";
    std::cin>>salir;
    return 0;
}
