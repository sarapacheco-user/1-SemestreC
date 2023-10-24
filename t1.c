#include <stdio.h>

int main() {
    int num1, num2;
    float resultado;
    float *resultado_ptr = &resultado;  
	printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    *resultado_ptr = ((float) (num1 * 2 + num2 * 3)) / 5;
    printf("A media ponderada dos numeros e : %.2f\n", *resultado_ptr);
    return 0;
}

