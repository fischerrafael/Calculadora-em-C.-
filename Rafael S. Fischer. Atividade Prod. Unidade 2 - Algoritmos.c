//nome de usu�rio no GitHub: fischerrafael
#include <stdio.h>
#include <locale.h> //Esse comando � utilizado para corrigir erros de acentua��o que o compilador n�o reconhece
void main()
{   setlocale(LC_ALL,"Portuguese");
    int operacao_menu, somar_1, somar_2, somar_r, subtrair_1, subtrair_2, subtrair_r, multiplicar_1, multiplicar_2, multiplicar_r, raiz_1, raiz_r, potencia_1, potencia_2, potencia_r, quadrado_1, quadrado_2, quadrado_r;
    float dividir_1, dividir_2, dividir_r; //fonte de adapta��o: https://github.com/M4ttPizz4/Calculadora/blob/main/Calculadora.c
    printf("Autor: Rafael Soares Fischer\n Curso: Analise e Desenvolvimento de Sistemas\n Universidade La Salle\n Matricula: 201931092\n\n\n");
    printf("Qual opera��o deseja realizar? \n\n");
    printf(" 1. Raiz quadrada\n 2. Soma\n 3. Subtra��o\n 4. Multiplica��o\n 5. Divis�o\n 6. Potencia��o\n\n");
    printf("Digite o n�mero do comando: ");
    scanf("%i", &operacao_menu);

    if(operacao_menu == 1){
		printf("\nDigite o n�mero que deseja calcular a raiz e aperte 'Enter':\n");
		scanf("%i", &raiz_1);
		printf("\n------------------------------------------------------------------------\n\n");
			raiz_r = sqrt(raiz_1);	//F�rmula
		printf("O resultado da raiz quadrada � : %i. \n", raiz_r);
    }

    if(operacao_menu == 2){
		printf("\nVoc� escolheu a op��o soma. \nDigite o primeiro n�mero e em seguida aperte 'Enter':\n");
		scanf("%i", &somar_1);
		printf("\nDigite o segundo n�mero:\n");
		scanf("%i", &somar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			somar_r = somar_1 + somar_2;	//F�rmula
		printf("O resultado da soma � : %i \n", somar_r);
	}

	if(operacao_menu == 3){
		printf("\nVoc� escolheu a op��o subtra��o. \nDigite o primeiro n�mero e em seguida aperte 'Enter':\n");
		scanf("%i", &subtrair_1);
		printf("\nDigite o segundo n�mero:\n");
		scanf("%i", &subtrair_2);
		printf("\n------------------------------------------------------------------------\n\n");
			subtrair_r = subtrair_1 - subtrair_2;	//F�rmula
		printf("O resultado da subtra��o � : %i \n", subtrair_r);
	}

	if(operacao_menu == 4){
		printf("\nVoc� escolheu a op��o multiplica��o. \nDigite o primeiro n�mero e em seguida aperte 'Enter':\n");
		scanf("%i", &multiplicar_1);
		printf("\nDigite o segundo n�mero:\n");
		scanf("%i", &multiplicar_2);
		printf("\n------------------------------------------------------------------------\n\n");
			multiplicar_r = multiplicar_1 * multiplicar_2;	//F�rmula
		printf("O resultado da multiplica��o � : %i \n", multiplicar_r);
	}

	if(operacao_menu == 5){
		printf("Voc� escolheu a op��o divis�o. \nDigite o primeiro n�mero e em seguida aperte 'Enter':\n");
		scanf("%f", &dividir_1);
		printf("\nDigite o segundo n�mero:\n");
		scanf("%f", &dividir_2);
		printf("\n------------------------------------------------------------------------\n\n");
			dividir_r = dividir_1 / dividir_2;	//F�rmula
		printf("O resultado da divis�o � : %.2f. \n", dividir_r); //A utiliza��o do ponto ap�s o sinal % � para limitar a quantidade de n�meros ap�s a v�rgula
		}

    if(operacao_menu == 6){
		printf("\nPara calcular a pot�ncia, digite o n�mero que desejar e aperte 'Enter':\n");
		scanf("%i", &potencia_1);
		printf("Digite o expoente do seu n�mero:\n");
		scanf("%i", &potencia_2);
		printf("\n------------------------------------------------------------------------\n\n");
			potencia_r = pow(potencia_1, potencia_2); //F�rmula
		printf("O resultado da potencia��o � : %i. \n", potencia_r);

    }

}
