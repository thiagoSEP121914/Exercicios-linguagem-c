#include <stdio.h>
#include <stdlib.h>

void calc(float R, float *area, float *volumer) {

    float pi = 3.14;

    *area = 4 * pi * (R * R);
    *volumer = (4.0/3.0) * pi * (R * R * R);

}


int main() {
        float raio;
        float A;
        float V;

        printf("Digite o valor do raio: ");
        scanf("%f", &raio);

        calc(raio,&A,&V);

        printf("A area da superficie eh %.2f\n", A);
        printf("O volume eh %f", V);

    return 0;
}
