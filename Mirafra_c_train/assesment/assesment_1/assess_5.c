#include <stdio.h>

float eval_poly(int degree, float coefficients[], float point) {
    
    return (coefficients[3]*(point*point*point))+(coefficients[2]*(point*point))+(coefficients[1]*point)+coefficients[0];
}

int main() {
    float coefficients[] = {2.0, 1.0, -1.5, 0.75}; // Polynomial: 0.75*x^3 - 1.5*x^2 + 1.0*x + 2.0
    int degree = 3;
    float result = eval_poly(degree, coefficients, 2.0);
    printf("Result: %f\n", result);
    float coefficients1[] = {2.0, 1.0, -1.5, 0.75, -6.3}; // Polynomial: -6.3*x^4 + 0.75*x^3 - 1.5*x^2 + 1.0*x + 2.0
    int degree1 = 4;
    float result1 = eval_poly(degree1, coefficients1, 0.5);
    printf("Result: %f\n", result1);
}
    


