#ifndef RESOLUTION_H
#define RESOLUTION_H

#define EPS 0.0000001

float f(float x);
float dichotomie(float a, float b);
float newton(float x0);
float point_fixe(float x0, float x1);

float aire_rectangles(float a, float b, int n);
float aire_trapezes(float a, float b, int n);

#endif
