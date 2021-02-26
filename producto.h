#include <iostream>
using namespace std;
 
const int MAX = 10;
struct tProducto{
    char nombre[MAX];
    char proveedor[MAX];
    char fecha_caduc[MAX];
	float precio_costo;
    int unidades;

};
int SIZE = sizeof(tProducto);
 
void mostrar(tRegistro &reg){
    cout<<"Nombre: "<<reg.nombre<<endl;
    cout<<"Proveedor: "<<reg.proveedor<<endl;
    cout<<"Fecha caducidad: "<<reg.fecha_caduc<<endl;
    cout<<"Precio_costo: "<<reg.precio_costo<<endl;
    cout<<"Unidades: "<<reg.unidades<<endl;
}

