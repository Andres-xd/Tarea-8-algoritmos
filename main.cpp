#include "Cliente.cpp"
#include <iostream>
using namespace std; 
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingresar nit: ";
	cin>>nit;
	cout<<"ingresar nombres: ";
	cin>>nombres;
	cout<<"ingresar apellidos: ";
	cin>>apellidos;
	cout<<"ingresar direccion: ";
	cin>>direccion;
	cout<<"ingresar telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	
	cout<<"datos del cliente: "<<obj.getNit()<<","<<obj.getNombre()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
	

	
	
	
	
	/*cout<<"ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);*/
	/*Cliente obj = Cliente();
	obj.setNit(nit),
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);*/
	
}
	
