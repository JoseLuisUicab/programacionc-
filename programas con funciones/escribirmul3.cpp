#include <iostream>
using namespace std;
/*  escribir un programa que reciba N cantidad de numeros y se salga hasta
que se teclee un numero multiplo de 3 al final imprimir la suma y el promedio
de todos los numeros dados*/
void Nnumeros(float& suma, float& promedio) {
  suma = 0, promedio = 0;
  int cont = 0, n = 1;
  /* cout << "ingresa los numeros: ";
  cin >> n; */
  while (!(n % 3 == 0)) {
    cout << "ingresa los numeros: ";
    cin >> n;
    if (n % 3 != 0) {
      suma = suma + n;
      cont++;
      cout << "suma-> " << suma << endl;
    }
  }
  promedio = suma / cont;
}
int main(int argc, char const* argv[]) {
  float suma = 0;
  float pro = 0;
  Nnumeros(suma, pro);
  cout << "suma de los numero: " << suma;
  cout << "promedio de  los numeros: " << pro;
}
