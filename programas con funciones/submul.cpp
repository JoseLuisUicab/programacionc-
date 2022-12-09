#include <iostream>
using namespace std;
/* escribir un programa que reciba un numero entre 100 y 500
e imprima todos sus submultiplos.si se otorga el numero menor o mayor a ese
rango vilver a pedir el valor */
void submultiplos(int n) {
  int m, contador = 0;
  do {
    cout << "introduce un numero: ";
    cin >> m;
    if (m >= 40 && m <= 500) {
      n = m;
      cout << "submultiplos de ese numero: ";
      for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
          contador++;
          cout << i << "-";
        }
      }
    }
    else {
      cout << "numero fuera del rango" << endl;
    }
  } while (!(m >= 40 && m <= 500));
  cout << " cantidad: " << contador;
}
int main(int argc, char const* argv[]) {
  int n;
  submultiplos(n);
}