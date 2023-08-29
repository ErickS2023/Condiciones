//*Programa que calcula algunas expresiones logicas operaciones*/
#include <stdio.h>
#include <math.h>
int main()
{
	//expresiones logicas

    printf("La expresion logica de 1: %d\n",(5>3 && 10 <=10));
    printf("La expresion logica de 2: %d\n",(50>75 || 100 <57));
   printf("La expresion logica de 3: %d\n",5 >=3);
    printf("La expresion logica de 4: %d\n",!(5 >=3));
    printf("La expresion logica de 5: %d\n",!(5 <=3));

   	printf("\a");//Alerta
   
    return 0; 
}

