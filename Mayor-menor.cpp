#include <iostream>

int main(){
    int salir;
    int n1,n2,n3;
    int mayor;
    std::cout<<"Escribe el primer numero: ";
    std::cin>>n1;
    std::cout<<"Escribe el segundo numero: ";
    std::cin>>n2;
    std::cout<<"Escribe el tercer numero: ";
    std::cin>>n3;
    if (n1>n2){
          if(n1>n3){
          mayor=n1;
          }
          else{
          mayor=n3;
          }
    }
    else{
         if(n2>n3){
              mayor=n2;
              }
         else{
              mayor=n3;
              }
    }
    std::cout<<"El mayor es: "<<mayor<<"\n";
    std::cout<<"Tocar cualquier tecla para salir\n";
    std::cin>>salir;
    return 0;
}
