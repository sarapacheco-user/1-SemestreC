#include <stdio.h>
int main (void){
	float notaacumulada;
	int quantidade;
	printf("Informe a quantidade de notas : \n");
	scanf("%i",&quantidade);
	int  contador = 0;
	while (contador< quantidade){
		float nota;
		//capturando a nota do comentário
		printf("informe a nota:\n ");
		scanf("%f",&nota);
		//acumula a nota
		//nota acumulada = nota acumulada + nota;
		notaacumulada +=nota;// significa a meesma coisa da linha anterior
		//incrementa o contador 
		//contador++;
		//++contador;
		contador +=1;//NESTE CONTEXTO,significa a mesma coisa que as linhas anteriores
		//
	}
		float media = notaacumulada/quantidade;
		printf("A media das notas e %.1f\n",media);
		return 0;
	}
	/* Estrutura do While:
	While (condição){
     operação desejada }
	*/
	
	/* Sintaxe do For
	for (condição){
	execução
     }
	CUIDADO COM O LOOP INACABÁVEL
	para evita-lo, segue exemplo de sintaxe 
	int  i = 0;
	while (i<5){
	printf("%d\n",i);
	i++; : !!!!!!!!!!!*/
	/*NO CASO DO FOR , A ATIVIVIDADE FICARIA 
	for(int contador=0; contador < quantidadede; contador
