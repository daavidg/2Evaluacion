#include<iostream>
#include<fstream>
using namespace std;
int main(){
int exit;
    //Opening the file
    ofstream file("miFichero.txt");
    file<<"H"<<endl;
    file<<"E"<<endl;
    file<<"L"<<endl;
    file<<"P"<<endl;
    file.close();
    cout<<"Ya esta. Fichero cerrado";
    cin>>exit;
    return 0;
    
}
