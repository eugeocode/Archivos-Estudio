#include <iostream>
using namespace std;

int main(){
    cout<<"Por favor ingrese su edad"<<endl;
    int edad;
    cin>>edad;
    if(edad>=18){
        cout<<"Ingreso permitido"<<endl;
    } else if(edad>=13){
            cout<<"Necesitas un permiso de adulto"<<endl;
            cout<<"quiere registrar un permiso de adulto? (1=si 0=no)"<<endl;
            int permiso;
            cin>>permiso;
            while(permiso!=1 && permiso!=0){
                cout<<"Opcion erronea"<<endl;
                cout<<"quiere registrar un permiso de adulto? (1=si 0=no)"<<endl;
                cin>>permiso;
            }
            if(permiso==1){
                cout<<"Ingreso permitido"<<endl;
            } else{
                cout<<"Ingreso negado"<<endl;
                }
        }
        else{
            cout<<"Ingreso negado"<<endl;
        }
        
    return 0;
}