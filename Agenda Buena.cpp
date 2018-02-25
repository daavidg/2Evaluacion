#include<iostream>
using namespace std;

int main(){
   struct contacto{
       string nombre;
       string numero;
       int edad;
   };
   int cont;
int borrar;
   contacto amigo[3];
   int salir;
string auxiliar1;
  for(cont=0;cont<3;cont++){
       cout<<"Datos del amigo "<<cont<<endl;
       cout<<"Como se llama tu amigo?: ";
       cin>>amigo[cont].nombre;
       cout<<"Cual es tu número de teléfono?: ";
       cin>>amigo[cont].numero;
       cout<<"Cuantos años tienes?: ";
       cin>>amigo[cont].edad;
   }
   for(cont=0;cont<3;cont++){
       cout<<"Contacto <<cont<<:"<<endl;
       cout<<amigo[cont].nombre;
       cout<<amigo[cont].numero;
       cout<<amigo[cont].edad<<endl;
   }
cout<<"Quieres eliminar algun contacto";
cin>>borrar;
amigo[borrar].nombre=" ";
amigo[borrar].numero=" ";
amigo[borrar].edad=0;
for(cont=0;cont<2;cont++){
if (amigo[cont].edad==0){
amigo[cont].nombre=amigo[cont+1].nombre;
amigo[cont+1].nombre=" ";

amigo[cont].numero=amigo[cont+1].numero;
amigo[cont+1].numero=" ";

amigo[cont].edad=amigo[cont+1].edad;
amigo[cont+1].edad=0;
}
}
  for(cont=0;cont<3;cont++){
if(amigo[cont].edad!=0){
       cout<<"Contacto n<<cont<<:"<<endl;
       cout<<amigo[cont].nombre;
       cout<<amigo[cont].numero;
       cout<<amigo[cont].edad<<endl;
}
   }
   cin>>salir;
    return 0;  
}
