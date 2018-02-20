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
   //declaro una variable de tipo 
   //persona
   persona amigo[3];
   for(cont=0;cont<3;cont++){
     cout<<"DATOS AMIGO "<<cont;                        
     cout<<"Como se llama tu amigo: ";
     cin>>amigo[cont].nombre;
     cout<<"Que edad tiene:   ";
     cin>>amigo[cont].edad;
     cout<<"De que color tiene el peluco: ";
     cin>>amigo[cont].colorPelo; 
   }

   
    
     
 }
