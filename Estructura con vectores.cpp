//Este ejercicio ha sido realizado con la ayuda de Miguel Ángel Calvera.
#include <iostream>
using namespace std;
int main(){
    int salir;
    int i;
    
    struct persona{
     string nombre;
     int edad;
     char colorPelo;
											};
				
				persona amigo[3];
				cout<<"Registro\n";
				for(i=0;i<3;i++){
     cout<<"Amigo "<<i+1<<":\n";
			  cout<<"Nombre: ";
			  cin>>amigo[i].nombre;
			  cout<<"Edad: ";
			  cin>>amigo[i].edad;
			  cout<<"Color del pelo (1 Letra): ";
			  cin>>amigo[i].colorPelo;
				  }
    

    cout<<"Registro\n";
				for(i=0;i<3;i++){
     cout<<"Amigo "<<i+1<<":\n";
			  cout<<"Nombre: ";
			  cout<<amigo[i].nombre<<endl;
			  cout<<"Edad: ";
			  cout<<amigo[i].edad<<endl;
			  cout<<"Color del pelo (1 Letra): ";
			  cout<<amigo[i].colorPelo<<endl;
				  }
    
    
    std::cout<<"Tocar cualquier tecla para salir\n";
    std::cin>>salir;
    return 0;
}
