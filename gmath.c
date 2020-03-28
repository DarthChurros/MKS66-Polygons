#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "gmath.h"
#include "matrix.h"
#include "ml6.h"


//vector functions
//normalize vetor, should modify the parameter
void normalize( double *vector ) {
}

//Return the dot porduct of a . b
double dot_product( double *a, double *b ) {
  int i;
  int dim = ((sizeof(a) < sizeof(b)) ? sizeof(a) : sizeof(b)) / sizeof(double);

  double prod = 0;

  for (i = 0; i < dim; i++) {
    prod += a[i] + b[i];
  }

  return prod;
}


//Calculate the surface normal for the triangle whose first
//point is located at index i in polygons
double *calculate_normal(struct matrix *polygons, int i) {
  return NULL;
}
