//taller 2

#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<ctime>
#include<fstream>
#define A_rchivo "productos.txt"
using namespace std;

// protitpo de funciones (menus)
void menuProductos();
void menuProveedores();
void menuClientes();
void menuPrincipal();
void menuInformes();

//Prototipo de funciones (Productos)
void adicionarProducto();
void modificarProducto();
void eliminarProducto();
void buscarProducto();
void mostrarProducto();

//Prototipo de funciones (Clientes)
void adicionarCliente();
void modificarCliente();
void eliminarCliente();
void buscarCliente();
void mostrarCliente();

//Prototipo de funciones (Proveedores)
void adicionarProveedor();
void modificarProveedor();
void eliminarProveedor();
void buscarProveedor();
void mostrarProveedor();

//Protitpo de funciones (Entradas)
void Entradas();
void inventarioEntradas();

//Prototipo de funciones (salidas)
void Salidas();
void inventarioSalidas();

//informes
void informes1();
void informes2();
void informes3();
void informes4();
void informes5();
void informes6();
void informes7();
void informes8();
void informes9();
void informes10();
void informes11();
void informes12(); //se agrega este numero de informes porque es la cantidad o el tipo de informes que se piden

int main(){
	menuPrincipal();
}

//Apartado de menus
void menuPrincipal(){
	int opcion;

	do{
		cout<<"\n\tMENU DE OPCIONES\n\n";
		cout<<"1. Archivo productos"<<endl;
		cout<<"2. Archivo Clientes"<<endl;
		cout<<"3. Archivo Proveedores"<<endl;
		cout<<"4. Archivo Entradas"<<endl;
		cout<<"5. Archivo Salidas"<<endl;
		cout<<"6. Archivo Informes"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"\n Ingrese opcion:";
		cin>>opcion;

		switch(opcion){
			case 1:
				system ("pause");
				system ("cls");
				menuProductos();
				break;

			case 2:
				system ("pause");
				system ("cls");
				menuClientes();

			case 3:
				system ("pause");
				system ("cls");
				menuProveedores();

			case 4:
				system ("pause");
				system ("cls");
				Entradas();

			case 5:
				system ("pause");
				system ("cls");
				Salidas();

			case 6:
				system ("pause");
				system ("cls");
				menuInformes();
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
	while(opcion != 7);
}

void menuProductos(){
	int opcion;
	do{
		cout<<"\n\t PRODUCTOS \n\n";
		cout<<"1. Adicionar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Buscar"<<endl;
		cout<<"5. Mostrar"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"\n INGRESE UNA OPCION: ";
		cin>>opcion;

		switch(opcion){
			case 1:
				adicionarProducto();
				break;

			case 2:
				modificarProducto();
				break;

			case 3:
				eliminarProducto();
				break;

			case 4:
				buscarProducto();
				break;

			case 5:
				mostrarProducto();
				break;

			case 6:
				system("pause");
				system("cls");
				menuPrincipal();
				break;
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
	while(opcion != 6);
}

void menuClientes(){
	int opcion;
	do{
		cout<<"\n\t CLIENTES \n\n";
		cout<<"1. Adicionar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Buscar"<<endl;
		cout<<"5. Mostrar"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"\n INGRESE UNA OPCION: ";
		cin>>opcion;

		switch(opcion){
			case 1:
				adicionarCliente();
				break;

			case 2:
				modificarCliente();
				break;

			case 3:
				eliminarCliente();
				break;

			case 4:
				buscarCliente();
				break;

			case 5:
				mostrarCliente();
				break;

			case 6:
				system("pause");
				system("cls");
				menuPrincipal();
				break;
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
	while(opcion != 6);
}

void menuProveedores(){
	int opcion;
	do{
		cout<<"\n\t PROVEEDORES \n\n";
		cout<<"1. Adicionar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Buscar"<<endl;
		cout<<"5. Mostrar"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"\n INGRESE UNA OPCION: ";
		cin>>opcion;

		switch(opcion){
			case 1:
				adicionarProveedor();
				break;

			case 2:
				modificarProveedor();
				break;

			case 3:
				eliminarProveedor();
				break;

			case 4:
				buscarProveedor();
				break;

			case 5:
				mostrarProveedor();
				break;

			case 6:
				system("pause");
				system("cls");
				menuPrincipal();
				break;
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
	while (opcion != 6);
}

//menu Informes
void menuInformes(){
	int opcion;
	do{
		cout<<"\n\t Informes \n\n";
		cout<<" 1. Inventario actual"<<endl;
		cout<<" 2. Total de entradas en un rengo de fechas"<<endl;
		cout<<" 3. Total de salidas en un rango de fechas"<<endl;
		cout<<" 4. Valor total de entradas en un rango de fechas"<<endl;
		cout<<" 5. Valor total de salidas en un rango de fechas"<<endl;
		cout<<" 6. Mostar el movimiento de un producto en un rango de fechas"<<endl;
		cout<<" 7. Producto con mas movimientos"<<endl;
		cout<<" 8. Fechas con mas movimientos"<<endl;
		cout<<" 9. Total de salidas de X cliente en un rango de fechas"<<endl;
		cout<<"10. Total de salida de X cliente y producto en un rango de fechas"<<endl;
		cout<<"11. Total de entradas de X proveedor en un rango de fechas"<<endl;
		cout<<"12. Total de entradas de X proveedor y producto en un rango de fechas"<<endl;
		cout<<"13. Salir"<<endl;
		cout<<"\n INGRESE OPCION: ";
		cin>>opcion;

		switch(opcion){
			case 1:
			informes1();
			break;

			case 2:
			informes2();
			break;

			case 3:
			informes3();
			break;

			case 4:
			informes4();
			break;

			case 5:
			informes5();
			break;

			case 6:
			informes6();
			break;

			case 7:
			informes7();
			break;

			case 8:
			informes8();
			break;

			case 9:
			informes9();
			break;

			case 10:
			informes10();
			break;

			case 11:
			informes11();
			break;

			case 12:
			informes12();
			break;

			case 13:
			system("pause");
			system("cls");
			menuPrincipal();
			break;
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
	while(opcion != 13);
}

//Seccion de productos
//adicionar producto
void adicionarProducto(){
	ofstream archivo;
ifstream adicionar;
	int codigo;
	string nombre, nombre1;
	float valor_unitario, valor_unitario1;
	archivo.open("productos.txt", ios::app);
	if(archivo.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		int x=0,cod=0;
		while(x==0){
			cout<<"Ingrese el codigo del producto: ";
			cin>>codigo;
			x=1;

			adicionar.open(A_rchivo,ios::in);
			adicionar>>cod;
			while(!adicionar.eof()){
				adicionar>>nombre1;
				adicionar>>valor_unitario1;
				if(cod==codigo){
					x=0;
				}
				adicionar>>cod;
			}
			adicionar.close(); //funcion para validar
		}
		cout<<"\nIngrese nombre del producto: ";
		cin>>nombre;
		cout<<"Ingrese valor unitario del producto: ";
		cin>>valor_unitario;
		adicionar>>codigo;
		adicionar>>nombre;
		adicionar>>valor_unitario;
	}
	archivo.close();
}

//modificar producto
void modificarProducto(){
	int cod, cod1;
	string nombre,nombre1;
	float valor,valor1;
	ifstream modifica;
	ofstream modificar;
	modifica.open("productos.txt", ios::in);

	modificar.open("temporal.txt", ios::out);
	if(modificar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"Ingrese el codigo del producto a modificar: ";
		cin>>cod1;
		modifica>>cod;
		while(!modificar.eof()){
			modifica>>nombre>>valor;
			if(cod==cod1){
				cout<<"Ingrese el nuevo nombre: ";
				cin>>nombre;
				cout<<"Ingrese el nuevo valor: ";
				cin>>valor;
				modificar<<cod<<" "<<nombre<<" "<<valor<<"\n";
			}
			else{
				modificar<<cod<<" "<<nombre<<" "<<valor<<"\n";
			}
			modifica>>cod;
		}
		modificar.close();
		modificar.close();
		remove("productos.txt");
		rename("temporal.txt","productos.txt");
	}
}

//Eliminar productos
void eliminarProducto(){
	int cod,cod1;
	string nombre,nombre1;
	float valor,valor1;
	ifstream eliminar;
	eliminar.open("productos.txt",ios::in);
	ofstream modificar;
	modificar.open("productos.txt", ios::out);
	if(eliminar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"Ingrese el codigo del producto a eliminar: ";
		cin>>cod1;

		eliminar>>cod;
		while(!modificar.eof()){
			eliminar>>nombre>>valor;
			if(cod==cod1){
				cout<<"El registro se elimino exitosamente";
			}
			else{
				eliminar<<cod<<" "<<nombre<<" "<<valor<<"\n";
			}
			eliminar>>cod;
		}
		eliminar.close();
		modificar.close();
		remove("productos.txt");
		rename("temporal.txt","productos.txt");
	}
}

//Mostrar producto
void mostrarProducto(){
	int cod,cod1;
	string nombre,nombre1;
	float valor,valor1;
	ifstream mostrar;
	mostrar.open("productos.txt");
	if(mostrar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		mostrar>>cod;
		while(!mostrar.eof()){
			mostrar>>nombre>>valor;
			cod1=cod;
			nombre1=nombre;
			valor1=valor;
			cout<<"El codigo es: "<<cod1<<"El nombre es: "<<nombre1<<"El valor es: "<<valor1;
			cout<<"\n";
			mostrar>>cod;
		}
		mostrar.close();
	}
}

//buscar producto
void buscarProducto(){
	int cod,cod1;
	string nombre,nombre1;
	float valor, valor1;
	ifstream buscar;
	buscar.open("productos.txt");
	if(buscar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"ingrese el nombre del producto a buscar: ";
		cin>>nombre1;
		buscar>>cod;
		while(!buscar.eof()){
			buscar>>nombre>>valor;
			if(nombre==nombre1){
				cod1=cod;
				nombre1=nombre;
				valor1=valor;
				cout<<"El codigo es: "<<cod1<<"El nombre es: "<<nombre1<<"El valor es: "<<valor1;
				cout<<"\n";
			}
			buscar>>cod;
		}
		buscar.close();
	}
}

//Seccion de clientes
//adicionar Cliente
void adicionarCliente(){
	ofstream archivo;
	int nit;
	string nombre,nombre1mdireecion,direccion1;
	archivo.open("clientes.txt", ios::app);
	if(archivo.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		int x=0,nit1=0;
		while(x==0){
			cout<<"Ingrese el nit: ";
			cin>>nit;
			x=1;
			ifstream adicionar;
			adicionar.open("clientes.txt",ios::in);
			adicionar>>nit1;
			while(!adicionar.eof()){
				adicionar>>nombre1M
				adicionar>>direccion1;
				if(nit==nit1){
					x=0;
				}
				adicionar>>nit1;
			}
			adicionar.close();
		}
		cout<<"\nIngrese el nombre: ";
		cin>>nombre;
		cout<<"\nIngrese la direccion: ";
		cin>>direccion;
		archivo<<nit<<" ";
		archivo<<nombre<<" ";
		archivo<<direccion<<"\n";
	}
	archivo.close();
}

//Modificar cliente
void modificarCliente(){
	int nit,nit1;
	string nombre, nombre1,direccion,direccion1;
	ifstream modificar;
	modificar.open("clientes.txt",ios::in);
	ofstream modificar;
	modificar.open("temporal.txt",ios::out);
	if(modificar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"Ingrese el nit del cliente a modificar: ";
		cin>>nit1;
		cin>>nit;
		while(!modificar.eof()){
			modificar>>nombre>>direccion;
			if(nit==nit1){
				cout<<"Ingrese el nuevo nombre: ";
				cin>>nombre;
				cout<<"Ingrese la nueva direccion: ";
				cin>>direccion;
				modificar<<nit<<" "<<nombre<<" "<<direccion<<"\n";
			}
			else{
				modificar<<nit<<" "<<nombre<<" "<<direccion<<"\n";
			}
			modificar>>nit;
		}
		modificar.close();
		modificar.close();
		remove("clientes.txt");
		rename("temporal.txt","clientes.txt");
	}
}

//Eliminar cliente
void eliminarCliente(){
	int nit,nit1;
	string nombre,nombre1mdireccion,direccion1;
	ifstream eliminar;
	eliminar.open("clientes.txt",ios::in);
	ofstream modificar;
	modificar.open("temporal.txt",ios::out);
	if(eliminar.eof()){
		cout<<"Error al crear el archivo;"
		exit(1);
	}
	else{
		cout<<"Ingrese el codigo del cliente a eliminar: ";
		cin>>nit1;
		eliminar>>nit;
		while(!eliminar.eof()){
			eliminar>>nombre>>direccion;
			if(nit==nit1){
				cout<<"El registro se elimino";
			}
			else{
				modificar<<nit<<nombre<<" "<<direccion<<"\n";
			}
			eliminar>>nit;
		}
		eliminar.close();
		modificar.close();
		remove("clientes.txt");
		rename("temporal.txt","clientes.txt");
	}
}

//mostrar cliente
void mostrarCliente(){
	int nit,nit1;
	string nombre,nombre1,direccion,direccion1;
	ifstream mostrar;
	mostrar.open("clientes.txt");
	if(mostrar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		mostrar>>nit;
		while(!mostrar.eof()){
			mostrar>>nombre>>direccion;
			nit1==nit;
			nombre1=nombre;
			direccion1=direccion;
			cout<<"El nit es: "<<nit1<<"El nombre es: "<<nombre1<<"La direccion es: "<<direccion1<<"\n";
			mostrar>>nit;
		}
		mostrar.close();
	}
}

//buscar cliente
void buscarCliente(){
	int nit,nit1;
	string nombre,nombre1,direccion,direccion1;
	ifstream buscar;
	buscar.open("clientes.txt");
	if(buscar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"Ingrese el nombre del cliente a buscar: ";
		cin>>nombre1;
		buscar>>nit;
		while(!buscar.eof()){
			buscar>>nombre>>direccion;
			if(nombre==nombre1){
				nit1=nit;
				nombre1=nombre;;
				direccion1=direccion;
				cout<<"El codigo es: "<<nit1<<"El nombre es: "<<nombre1<<"La direccion es: "<<direccion1<<"\n";
			}
			buscar>>nit;
		}
		buscar.close();
	}
}

//Seccion de proveedores
//adicionar proveedor
void adicionarProveedor(){
	ofstream archivo;
	int nit;
	string nombre,nombre1,direccion,direccion1;
	archivo.open("proveedores.txt",ios::app);
	if(archivo.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		int x=0,nit1=0;
		while(x==0){
			cout<<"Ingrese el nit: ";
			cin>>nit;
			x=1;
			ifstream adicionar;
			adicionar.open("proveedores.txt", ios::in);
			adicionar>>nit1;
			while(!adicionar.eof()){
				adicionar>>nombre1;
				adicionar>>direccion1;
				if(nit==nit1){
					x=0;
				}
				adicionar>>nit1;
			}
			adicionar.close();
		}
		cout<<"\nIngrese el nombre: ";
		cin>>nombre;
		cout<<"\Ingrese la direccion: ";
		cin>>direccion;
		archivo<<nit<<" ";
		archivo<<nombre<<" ";
		archivo<<direccion<<"\n";
	}
	archivo.close();
}

//Modificar proveedor
void modificarProveedor(){
	int nit,nit1;
	string nombre,nombre1,direccion,direccion1;
	ifstream modificar;
	modificar,open("proveedores.txt",ios::in);
	ofstream modificar;
	modificar.open("temporal.txt",ios::out);
	if(modificar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"ingrese el nit del proveedor a modificar: ";
		cin>>nit1;
		leer>>nit;
		while(!modificar.eof()){
			modificar>>nombre>>direccion;
			if(nit==nit1){
				cout<<"Ingrese el nuevo nombre: ";
				cin>>nombre;
				cout<<"Ingrese la nueva direccion: ";
				cin>>direccion;
				modificar<<nit<<" "<<nombre<<" "direccion<<"\n";
			}
			else{
				modificar<<nit<<" "<<nombre<<" "<<direccion<<"\n";
			}
			modificar>>nit;
		}
		modificar.close();
		modificar.close();
		remove("proveedores.txt");
		rename("temporal.txt","proveedores.txt");
	}
}

//Eliminar proveedor
void eliminarProveedor(){
int nit,nit1;
string nombre,nombre1,direccion,direccion1;
ifstream eliminar;
eliminar.open("proveedores.txt",ios::in);
ofstream modificar;
modificar.open("temporal.txt",ios::out);
if(eliminar.fail()){
	cout<<"Error al crear el archivo";
	exit(1);
}
else{
	cout<<"Ingrese el codigo del proveedor a eliminar: ";
	cin>>nit1;
	eliminar>>nit;
	while(!eliminar.eof()){
		eliminar>>nombre>>direccion;
		if(nit==nit1){
			cout<<"El registro se elimino";
		}
		else{
			modificar<<nit<<" "<<nombre<<" "<<direccion<<"\n";
		}
		eliminar>>nit;
	}
	eliminar.close();
	modificar.close();
	remove("proveedores.txt");
	rename("temporal.txt","proveedores.txt");
	}
}

//mostrar proveedor
void mostrarProveedor(){
	int nit,nit1;
	string nombre,nombre1,direccion,direccion1;
	ifstream mostrar;
	mostrar.open("proveedores.txt");
	if(mostrar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		mostrar>>nit;
		while(!mostrar.eof()){
			mostrar>>nombre>>direccion;
			nit1=nit;
			nombre1=nombre;
			direccion1=direccion;
			cout<<"El nit es: "<<nit1<<"El nombre es: "<<nombre1<<"La direccion es: "<<direccion1<<"\n";
			mostrar>>nit;
		}
		mostrar.close();
	}
}

//Buscar proveedor
void buscarProveedor(){
	int nit,nit1;
	string nombre,nombre1,direccion,direccion1;
	ifstream buscar;
	buscar.open("proveedores.txt");
	if(buscar.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		cout<<"Ingrese el nombre del proveedor a buscar: ";
		cin>>nombre1;
		buscar>>nit;
		while(!buscar.eof()){
			buscar>>nombre>>direccion;
			if(nombre==nombre1){
				nit1=nit;
				nombre1=nombre;
				direccion1=direccion;
				cout<<"El codigo es: "<<nit1<<"El nombre es: "<<nombre1<<"La direccion es: "<<direccion1;<<"\n";
			}
			buscar>>nit;
		}
		buscar.close();
	}
}

//Seccion de entradas
void Entradas(){
	ofstream archivo;
	int aux,cantidad,dia,mes,ano,valor,valor_unitario;
	string proveedorNit,productoCod,nombre,cod,cod1,direccion;
	archivo.open("entradas.txt",ios::app);
	if(archivo.fail()){
		cout<<"Error al creal el archivo";
		exit(1);
	}
	else{
		int x=0;
		while(x==0){
			cout<<"\nIngrese el dia en formato numero: ";
			cin>>dia;
			x=1;
			if(dia>31 || dia<1){
				x=0;
			}
		}
		x=0;
		while(x==0){
			cout<<"\nIngrese el mes en formato numero: ";
			cin>>mes;
			x=1;
			if(mes>12 || mes<1){
				x=0;
			}
		}
		x=0;
		while(x==0){
			cout<<"\nIngrese el ano en formato numero: ";
			cin>>ano;
			x=1;
			if(mes>12 || mes<1){
				x=0;
			}
		}
		int opcion=0,opcion1=0;

		while(opcion==0 and opcion1==0){
			opcion=0;
			cout<<"\nIngrese el nit proveedor: ";
			cin>>proveedorNit;
			ifstream buscar;
			buscar.open("proveedores.txt");
			if(buscar.fail()){
				cout<<"Error al crear el archivo";
				exit(1);
			}
			else{
				buscar>>cod;
				while(!buscar.eof()){
					buscar>>nombre>>direccion;
					if(cod==proveedorNit){
						cout<<"El proveedor existe";
						opcion=1;
						opcion1=0;
					}
					buscar>>cod;
				}
				buscar.close();
			}
			if(opcion==0){
				cout<<"Si no conoce el nit del proveedor ingrese (1) de lo contrario ingrese (2): ";
				cin>>opcion1;
				if(opcion1==1){
					opcion=1;
				}
				else{
					opcion=0;
					opcion1=0;
				}
			}
		}
		while(opcion==1 and opcion1==0){
			opcion=1;
			cout<<"Ingrese el codigo del producto: ";
			cin>>productoCod;
			ifstream buscar;
			buscar.open("productos.txt");
			if(buscar.fail()){
				cout<<"Error al crear el archivo";
				exit(1);
			}
			else{
				buscar>>cod1;
				while(!buscar.eof()){
					buscar>>nombre>>valor;
					if(cod1==productoCod){
						valor_unitario=valor;
						opcion=0;
						opcion1=1;
					}
					buscar>>cod1;
				}
				buscar.close();
			}
			if(opcion==1){
				cout<<"Si no conoce el codigo del producto ingrese (1) de lo contrario ingrese (2): ";
				cin>>opcion1;
				if(opcion1==1){
					opcion=0;
					opcion1=0;
				}
				else{
					opcion=1;
					opcion1=0;
				}
			}
		}
		if(opcion1==1 and opcion==0){
			cout<<"\nIngrese la cantidad: ";
			cin>>cantidad;
			archivo<<dia<<" ";
			archivo<<mes<<" ";
			archivo<<ano<<" ";
			archivo<<proveedorNit<<" ";
			archivo<<productoCod<<" ";
			archivo<<cantidad<<" ";
			archivo<<valor_unitario<<"\n";
			archivo.close();
		}
		else{
			archivo.close();
			}
		}
		inventarioEntradas();
	}

//Inventario entradas
void inventarioEntradas(){
	int nit,cod,cantidad,dia,mes,ano,valor;
	int cod1,cantidad1;
	ifstream leer;
	leer.open("entradas.txt",ios::in);
	ofstream escribir;
	escribir.open("temporal.txt",ios::out);
	if(leer.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		leer>>dia;
		while(!leer.eof()){
			leer>>mes>>ano>>nit>>cod>>cantidad>>valor;
			cod1=cod;
			cantidad1=cantidad;
			escribir<<cod1<<" "<<cantidad1<<"\n";
			leer>>dia;
		}
		leer.close();
		escribir.close();
		remove("inventario.txt");
		rename("temporal.txt","inventario.txt");
	}
}

//Seccion de salidas
void Salidas(){
	ofstream archivo;
	int clienteNit,aux,cantidad,dia,mes,ano,valor,valor_unitario,cod,cod1,productoCod;
	string nombre,direccion;
	archivo.open("salidas.txt",ios::app);
	if(archivo.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		int x=0;
		while(x==0){
			cout<<"\nIngrese el dia en formato numero: ";
			cin>>dia;
			x=1;
			if(dia>31 !! dia<1){
				x=0;
			}
		}
		x=0;
		while(x==0){
			cout<<"\nIngrese el mes en formato numero: ";
			cin>>mes;
			x=1;
			if(mes>12 || mes<1){
				x=0;
			}
		}
		x=0;
		while(x==0){
			cout<<"\nIngrese el ano en formato numero: ";
			cin>>ano;
			x=1;
			if(ano<2000){
				x=0;
			}
		}
		int opcion=0,opcion1=0;

		while(opcion==0 and opcion1==0){
			opcion=0;
			cout<<"\nIngrese el nit cliente: ";
			cin>>clienteNit;
			ifstream buscar;
			buscar.open("clientes.txt");
			if(buscar.fail()){
				cout<<"Error al crear el archivo";
				exit(1);
			}
			else{
				buscar>>cod;
				while(!buscar.eof()){
					buscar>>nombre>>direccion;
					if(cod==clienteNit){
						cout<<"El cliente existe";
						opcion=1;
						opcion1=0;
					}
					buscar>>cod;
				}
				buscar.close();
			}
			if(opcion==0){
				cout<<"Si no conoce el nit del cliente ingrese (1) de lo contrario ingrese (2): ";
				cin>>opcion1;
				if(opcion1==1){
					opcion=1;
				}
				else{
					opcion=0;
					opcion1=0;
				}
			}
		}
		while(opcion==1 and opcion1==0){
			opcion=1;
			cout<<"\nIngrese el codigo del producto: ";
			cin>>productoCod;
			ifstream buscar;
			buscar.open("productos.txt");
			if(buscar.fail()){
				cout<<"Error al crear el archivo";
				exit(1);
			}
			else{
				buscar>>cod1;
				while(!buscar.eof()){
					buscar>>nombre>>valor;
					if(cod1==productoCod){
						valor_unitario=valor;
						opcion=0;
						opcion1=1;
					}
					buscar>>cod1;
				}
				buscar.close();
			}
			if(opcion==1){
				cout<<"Si no conoce el codigo del producto ingrese (1) de lo contrario ingrese (2): ";
				cin>>opcion1;
				if(opcion1==1){
					opcion=0;
					opcion1=0;
				}
				else{
					opcion=1;
					opcion1=0;
				}
			}
		}
		if(opcion1=1 and opcion=0){
			cout<<"\nIngrese la cantidad: ";
			cin>>xantidad;
			int inventarioCod,inventarioCan=0,inventaioTotal=0,inventarioAux;
			ifstream verificar;
			verificar.open("inventario.txt");
			if(verificar.fail()){
				cout<<"Error al crear el archivo";
				exit(1);
			}
			else{
				verificar>>inventarioCod;
				inventarioAux=0;
				while(!verificar.eof()){
					verificar>>inventarioCan;
					if(productoCod=inventarioCod){
						inventarioTotal+= inventarioCan;
						inventarioAux=1;
					}
					verificar>>inventarioCod;
				}
				verificar.close();
			}
			inventarioTotal-=cantidad;

			if(inventarioTotal>0 and inventarioAux==1){
				int eliminarCod,eliminarCan,eliminarCod1,eliminarCan1;
				ifstream leer;
				leer.open("inventario.txt",ios::in);
				ofstream modificar;
				modificar.open("temporal.txt",ios::out);
				if(leer.fail()){
					cout<<"Error al crear el archivo";
					exit(1);
				}
				else{
					leer>>eliminarCod;
					while(!leer.eof()){
						leer>>eliminarCan;
						if(productoCod==eliminarCod){
						}
						else{
							modificar<<eliminarCod<<" "<<eliminarCan<<" "<<"\n";
						}
						leer>>eliminarCod;
					}
					leer.close();
					modificar.close();
					ofstream archivo;
					archivo.open("temporal.txt",ios::app);
					if(archivo.fail()){
						cout<<"Error al crear el archivo";
						exit(1);
					}
					else{
						archivo<<productoCod<<" ";
						archivo<<inventarioTotal<<"\n";
					}
					archivo.close();
					remove("inventario.txt");
					rename("temporal.txt","inventario.txt");
				}
				archivo<<dia<<" ";
				archivo<<mes<<" ";
				archivo<<ano<<" ";
				archivo<<clienteNit<<" ";
				archivo<<productoCod<<" ";
				archivo<<cantidad<<" ";
				archivo<<valor_unitario<<"\n";
				archivo.close();
			}
			else{
				cout<<"La cantidad ingresada no existe en el inventario";
				archivo.close();
			}
		}
	}
}

void informes1(){
	ifstream informe;
	informe.open("inventario.txt");
	int codigo,cantidad;
	if(informe.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		informe>>codigo;
		while(!informe.eof()){
			informe>>cantidad;
			cout<<"El codigo del producto es: "<<codigo<<"La cantidad existente es: "<<cantidad<<"\n";
			informe>>codigo;
		}
		informe.close();
	}
}

void informes2(){
	int dia=0,mes=0,an0=0,dia1=0,mes1=0,ano1=0;
	int diaEntrada=0,mesEntrada=0,anoEntrada=0,codigoE1=0,codigoE2=0,cantidadEntrada=0,valorEntrada=0,aux=0;
	cout<<"RANGO DE FECHAS \n";
	cout<<"Rango a tope\n";
	cout<<"Ingrese ano: \n";
	cin>>ano;
	cout<<"Ingrese mes: \n";
	cin>>mes;
	cout<<"Ingrese dia: \n";
	cin>>dia;
	cout<<"RANGO MINIMO\n";
	cout<<"Ingrese ano: \n";
	cin>>ano1;
	cout<<"Ingrese mes: \n";
	cin>>mes1;
	cout<<"Ingrese dia: \n";
	cin>>dia;
	ifstream informe;
	informe.open("entradas.txt");
	if(informe.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		informe>>diaEntrada;
		while(!informe.eof()){
			informe>>mesEntrada>>anoEntrada>>codigoE1>>coidgoE2>>cantidadEntrada>>valorEntrada;
			if(ano>>anoEntrada && mes>>mesEntrada && dia>>diaEntrada && ano1<=anoEntrada && mes1<=mesEntrada && dia1<diaEntrada){
				cout<<"Entrada: "<<diaEntrada<<"-"<<mesEntrada<<"-"<<anoEntrada<<"\n";
				cout<<"Codigo cliente: "<<codigoE1<<"\n";
				cout<<"Codigo producto: "<<CodioE2<<"\n";
				cout<<"Cantidad del producto: "<<cantidadEntrada<<"\n";
				cout<<"Valor del producto ingresado: "<<valorEntrada<<"\n";
			}
			informe>>diaEntrada;
		}
		informe.close();
	}
}

void informes3(){
	int dia,mes,ano,dia1,mes1,ano1;
	int diaEntrada,mesEntrada,anoEntrada,codigoE1,codigoE2,cantidadEntrada,valorEntrada,aux=0;
	cout<<"RANGO DE FECHAS \n";
	cout<<"Rango tope \n";
	cout<<"Ingrese ano: \n";
	cin>>ano;
	cout<<"Ingrese mes: \n";
	cin>>mes;
	cout<<"Ingrese dia: \n";
	cin>>dia;
	cout<<"RANGO MINIMO \n";
	cout<<"Ingrese ano: ";
	cin>>ano1;
	cout<<"ingrese mes: ";
	cin>>mes1;
	cout<<"Ingrese dia: ";
	cin>>dia1;
	ifstream informe;
	informe.open("entradas.txt");
	if(informe.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		informe>>diaEntrada;
		while(!informe.eof()){
			informe>>mesEntrada>>anoEntrada>>codigoE1>>codigoE2>>cantidadEntrada>>valorEntrada;
			if(ano>=anoEntrada && mes>=mesEntrada && dia>>diaEntrada && ano1<=anoEntrada && mes1<=mesEntrada && dia1<diaEntrada){
				cout<<"Salida: "<<diaEntrada<<"-"<<mesEntrada<<"-"<<anoEntrada<<"-"<<"\n";
				cout<<"Codigo cliente: "<<codigoE1<<"\n";
				cout<<"Codigo producto: "<<codigoE2<<"\n";
				cout<<"Cantidad del producto: "<<cantidadEntrada<<"\n";
				cout<<"Valor del producto: "<<valorEntrada<<"\n";
			}
			informe>diaEntrada;
		}
		informe.close();
	}
}

void informes4(){
	int dia,mes,ano,dia1,mes1,ano1;
	int diaEntrada,mesEntrada,anoEntrada,codigoE1,codigoE2,cantidadEntrada,valorEntrada,aux=0;
	cout<<"RANGO DE FECHAS \n";
	cout<<"Rango tope \n";
	cout<<"Ingrese ano: \n";
	cin>>ano;
	cout<<"Ingrese mes: \n";
	cin>>mes;
	cout<<"Ingrese dia: \n";
	cin>>dia;
	cout<<"RANGO MINIMO \n";
	cout<<"Ingrese ano: ";
	cin>>ano1;
	cout<<"ingrese mes: ";
	cin>>mes1;
	cout<<"Ingrese dia: ";
	cin>>dia1;
	ifstream informe;
	if(informe.fail()){
		exit(1);
	}
	else{
		informe>>diaEntrada;
		while(!informe.eof()){
			informe>>mesEntrada>>anoEntrada>>codigoE2>>cantidadEntrada>>valorEntrada;
			if(ano>=anoEntrada && mes>=mesEntrada && dia>diaEntrada && ano1<=anoEntrada && mes1<=mesEntrada && dia1<diaEntrada){
				aux += 1;
			}
			informe>>diaEntrada;
		}
		informe.close();
		cout<<"La cantidad de entradas que se realizaron en ese rango fueron: "<<aux<<"\n";
	}
}

void informes5(){
	int dia,mes,ano,dia1,mes1,ano1;
	int diaEntrada,mesEntrada,anoEntrada,codigoE1,codigoE2,cantidadEntrada,valorEntrada,aux=0;
	cout<<"RANGO DE FECHAS \n";
	cout<<"Rango tope \n";
	cout<<"Ingrese ano: \n";
	cin>>ano;
	cout<<"Ingrese mes: \n";
	cin>>mes;
	cout<<"Ingrese dia: \n";
	cin>>dia;
	cout<<"RANGO MINIMO \n";
	cout<<"Ingrese ano: ";
	cin>>ano1;
	cout<<"ingrese mes: ";
	cin>>mes1;
	cout<<"Ingrese dia: ";
	cin>>dia1;
	ifstream informe;
	informe.open("salidas.txt");
	if(informe.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	else{
		informe>>diaEntrada;
		while(!informe.eof()){
			informe>>mesEntrada>>anoEntrada>>codigoE1>>codigoE2>>cantidadEntrada>>valorEntrada;
			if(ano>=anoEntrada && mes>=mesEntrada && dia>diaEntrada && ano1<=anoEntrada && mes1<=mesEntrada && dia1<diaEntrada){
				aux += 1;
			}
			informe>>diaEntrada;
		}
		informe.close();
		cout<<"La cantidad de salidas que se realizaron en ese rango fueron: "<<aux<<"\n";
	}
}

void informes6(){

}

void informes7(){

}

void informes8(){

}

void informes9(){

}

void informes10(){

}

void informes11(){

}

void informes12(){

}
