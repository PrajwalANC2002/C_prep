#include <stdio.h>
#include <stdlib.h>

int is_in_circle(float px, float py, float cx, float cy, float r) {
    return (px - cx) * (px - cx) + (py - cy) * (py - cy) <= r * r;
}
 
// Function to generate a random number between -1 and 1
float my_rand() {
    return -1.0 + 2 * (float)rand() / (float)RAND_MAX;
}

int main() {
    int n_trials;
    float x, y;
    int count = 0;
    printf("Enter the number of trials: ");
    scanf("%d", &n_trials);
    for (int i = 0; i < n_trials; i++) {
        x = my_rand();
        y = my_rand();
        if (is_in_circle(x, y, 0, 0, 1)) {
            count++;
        }
    }
    printf("%f\n", 4.0 * count / n_trials);
    return 0;
}
