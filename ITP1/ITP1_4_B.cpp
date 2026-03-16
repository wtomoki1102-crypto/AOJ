#include<stdio.h>

int main() {

  double r;
  scanf("%lf",&r);

  double pai=3.141592653589793;

  double mennseki=pai*r*r;
  double ennsyuu=pai*2*r;

  printf("%.6f %.6f\n",mennseki,ennsyuu);

  return 0;   
  
}
