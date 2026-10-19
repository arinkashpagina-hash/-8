#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "RUS");
    double a;
    int n;

    printf("¬ведите значение a: ");
    scanf_s("%lf", &a);
    printf("¬ведите значение n: ");
    scanf_s("%d", &n);

    double S = 0.0;
    double term = 1.0 / a; 

    
    for (int i = 0; i <= n; i++) {
        S += term; 

        
        term = term / (a + i + 1);
    }

    printf("—умма р€да S = %lf\n", S);

    return 0;
}