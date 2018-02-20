#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string message;
    int salir;
    ofstream file("fichero123.txt");
    for(int x=0;x<=3;x++){
            cout<<"dime el nombre y el numero de telefono de tu amigo; "<<endl;
            getline(cin,message);
            file<<message<<endl;
            }
cin>>salir;
return 0;
}
