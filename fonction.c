#include <stdio.h>
#include <math.h>
#include "declaration.h"

float f(double x){
  return cos (x) - (log (x) / x);
}

float dichotomie(float a, float b) {
  float c;
  while (fabs(b-a) > EPS) {
    c = (a+b)/2
  }
  if (f(a)*f(c) >0){
    a=c;
} else {
    b = c;
  }
return (a+b)/2;
}

float f_prime(float x){
  return -sin(x) - (1 - log(x)) / (x*x);
}

float newton(float x0){
  float x= x0;
  for (int i = 0; i < 100; i++){
    float x_n_plus1 = x - f(x) / f_prime(x);
    if (fabs(x_n_plus1 - x) < EPS) return x_n_plus1;
    x = x_n_plus1;
  }
  return x;
}
