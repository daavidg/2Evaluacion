//Este programa trata sobre estructuras
 #include<iostream>
 using namespace std;
 int main(){
   //Declaro un nuevo tipo de dato
   struct persona{
      string nombre;
      int edad;
      char colorPelo;
   };
   int cont;
   int salir;
   //declaro una variable de tipo 
   //persona
   persona amigo[3];
   for(cont=0;cont<3;cont++){
     cout<<"DATOS AMIGO "<<cont<<endl;                        
     cout<<"Como se llama tu amigo: ";
     cin>>amigo[cont].nombre;
     cout<<"Cuántos años tiene: ";
     cin>>amigo[cont].edad;
     cout<<"De que color tiene el pelo: ";
     cin>>amigo[cont].colorPelo; 
   }
   cout<<"MIS AMIGOS SON: "<<endl;
   for(cont=0;cont<3;cont++){
      cout<<"Mi amigo "<<amigo[cont].nombre<<" tiene "<<amigo[cont].edad<<" y su pelo es de color "<<amigo[cont].colorPelo<<endl;                           
   }
    cout<<"Toca cualquier tecla para acabar";
    cin>>salir;
     
 }
