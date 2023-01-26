/* Seminario de estructura de datos 1
    Tarea 1 - Clases y objetos
    Problema 2
    Durán González Brayan Abdael*/
#include <iostream>

using namespace std;

class Materia{
    private:
        int Clave;
        string Nombre;
        string ProfesorTit;
        string LibroTexto;
    public:
        Materia(int Cla, string Nom, string Prof, string Lib){
            Clave=Cla;
            Nombre=Nom;
            ProfesorTit=Prof;
            LibroTexto=Lib;
        }

        void Imprime(){
            cout<<"\n\n\nClave:\t\t\t"<<Clave<<"\nNombre: \t\t"<<Nombre<<"\nProfesor: \t\t"<<ProfesorTit<<"\nLibroTexto: \t\t"<<LibroTexto;
        }
        void CambiaClave(int clav){
            Clave=clav;
        }
        void CambiaProfe(string pro){
            ProfesorTit=pro;
        }
};
int main(){
    Materia Programacion(1234, "Juan", "Francisco", "Estructura de Datos");
    Materia BasesDatos(4321, "Pedro", "Martha", "Aprendiendo Java");
    int opc, clave;
    string pr;
    do{
    cout<<"     MENU\n";
    cout<<"1.-Cambiar la clave de la materia Programacion\n";
    cout<<"2.-Cambiar el nombre del maestro que imparte la materia Bases de Datos\n";
    cout<<"3.-Imprimir todos los datos de la materia Bases de Datos\n";
    cout<<"4.-Salir\n";
    cout<<"Elige una opcion: \t";
    cin>>opc;
    cout<<"\n";
    switch(opc){
        case 1:
            cout<<"Ingresa la clave nueva: \t";
            cin>>clave;
            Programacion.CambiaClave(clave);
            break;
        case 2:
            cout<<"Escribe el nuevo nombre del profesor: \t";
            cin>>pr;
            BasesDatos.CambiaProfe(pr);
            break;
        case 3:
            BasesDatos.Imprime();
            break;
    }
    cout<<"\n\n\n";
    }while(opc!=4);
    return 0;
}
