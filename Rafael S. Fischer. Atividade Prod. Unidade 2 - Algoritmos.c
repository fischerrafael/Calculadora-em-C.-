//nome de usuário no GitHub: fischerrafael
#include <stdio.h>
#include <locale.h> //Esse comando é utilizado para corrigir erros de acentuação que o compilador não reconhece
void main()
{   setlocale(LC_ALL,"Portuguese");
    int operacao_menu, somar_1, somar_2, somar_r, subtrair_1, subtrair_2, subtrair_r, multiplicar_1, multiplicar_2, multiplicar_r, raiz_1, raiz_r, potencia_1, potencia_2, potencia_r, quadrado_1, quadrado_2, quadrado_r;
    float dividir_1, dividir_2, dividir_r; //fonte de adaptação: https://github.com/M4ttPizz4/Calculadora/blob/main/Calculadora.c
    printf("Autor: Rafael Soares Fischer\n Curso: Analise e Desenvolvimento de Sistemas\n Universidade La Salle\n Matricula: 201931092\n\n\n");
    printf("Qual operação deseja realizar? \n\n");
    printf(" 1. Raiz quadrada\n 2. Soma\n 3. Subtração\n 4. Multiplicação\n 5. Divisão\n 6. Potenciação\n\n");
    printf("Digite o número do comando: ");
    scanf("%i", &operacao_menu);

    if(operacao_menu == 1){
		printf("\nDigite o número que deseja calcular a raiz e aperte 'Enter':\n");
		scanf("%i", &raiz_1);
		printf("\n------------------------------------------------------------------------\n\n");
			raiz_r = sqrt(raiz_1);	//Fórmula
		printf("O resultado da raiz quadrada é : %i. \n", raiz_r);
    }

    if(operacao_menu == 2){
		printf("\nVocê escolheu a opção soma. \nDigite o primeiro número e em seguida aperte 'Enter':\n");
		scanf("%i", &somar_1);
		printf("\nDigite o segundo número:\n");
		scanf("%i", &somar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			somar_r = somar_1 + somar_2;	//Fórmula
		printf("O resultado da soma é : %i \n", somar_r);
	}

	if(operacao_menu == 3){
		printf("\nVocê escolheu a opção subtração. \nDigite o primeiro número e em seguida aperte 'Enter':\n");
		scanf("%i", &subtrair_1);
		printf("\nDigite o segundo número:\n");
		scanf("%i", &subtrair_2);
		printf("\n------------------------------------------------------------------------\n\n");
			subtrair_r = subtrair_1 - subtrair_2;	//Fórmula
		printf("O resultado da subtração é : %i \n", subtrair_r);
	}

	if(operacao_menu == 4){
		printf("\nVocê escolheu a opção multiplicação. \nDigite o primeiro número e em seguida aperte 'Enter':\n");
		scanf("%i", &multiplicar_1);
		printf("\nDigite o segundo número:\n");
		scanf("%i", &multiplicar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			multiplicar_r = multiplicar_1 * multiplicar_2;	//Fórmula
		printf("O resultado da multiplicação é : %i \n", multiplicar_r);
	}

	if(operacao_menu == 5){
		printf("Você escolheu a opção divisão. \nDigite o primeiro número e em seguida aperte 'Enter':\n");
		scanf("%f", &dividir_1);
		printf("\nDigite o segundo número:\n");
		scanf("%f", &dividir_2);
		printf("\n------------------------------------------------------------------------\n\n");
			dividir_r = dividir_1 / dividir_2;	//Fórmula
		printf("O resultado da divisão é : %.2f. \n", dividir_r); //A utilização do ponto após o sinal % é para limitar a quantidade de números após a vírgula
		}

    if(operacao_menu == 6){
		printf("\nPara calcular a potência, digite o número que desejar e aperte 'Enter':\n");
		scanf("%i", &potencia_1);
		printf("Digite o expoente do seu número:\n");
		scanf("%i", &potencia_2);
		printf("\n------------------------------------------------------------------------\n\n");
			potencia_r = pow(potencia_1, potencia_2); //Fórmula
		printf("O resultado da potenciação é : %i. \n", potencia_r);

    }

}
