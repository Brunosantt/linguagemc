#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
      Cálculo do IMC
      @author Bruno Santana
/*
      
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
printf ("ooooo ooo        ooooo   .oooooo. \n");
printf ("`888' `88.       .888'  d8P'  `Y8b\n"); 
printf (" 888   888b     d'888  888        \n");  
printf (" 888   8 Y88. .P  888  888        \n");  
printf (" 888   8  `888'   888  888        \n");  
printf (" 888   8    Y     888  `88b    ooo\n");  
printf ("o888o o8o        o888o  `Y8bood8P'\n");
printf("\n");
//variáveis
float imc,peso,altura;
//entrada
printf("Digite o seu peso em Kg: ");
scanf("%f",&peso);
printf("Digite a sua altura em metros: ");
scanf("%f",&altura);
//processamento
imc = peso / (altura*altura);
//saída
printf("IMC: %.2f\n",imc);
system("pause");
	return 0;
}

