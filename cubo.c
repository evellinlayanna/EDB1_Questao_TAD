// cubo.c

#include "cubo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Criar um novo cubo
Cubo *criar_cubo(double aresta) {
  Cubo *novo_cubo = (Cubo *)malloc(sizeof(Cubo));
  if (novo_cubo == NULL) {
    return NULL;
  }
  novo_cubo->aresta = aresta;
  return novo_cubo;
}

// Destruir um cubo
void destruir_cubo(Cubo *cubo) { free(cubo); }

// Retornar o comprimento da aresta do cubo
double get_aresta(Cubo *cubo) { return cubo->aresta; }

// Retorna o perimetro da aresta do cubo
double perimetro_aresta(Cubo *cubo) { return 4 * get_aresta(cubo); }

// Retorna a area de uma face do cubo
double area_face(Cubo *cubo) { return 6 * get_aresta(cubo); }

// Retornar a area total das faces do cubo
double area_total_faces(Cubo *cubo) { return 6 * area_face(cubo); }

// Retornar o volume do cubo
double volume_cubo(Cubo *cubo) {
  return get_aresta(cubo) * get_aresta(cubo) * get_aresta(cubo);
}

// Retorna o comprimento das diagonais do cubo
double comprimento_diagonais(Cubo *cubo) { return sqrt(3) * get_aresta(cubo); }