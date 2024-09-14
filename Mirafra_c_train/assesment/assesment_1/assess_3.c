#include <stdio.h>

float evaluate_quad(float coefficients[], float x) {
    return (coefficients[2]*(x*x))+(coefficients[1]*x)+coefficients[0];
}

int main() {
    float coefficients[] = {2.0, -1.0, -3.2};
    float result = evaluate_quad(coefficients, 3.5);
    printf("Result: %f\n", result);
    float coefficients_2[] = {1.0, 0, 0};
    result = evaluate_quad(coefficients_2, 4.0);
    printf("Result: %f\n", result);
}

