#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const* argv[]) {
  // contraseñads
  string contrasenia, usuario, turno;
  char opc;
  int promedio;
  bool result = false;

  do {
    cout << "introduce tu nombre de usuario: ";
    getline(cin, usuario);
    cout << "introduce tu contraseña: ";
    getline(cin, contrasenia);
    if (usuario == "joseluis" && contrasenia == "12345678") {
      cout << "BIENVENIDO: " << usuario << endl;
      result = true;
    }
    else {
      cout << "inocreccto las credenciales vuelve a intentar" << endl;
    }

  } while (!(result));

  cout << "******* OFERTA ACADEMICA*********" << endl;
  cout << "A.- Ingenieria" << endl;
  cout << "B.- Ciencias Economicas" << endl;
  cout << "C.- Ciencias Juridicas" << endl;
  cout << "D.- Periodismo" << endl;
  cout << "E.- Turismo" << endl;
  cout << "seleccionar opcion: " << endl;
  opc = cin.get();

  switch (opc) {
  case 'A':
    break;
  case 'B':
    break;
  case 'C':
    break;
  case 'D':
    break;
  case 'E':
    break;
  default:
    break;
  }

  return 0;
}

