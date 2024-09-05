#include <stdio.h>

int main() {
    int n, i;
    float soma = 0.0, media;

    printf("Quantas notas você deseja calcular? ");
    scanf("%d", &n);

    float notas[n]; 

    for (i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / n;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}
