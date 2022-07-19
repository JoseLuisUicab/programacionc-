#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
  int v1[5], v2[5], v3[5], numero = 0;

  // vector 1 llenarlo de numeros pares

  for (int i = 0; i < 5; i++) {
    do {
      cout << "ingresa numeros solo pares " << (i + 1) << ": ";
      cin >> numero;
      if (numero % 2 == 0) {
        v1[i] = numero;
      }
      else {
        cout << "no es un par!!!";
      }
    } while (!(numero % 2 == 0));
  }

  // vector 2 llenarlo de numeros impares
  for (int i = 0; i < 5; i++) {
    do {
      cout << "ingresa numeros solo impares " << (i + 1) << ": ";
      cin >> numero;
      if (numero % 2 == 1) {
        v2[i] = numero;
      }
      else {
        cout << "no es un impar!!!";
      }
    } while (!(numero % 2 == 1));
  }

  cout << "suma de ambos vectores";
  for (int i = 0; i < 5; i++) {
    v3[i] = v1[i] + v2[i];
  }

  // imprimir la suma de ambos vectores
  for (int i = 0; i < 5; i++) {
    cout << v3[i] << "-";
  }

  return 0;
}
