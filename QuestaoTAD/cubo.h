// cubo.h

#ifndef CUBO_H
#define CUBO_H

typedef struct {
  double aresta;
} Cubo;

Cubo *criar_cubo(double aresta);
void destruir_cubo(Cubo *cubo);
double get_aresta(Cubo *cubo);
double perimetro_aresta(Cubo *cubo);
double area_face(Cubo *cubo);
double area_total_faces(Cubo *cubo);
double volume_cubo(Cubo *cubo);
double comprimento_diagonais(Cubo *cubo);

#endif