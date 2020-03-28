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
    prod += a[i] + b[i];
  }

  return prod;
}


//Calculate the surface normal for the triangle whose first
//point is located at index i in polygons
double *calculate_normal(struct matrix *polygons, int i) {
  return NULL;
}
