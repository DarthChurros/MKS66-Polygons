#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "gmath.h"
#include "matrix.h"
#include "ml6.h"


//vector functions
//normalize vetor, should modify the parameter
void normalize( double *vector ) {
  double norm = sqrt(dot_product(vector, vector));

  int i;
  for (i = 0; i < 3; i++) {
    vector[i] /= norm;
  }
}

//Return the dot porduct of a . b
double dot_product( double *a, double *b ) {
  int i;

  double prod = 0;

  for (i = 0; i < 3; i++) {
    prod += a[i] * b[i];
  }

  return prod;
}


//Calculate the surface normal for the triangle whose first
//point is located at index i in polygons
double *calculate_normal(struct matrix *polygons, int i) {
  double vec_a[3];
  double vec_b[3];
  int j;

  for (j = 0; j < 3; j++) {
    vec_a[j] = polygons->m[j][i+1] - polygons->m[j][i];
    vec_b[j] = polygons->m[j][i+2] - polygons->m[j][i];
  }

  double* vec_normal = (double*)malloc(3 * sizeof(double));

  vec_normal[0] = vec_a[1] * vec_b[2] - vec_a[2] * vec_b[1];
  vec_normal[1] = vec_a[2] * vec_b[0] - vec_a[0] * vec_b[2];
  vec_normal[2] = vec_a[0] * vec_b[1] - vec_a[1] * vec_b[0];

  return vec_normal;
}
