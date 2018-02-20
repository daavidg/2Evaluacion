using namespace std;

#include<iostream>
 int main(){
     int pepito[5];
     int cont;
     int salir;
     int suma=0;
     for(cont=0;cont<5;cont++){
       cout<<"Dime un numero: ";
       cin>>pepito[cont];
     }
     //Ahora sumamos
     cout<<"La suma vale: ";
     for(cont=0;cont<5;cont++){
       suma=suma+pepito[cont];
     }
     cout<<suma<<endl;
     cout<<"Toca cualquier tecla";
     cin>>salir;
     return 0;
 }
