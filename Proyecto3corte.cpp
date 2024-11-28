//Aplicacion Inventario Dulcesia LTDA
#include<iostream>
#include<studio.h>
#include<conio.h>
#include<windows.h>
#include<string>
#include<ionanip>
#include<stdlib.h>

using namespace std;

int menu(void){
cout<<"\n*************************INVENTARIO DULCESIA*********************"<<endl;
cout<<"\n1. Crear Proveedor Nuevo "<<endl;
cout<<"\n2. Ver Proveedores Ingresados "<<endl;
cout<<"\n3. Crear Inventario "<<endl;
cout<<"\n4. Ver Inventario "<<endl;
cout<<"\n5. Venta de producto "<<endl;
cout<<"\n6. Salir "<<endl;
cout<<"\nIngrese su opcion "<<endl;
}

int main(){
    int opcion, opc2, opc3, i=0, a=0, max=5, cantidad_producto_vender, pregunta_descuento, descuento;
    string nombre_proveedor[50], nombre_producto[50];
    float id[50], tel[50], precio_producto[50], codigo[50];
    string nombre_producto_vender;
    float precio_producto_vender, total_final, total, descuento_final, sub_total;

    do{
        menu();
        cin>>opcion;

    switch(opcion){
        case 1:
        i++;
        cout<<"\nIngrese el nombre del proveedor nuevo ";
        cin>>nombre_proveedor;
        cout<<"Ingrese el numero de ID del proveedor nuevo(Sin espacios ni guiones): ";
        cin>>id[i];
        cout<<"Ingrese el numero de telefono del proveedor nuevo(Sin espacios ni guiones): ";
        cin>>tel[i];
        cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
        cin>>opc2;
        break;

        case 2:
        for (i=1, i<max, i++){
            cout<<"\nNombre de proveedor: "<<nombre_proveedor[i]<<endl;
            cout<<setprecision(0)<<fixed<<"Numero de ID de proveedor: "<<id[i]<<endl;
            cout<<setprecision(0)<<fixed<<"Numero de telefono de proveedor: "<<tel[i]<<endl;
        }
        cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
        cin>>opc2;
        break;

        case 3:
        a++;
        cout<<"\nIngrese el nombre del producto: ";
        cin>>nombre_producto[a];
        cout<<"Ingrese el codigo del producto: ";
        cin>>codigo[a];
        cout<<"Ingrese el precio del producto: ";
        cin>>precio_producto[a];
        cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
        cin>>opc2;
        break;

        case 4:
        for (a=1, a<max, ++a){
            cout<<"\nNombre del producto: "<<nombre_producto[a]<<endl;
            cout<<setprecision(0)<<fixed<<"Codigo del producto: "<<codigo[a]<<endl;
            cout<<setprecision(0)<<fixed<<"Precio del producto: "<<precio_producto[a]<<endl;
        }
        cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
        cin>>opc2;
        break;

        case 5:
        cout<<"\nIngrese el nombre del producto a vender: "<<endl;
        cin>>nombre_producto_vender;
        cout<<"\nIngrese el precio del producto: "<<endl;
        cin>>precio_producto_vender;
        cout<<"\nIngrese la cantidad del producto a vender: "<<endl;
        cin>>cantidad_producto_vender;

        total=precio_producto_vender*cantidad_producto_vender;
        sub_total=total;

        cout<<"\n¿Desea aplicar descuento al producto? (Ingrese 1 para si y 0 para no.)"<<endl;
        cin>>pregunta_descuento;
        if(pregunta_descuento==1){
            cout<<"\n¿De cuanto es el descuento? (Ingrese el numero del porcentaje de descuento a aplicar. Ej: 50 para 50%)"<<endl;
            cin>>descuento;
            descuento_final= total*(descuento*0.1);
            total_final=total-descuento_final;
        }else{
            descuento_final=0;
            total_final=total;
        }
        cout<<"\nProducto vendido: "<<nombre_producto_vender<<endl;
        cout<<setprecision(2)<<fixed<<"Precio del producto: "<<precio_producto_vender<<endl;
        cout<<"Cantidad vendida: "<<cantidad_producto_vender<<endl;
        cout<<"Sub total: "<<sub_total<<endl;
        cout<<setprecision(2)<<fixed<<"Descuento: -"<<descuento_final<<endl;
        cout<<"\nTotal a pagar: "<<total_final<<endl;
    }
    }



    return 0;
}