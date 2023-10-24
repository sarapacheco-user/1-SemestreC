int main(void){
	printf("Qual e a nota ");
	/*Aqui estudaremos if, else if e else
	Estrutura de condições 
	if (condição) {
	execute x
     }else if (condição2){  
    execute y
	 }else {
	 execute z
     }
	
	*/
float nota1 = 0.00;
    scanf("%f",&nota1);
	printf("A nota e %.2f\n",nota1);
	/*
	!!! Para fazer com que a nota não apareça 0.0 devo colocar especificações de float apenas no printf e NUNCA no scanf !!!!!!
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
 switch (variável){
    case possívelvalordavariavel:
    executa x
    break;
    case 2°possívelvalordavariavel:
    executa y
    break;
    (...)
	default :
    executa o que vai acontecer se não tiver um caso correspondente, e é opcional.
    }
 */
 
