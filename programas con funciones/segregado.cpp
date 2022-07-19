#include <iostream>
using namespace std;
void segregarElmentos(int v[], int n) {
  int a = 0, j = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] > 0) {
      a = v[i]; // 
      v[i] = v[j];
      v[j] = a;
      j++;
    }
  }
}
int main() {
  int n = 0, m = 0;

  do {
    cout << "ingresa tamaño del arreglo";
    cin >> m;
    if (m >= 0 && m <= 10) {
      n = m;
    }
    else {
      cout << "fuera el rango [1-10]" << endl;
    }
  } while (!(m >= 0 && m <= 10));
  int v[n];
  for (int i = 0; i < n; i++) {
    cout << "numero: ";
    cin >> v[i];
  }
  segregarElmentos(v, n);

  for (int i = 0; i < n; i++) {
    cout << "[ " << v[i] << " ]";
  }
  return 0;
}
