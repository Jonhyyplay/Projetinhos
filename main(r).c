#include <stdio.h>

int main() {
    int votos_A, votos_B, votos_C, votos_nulos, votos_branco, total_eleitores;
    float percentual_votos_validos, percentual_A, percentual_B, percentual_C, percentual_nulos, percentual_branco;

    //Indicar quantidade dos votos:
    printf("Digite a quantidade de votos válidos para o candidato A: ");
    scanf("%d", &votos_A);
    printf("Digite a quantidade de votos válidos para o candidato B: ");
    scanf("%d", &votos_B);
    printf("Digite a quantidade de votos válidos para o candidato C: ");
    scanf("%d", &votos_C);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &votos_nulos);
    printf("Digite a quantidade de votos em branco: ");
    scanf("%d", &votos_branco);

    //Número total de eleitores:
    total_eleitores = votos_A + votos_B + votos_C + votos_nulos + votos_branco;

    //Cálculos para medir percentual:
    percentual_votos_validos = ((float)(votos_A + votos_B + votos_C) / total_eleitores) * 100;
    percentual_A = ((float)votos_A / total_eleitores) * 100;
    percentual_B = ((float)votos_B / total_eleitores) * 100;
    percentual_C = ((float)votos_C / total_eleitores) * 100;
    percentual_nulos = ((float)votos_nulos / total_eleitores) * 100;
    percentual_branco = ((float)votos_branco / total_eleitores) * 100;

    //Resultados das porcentagens:
    printf("\nNúmero total de eleitores: %d", total_eleitores);
    printf("\nPercentual de votos válidos em relação ao total de eleitores: %.2f%%", percentual_votos_validos);
    printf("\nPercentual de votos válidos do candidato A em relação ao total de eleitores: %.2f%%", percentual_A);
    printf("\nPercentual de votos válidos do candidato B em relação ao total de eleitores: %.2f%%", percentual_B);
    printf("\nPercentual de votos válidos do candidato C em relação ao total de eleitores: %.2f%%", percentual_C);
    printf("\nPercentual de votos nulos em relação ao total de eleitores: %.2f%%", percentual_nulos);
    printf("\nPercentual de votos em branco em relação ao total de eleitores: %.2f%%", percentual_branco);

    return 0;
}