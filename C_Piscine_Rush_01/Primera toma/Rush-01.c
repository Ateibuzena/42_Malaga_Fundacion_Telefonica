#include <stdio.h>
#include <stdlib.h>
int calcular_altura_maxima(int mapa[4][4], int fila, int columna) {
  int altura_maxima = 0;

  // Se recorre la fila actual para encontrar la altura máxima de las cajas ya colocadas.
  for (int i = 0; i < 4; i++) {
    if (mapa[fila][i] > altura_maxima) {
      altura_maxima = mapa[fila][i];
    }
  }

  // Se recorre la columna actual para encontrar la altura máxima de las cajas ya colocadas.
  for (int i = 0; i < 4; i++) {
    if (mapa[i][columna] > altura_maxima) {
      altura_maxima = mapa[i][columna];
    }
  }

  // Se compara la altura de la caja actual con la altura máxima de las cajas ya colocadas.
  if (altura_maxima > 0) {
    altura_maxima--;
  }

  return altura_maxima;
}

int main() {
  int mapa[4][4];
  int fila = 0, columna = 0;

  while (fila < 4 && columna < 4) {
    // Si la posición actual está vacía, se coloca una caja.
    if (mapa[fila][columna] == 0) {
      int altura_maxima = calcular_altura_maxima(mapa, fila, columna);
      mapa[fila][columna] = altura_maxima;
    }

    // Se actualiza la variable fila o columna para pasar a la siguiente posición.
    if (columna < 3) {
      columna++;
    } else {
      columna = 0;
      fila++;
    }
  }

  // Se imprime el mapa.
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", mapa[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*int calcular_altura_maxima(int mapa[4][4], int fila, int columna) {
  int altura_maxima = 4;

  // Se recorre la fila actual para encontrar la altura máxima de las cajas ya colocadas.
  for (int i = 0; i < 4; i++) {
    if (mapa[fila][i] > altura_maxima) {
      altura_maxima = mapa[fila][i];
    }
  }

  // Se recorre la columna actual para encontrar la altura máxima de las cajas ya colocadas.
  for (int i = 0; i < 4; i++) {
    if (mapa[i][columna] > altura_maxima) {
      altura_maxima = mapa[i][columna];
    }
  }

  return altura_maxima;
}*/

