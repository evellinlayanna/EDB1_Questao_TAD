// Crie um TAD em C para representar um cubo tridimensional. Faca uma
// implementacao modularizada. Sao necessarias as seguintes operacoes
// fundamentais:
// 1 criar cubo 2 destruit cubo 3 retornar o comprimento da aresta
// 4 retornar o perimetro da aresta
// 5 retornar a area de uma face do cubo
// 6 retornar a area total das faces do cubo
// 7 retornar p volume do cubo
// 8 retorna o comprimento das diagonais

// main.c
#include "cubo.h"
#include <stdio.h>

int main() {
  double aresta;

  printf("Digite o comprimento da aresta do cubo: ");
  scanf("%lf", &aresta);

  Cubo *cubo = criar_cubo(aresta);

  if (cubo == NULL) {
    printf("Erro ao criar cubo");
    return 1;
  }
  printf("Comprimento da aresta: %.2lf\n", get_aresta(cubo));
  printf("Perimetro da aresta: %.2lf\n", perimetro_aresta(cubo));

  printf("Area de uma face do cubo: %.2lf\n", area_face(cubo));
  printf("Area total das faces do cubo: %.2lf\n", area_total_faces(cubo));
  printf("Volume do cubo: %.2lf\n", volume_cubo(cubo));
  printf("Comrpiemento das diagonais: %.2lf\n", comprimento_diagonais(cubo));

  destruir_cubo(cubo);
  return 0;
}