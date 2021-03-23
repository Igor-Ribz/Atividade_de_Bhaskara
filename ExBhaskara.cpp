//Entrada: numero de A, B ,C
//Saida: X' E X"
//Processamento: Calculo
//Sequencial
#include<stdio.h>// biblioteca para entrada e saída de dados "scanf e printf"
#include<math.h>// biblioteca matemática
#include<stdlib.h>//biblioteca para "system pause"
int main(){//Inicio do algoritmo: Função main
    double a,b,c, x1,x2, delta; //int %d  ou %i -> float %f -> double %lf
    
	printf ("Digite o valor de a: "); 
	scanf ("%lf",&a); //Codigo de formatação - codigo de endereço - variavel
	
	printf ("Digite o valor de b: ");
	scanf("%lf", &b);  //Codigo de formatação - codigo de endereço - variavel
	
	printf ("Digite o valor de c: ");
	scanf("%lf", &c);  //Codigo de formatação - codigo de endereço - variavel

    //Condição: Não posso dividir por zero
    // também é impossível calcular   delta <0
  
    delta = pow(b,2) - 4*a*c;

	// e - and &&
    //ou - or|| 
    if (a == 0 or delta < 0 ); // == (igual) != (diferente) <(menor) >(maior) <=(menor igual) >= (maior igual)
    {
	   printf("Impossivel calcular!\n");
    }
	  else //senão
	{			
      x1 = (-(b)+ sqrt(pow(delta) )/(2*a);  
      x2 = (-(b)- sqrt(pow(delta) )/(2*a); 
    printf("X1 = %.2lf\tx2 = %.2lf\n", x1,x2);//impressão do texto na tela do usuario
    }

    System("pause");
	return 0; //retorno da função
}   //final do algoritmo
