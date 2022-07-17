#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
  // contraseña
  char contrasenia[8];
  char usuario[8];
  char si;
  do {
    cout << "introduce tu nombre de usuario: ";
    cin.getline(usuario, 14, '\n');
    cout << "introduce tu contraseña: ";
    cin.getline(contrasenia, 9, '\n');
    if (usuario == "joseluis" && contrasenia == "12345678") {
      break;
    }

  } while ();

  int opc = 0;
  cout << "******* OFERTA ACADEMICA*********" << endl;
  cout << "A.- Ingenieria" << endl;
  cout << "B.- Ciencias Economicas" << endl;
  cout << "C.- Ciencias Juridicas" << endl;
  cout << "D.- Periodismo" << endl;
  cout << "E.- Turismo" << endl;
  cout << "seleccionar opcion: " << endl;
  cin >> opc;

  return 0;
}

