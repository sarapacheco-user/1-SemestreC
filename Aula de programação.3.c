
#include <stdio.h>

int main(void) {
  // Notas
  float n1 = 7.5;
  float n2 = 8.0;
  float n3 = 6.0;
  float n4 = 4.0;
  float soma = n1+n2+n3+n4;
  float media = soma/4;
  // Prints das Notas
  printf("n e %.2f + %.2f +%.2f + %.2f = %.2f\n",n1,n2,n3,n4,n1+n2+n3+n4 );
  printf("A media sera %.2f = %.2f\n",n1+n2+n3+n4,(n1+n2+n3+n4)/4);
  printf("de outra maneira tambem %.2f = %.2f\n ",soma,media);
  return 0;
}
// o principal problema desse códico seria se o numero de notas fosse diferente de 4, pois divide por 4 obrigatoriamente.
/* A Função scanf
scanf("%f",&double); :serve para pedir pro usuário determnada informação*/
int main2(void){
	printf("Qual e a nota");
	float nota = 0.0; 
	scanf("%.2f",&nota);
	printf("A nota e %.2f\n",nota);
if (media >=6)  {
	printf("aprovado");
}else if (media<6){	
    printf("reprovado");

}


	
	return 0;
}
