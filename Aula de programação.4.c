int main(void){
	printf("Qual e a nota ");
	/*Aqui estudaremos if, else if e else
	Estrutura de condi��es 
	if (condi��o) {
	execute x
     }else if (condi��o2){  
    execute y
	 }else {
	 execute z
     }
	
	*/
float nota1 = 0.00;
    scanf("%f",&nota1);
	printf("A nota e %.2f\n",nota1);
	/*
	!!! Para fazer com que a nota n�o apare�a 0.0 devo colocar especifica��es de float apenas no printf e NUNCA no scanf !!!!!!
	*/


 if (nota1 >=6)   {
	printf("aprovado");
  }else if (nota1<6){	
    printf("reprovado");

 }else {
	printf("error");
 }


	
	return 0;
}
 /* Estrutura do Switch
 switch (vari�vel){
    case poss�velvalordavariavel:
    executa x
    break;
    case 2�poss�velvalordavariavel:
    executa y
    break;
    (...)
	default :
    executa o que vai acontecer se n�o tiver um caso correspondente, e � opcional.
    }
 */
 
