//Entrada: numero de A, B ,C
//Saida: X' E X"
//Processamento: Calculo
//Sequencial
#include<stdio.h>// biblioteca para entrada e sa�da de dados "scanf e printf"
#include<math.h>// biblioteca matem�tica
#include<stdlib.h>//biblioteca para "system pause"
int main(){//Inicio do algoritmo: Fun��o main
    double a,b,c, x1,x2, delta; //int %d  ou %i -> float %f -> double %lf
    
	printf ("Digite o valor de a: "); 
	scanf ("%lf",&a); //Codigo de formata��o - codigo de endere�o - variavel
	
	printf ("Digite o valor de b: ");
	scanf("%lf", &b);  //Codigo de formata��o - codigo de endere�o - variavel
	
	printf ("Digite o valor de c: ");
	scanf("%lf", &c);  //Codigo de formata��o - codigo de endere�o - variavel

    //Condi��o: N�o posso dividir por zero
    // tamb�m � imposs�vel calcular   delta <0
  
    delta = pow(b,2) - 4*a*c;

	// e - and &&
    //ou - or|| 
    if (a == 0 or delta < 0 ); // == (igual) != (diferente) <(menor) >(maior) <=(menor igual) >= (maior igual)
    {
	   printf("Impossivel calcular!\n");
    }
	  else //sen�o
	{			
      x1 = (-(b)+ sqrt(pow(delta) )/(2*a);  
      x2 = (-(b)- sqrt(pow(delta) )/(2*a); 
    printf("X1 = %.2lf\tx2 = %.2lf\n", x1,x2);//impress�o do texto na tela do usuario
    }

    System("pause");
	return 0; //retorno da fun��o
}   //final do algoritmo
