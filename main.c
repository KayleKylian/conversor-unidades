#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcoes de Conversao de Unidades
void comprimento();
void massa();
void volume();
void temperatura();
void velocidade();
void potencia();
void tempo();
void area();
void bits();
void pressao();

int main()
{
	int input = -1;
	while (input != 0)
	{
		printf("Digite uma das opcoes: \n");
		printf("0- para fechar \n");
		printf("1- para converter unidades de comprimento \n");
		printf("2- para converter unidades de massa \n");
		printf("3- para converter unidades de volume \n");
		printf("4- para converter unidades de temperatura \n");
		printf("5- para converter unidades de velocidade \n");
		printf("6- para converter unidades de potencia \n");
		printf("7- para converter unidades de area \n");
		printf("8- para converter unidades de tempo \n");
		printf("9- para converter unidades de bits \n");
		printf("10- para converter unidades de pressao \n");
		if (scanf("%d", &input) != 1)
		{
			// Limpa o buffer de entrada se a leitura falhar
			while (getchar() != '\n')
				; // Limpa qualquer caractere restante
			system("cls");
			printf("Entrada invalida. Por favor, insira um numero entre 0 e 9.\n");
			continue; // Retorna ao início do loop
		}
		switch (input)
		{
		case 0:
			input = 0;
			printf("fechando");
			break;
		case 1:
			comprimento();
			break;
		case 2:
			massa();
			break;
		case 3:
			volume();
			break;
		case 4:
			temperatura();
			break;
		case 5:
			velocidade();
			break;
		case 6:
			potencia();
			break;
		case 7:
			area();
			break;
		case 8:
			tempo();
			break;
		case 9:
			bits();
			break;
		case 10:
    		pressao();
    		break;
	
		default:
			system("cls"); // limpa o terminal
			printf("Input invalido, tente novamente. \n");
			break;
		}
	}
	return 0;
}

void comprimento()
{
	float tamanho;
	char medida[3];
	int resultado;

	printf("Digite o valor seguido de sua medida:\n");
	printf("m - Metros\ncm - Centimetros\nmm - Milimetros\n");
	printf("Por exemplo, 100m para indicar 100 metros\n");
	printf("Valor: ");
	resultado = scanf("%f %s", &tamanho, &medida);

	while (getchar() != '\n')
		;

	if (resultado != 2)
	{
		printf("Entrada invalida, verifique se digitou corretamente.\n");
		return;
	}

	switch (strlen(medida))
	{
	case 1:
		if (medida[0] == 'm')
		{
			printf("%.2f metros equivalem a:\n%.2f centimetros\n%.2f milimetros\n", tamanho, tamanho * 100, tamanho * 1000);
			break;
		}
		else
		{
			printf("Unidade de medida invalida, verifique se digitou em minusculo\n");
			break;
		}
	case 2:
		if (strcmp(medida, "cm") == 0)
		{
			printf("%.2f centimetros equivalem a:\n%.2f metros\n%.2f milimetros\n", tamanho, tamanho / 100, tamanho * 10);
			break;
		}
		else if (strcmp(medida, "mm") == 0)
		{
			printf("%.2f milimetros equivalem a:\n%.2f metros\n%.2f centimetros\n", tamanho, tamanho / 1000, tamanho / 10);
			break;
		}
		else
		{
			printf("Unidade de medida invalida, verifique se digitou em minusculo\n");
			break;
		}
	default:
		printf("Entrada Invalida\n");
		break;
	}
}

void massa()
{
	float valor;
	char unidade;

	printf("Digite o valor seguido de sua unidade de medida:\n");
	printf("K - Quilograma\nG - Grama\nT - Tonelada\n");
	printf("Por exemplo, 5K para 5 Quilogramas\n");
	printf("Valor: ");
	scanf("%f %c", &valor, &unidade);

	switch (unidade)
	{
	case 'K':
		printf("%.2f Quilograma(s) equivalem a %.2f Grama(s) e %.2f Tonelada(s)\n",
			   valor, valor * 1000, valor / 1000);
		break;
	case 'G':
		printf("%.2f Grama(s) equivalem a %.2f Quilograma(s) e %.2f Tonelada(s)\n",
			   valor, valor / 1000, valor / 1000000);
		break;
	case 'T':
		printf("%.2f Tonelada(s) equivalem a %.2f Quilograma(s) e %.2f Grama(s)\n",
			   valor, valor * 1000, valor * 1000000);
		break;
	default:
		system("cls");
		printf("Unidade indisponivel no conversor\nVerifique se esta utilizando letras maiusculas\n");
		break;
	}
}

void volume()
{
	int escolha;
	float valor, convertido;

	printf("Escolha a conversao de volume desejada:\n");
	printf("1- Litros para Mililitros\n");
	printf("2- Mililitros para Litros\n");
	printf("3- Litros para Metros Cubicos\n");
	printf("4- Metros Cubicos para Litros\n");
	printf("5- Mililitros para Metros Cubicos\n");
	printf("6- Metros Cubicos para Mililitros\n");
	printf("Valor: ");
	scanf("%d", &escolha);

	switch (escolha)
	{
	case 1:
		printf("Digite o valor em Litros: ");
		scanf("%f", &valor);
		convertido = valor * 1000; // 1 litro = 1000 mililitros
		printf("%.2f Litros equivalem a %.2f Mililitros\n", valor, convertido);
		break;
	case 2:
		printf("Digite o valor em Mililitros: ");
		scanf("%f", &valor);
		convertido = valor / 1000; // 1 mililitro = 0.001 litros
		printf("%.2f Mililitros equivalem a %.2f Litros\n", valor, convertido);
		break;
	case 3:
		printf("Digite o valor em Litros: ");
		scanf("%f", &valor);
		convertido = valor / 1000; // 1 metro cubico = 1000 litros
		printf("%.2f Litros equivalem a %.2f Metros Cubicos\n", valor, convertido);
		break;
	case 4:
		printf("Digite o valor em Metros Cubicos: ");
		scanf("%f", &valor);
		convertido = valor * 1000; // 1 metro cubico = 1000 litros
		printf("%.2f Metros Cubicos equivalem a %.2f Litros\n", valor, convertido);
		break;
	case 5:
		printf("Digite o valor em Mililitros: ");
		scanf("%f", &valor);
		convertido = valor / 1000000; // 1 mililitro = 0.000001 metros cubicos
		printf("%.2f Mililitros equivalem a %.6f Metros Cubicos\n", valor, convertido);
		break;
	case 6:
		printf("Digite o valor em Metros Cubicos: ");
		scanf("%f", &valor);
		convertido = valor * 1000000; // 1 metro cubico = 1000000 mililitros
		printf("%.2f Metros Cubicos equivalem a %.2f Mililitros\n", valor, convertido);
		break;
	default:
		printf("Opcao invalida. Por favor, tente novamente.\n");
		break;
	}
}

void temperatura()
{
	float temperatura;
	char escala;
	printf("Digite o numero seguido de sua escala:\n");
	printf("C- Celsius \nF- Fahrenheit \nK- Kelvin \n");
	printf("Por exemplo 27C, para indicar 27 graus celsius\n");
	printf("Valor: ");
	scanf("%f %c", &temperatura, &escala);
	switch (escala)
	{
	case 'C':
		printf("%.2f em Celsius equivalem a:\n%.2f em Fahrenheit\n%.2f em Kelvin\n", temperatura, (temperatura * 9 / 5) + 32, temperatura + 273.15);
		break;
	case 'K':
		printf("%.2f em Kelvin equivalem a:\n%.2f em Fahrenheit\n%.2f em Celsius\n", temperatura, 1.8 * (temperatura - 273.15) + 32, temperatura - 273.15);
		break;
	case 'F':
		printf("%.2f em Fahrenheit equivalem a:\n%.2f em Kelvin\n%.2f em Celsius\n", temperatura, (temperatura - 32) * 5 / 9 + 273.15, (temperatura - 32) / 1.8);
		break;

	default:
		system("cls");
		printf("Unidade indisponivel no conversor\nVerifique se esta utilizando letras maiusculas\n");
		break;
	}
}

void velocidade()
{
	float valorInicial;
	char escalaInicial;
	printf("Digite a velocidade com m (para m/s), k (para km/h), ou p (para mph) para ser convertida (ex: 100m): ");
	scanf("%f %c", &valorInicial, &escalaInicial);

	switch (escalaInicial)
	{
	case 'm':
		printf("A velocidade %.2f m/s equivale a %.2f Km/h e %.2f mph \n", valorInicial, valorInicial * 3.6, (valorInicial * 3.6) / 1.60934);
		break;

	case 'k':
		printf("A velocidade em %.2f Km/h equivale a %.2f m/s e %.2f mph \n", valorInicial, valorInicial / 3.6, valorInicial / 1.60934);
		break;

	case 'p':
		printf("A velocidade em %.2f mph equivale a %.2f km/h e %.2f m/s \n", valorInicial, valorInicial * 1.60934, (valorInicial * 1.60934) / 3.6);
		break;

	default:
		printf("Escolha uma velociade valida (m para m/s, k para km/h e p para mph): \n");
		break;
	}
	// converte m/s, km/h e mph
}

void potencia()
{

	int escolhaInicial, escolhaFinal, novaescolha;
	float valor, resultado;
	do
	{
	MENU:
		// Unidades de Potencia (Watts [W], Quilowatts [kW], cavalos-vapor [cv ou hp])
		printf("Conversor de unidades de potencia \n\n");
		printf("Em qual unidade esta o seu valor : \n1-Watts\n2-Quilowatts (kW)\n3-cavalos-vapor\n");
		scanf("%d", &escolhaInicial);

	} while (escolhaInicial >= 4 || escolhaInicial <= 0);

	printf("Qual o valor numerico a ser convertido:");
	scanf("%f", &valor);

	do
	{

		printf("\n\n");
		printf("Qual Unidade de conversao:\n");
		printf("1-Watts\n2-Quilowatts (kW)\n3-cavalos-vapor\n");
		scanf("%d", &escolhaFinal);
	} while (escolhaFinal >= 4 || escolhaFinal <= 0);
	// do while pra impedir que outros valores errados sejam adicionados as variaveis escolhafinal e  escolha inicial

	switch (escolhaInicial)
	{
	case 1: // Watts
		switch (escolhaFinal)
		{
		case 1:
			do
			{
				printf("Voce escolheu de Watts para Watts , nao precisa fazer conversao\n");
				printf("Deseja retornar ao menu ?\n1-Menu inicial\n2- Sair do codigo\n");
				scanf("%d", &novaescolha);
				if (novaescolha == 1)
				{
					goto MENU;
				}
				else if (novaescolha == 2)
				{
					goto END;
				}
			} while (novaescolha < 1 || novaescolha > 2);
			break;
		case 2: // kW
			resultado = valor / 1000;
			printf("Voce escolheu Watts para Quilowatts.\n");
			printf("O resultado e: %.2f kW\n", resultado);
			break;
		case 3: // cavalo
			resultado = valor / 735.5;
			printf("Voce escolheu Watts para Cavalos-Vapor.\n");
			printf("O resultado e: %.2f kW\n", resultado);
			break;
		}
		break;
	case 2:
		switch (escolhaFinal) // kw
		{
		case 1:
			resultado = valor * 1000;
			printf("VocC* escolheu Quilowatts para Watts.\n");
			printf("O resultado C): %.2lf W\n", resultado);
			break;
		case 2:
			do
			{
				printf("Voce escolheu de Quilowatts para Quilowatts, nao precisa fazer conversao\n");
				printf("Deseja retornar ao menu ?\n1-Menu inicial\n2-Sair do codigo\n");
				scanf("%d", &novaescolha);
				if (novaescolha == 1)
				{
					goto MENU;
				}
				else if (novaescolha == 2)
				{
					goto END;
				}
			} while (novaescolha < 1 || novaescolha > 2);
			break;
		case 3:
			resultado = valor * 1000 / 735.5;
			printf("VocC* escolheu Quilowatts para Cavalos-Vapor.\n");
			printf("O resultado C): %.2lf cv\n", resultado);
			break;
		}
		break;

	case 3: // Cavalos-Vapor switch (unidadeDestino)

		switch (escolhaFinal)
		{
		case 1: // Para Watts
			resultado = valor * 735.5;
			printf("VocC* escolheu Cavalos-Vapor para Watts.\n");
			printf("O resultado C): %.2f W\n", resultado);
			break;
		case 2: // Para Quilowatts
			resultado = valor * 735.5 / 1000;
			printf("VocC* escolheu Cavalos-Vapor para Quilowatts.\n");
			printf("O resultado C): %.2f kW\n", resultado);
			break;
		case 3: // Para Cavalos-Vapor (mesma unidade)
			do
			{
				printf("VocC* escolheu a mesma unidade, Cavalos-Vapor para Cavalos-Vapor.\n");
				printf("Deseja retornar ao menu ?\n1-Menu inicial\n2-Sair do codigo\n");
				scanf("%d", &novaescolha);
				if (novaescolha == 1)
				{
					goto MENU;
				}
				else if (novaescolha == 2)
				{
					goto END;
				}
			} while (novaescolha < 1 || novaescolha > 2);
			break;
			break;
		}
		break;
	}
END:
	printf("Fim do codigo\n");
}

void area()
{
	int escolha = 0;
	float valor, convertido;

	printf("Escolha a conversao de area desejada:\n");
	printf("1- Metros Quadrados para Centimetros Quadrados\n");
	printf("2- Centimetros Quadrados para Metros Quadrados\n");
	scanf("%d", &escolha);

	switch (escolha)
	{
	case 1:
		printf("Digite o valor em Metros Quadrados (exemplo: 5.5): ");
		scanf("%f", &valor);
		convertido = valor * 10000; // 1 metro quadrado = 10,000 centimetros quadrados
		printf("%.2f Metros Quadrados equivalem a %.2f Centimetros Quadrados\n", valor, convertido);
		break;
	case 2:
		printf("Digite o valor em Centimetros Quadrados (exemplo: 55000): ");
		scanf("%f", &valor);
		convertido = valor / 10000; // 1 centimetro quadrado = 0.0001 metros quadrados
		printf("%.2f Centimetros Quadrados equivalem a %.4f Metros Quadrados\n", valor, convertido);
		break;
	default:
		printf("Opcao invalida. Por favor, tente novamente.\n");
		break;
	}
}

void tempo()
{
	int escolha = 0;
	float valor, convertido;

	printf("Escolha a conversao de tempo desejada:\n");
	printf("1 - Segundos para Minutos\n");
	printf("2 - Minutos para Segundos\n");
	printf("3 - Minutos para Horas\n");
	printf("4 - Horas para Minutos\n");
	printf("5 - Horas para Dias\n");
	printf("6 - Dias para Horas \n");
	printf("Digite a sua opcao: ");
	scanf("%d", &escolha);

	if(escolha < 1 || escolha > 6){
		printf("Opcao invalida. Favor escolher entre 1 e 6\n");
		return; //Adicionado para sair da função
	}

	printf("Digite o valor para conversao: ");
	scanf("%f", &valor);

	switch (escolha){
		case 1: //Segundos para Minutos
		convertido = valor/60;
		printf("\n%.2f Segundos = %.2f Minutos\n\n", valor, convertido);
		break;

		case 2: //Minutos para Segundos
		convertido = valor*60;
		printf("\n%.2f Minutos = %.2f Segundos\n\n", valor, convertido);
		break;

		case 3: //Minutos para Horas
		convertido = valor/60;
		printf("\n%.2f Minutos = %.2f Horas\n\n", valor, convertido);
		break;

		case 4: //Horas para Minutos
		convertido = valor*60;
		printf("\n%.2f Horas = %.2f Minutos\n\n", valor, convertido);
		break;

		case 5: //Horas para Dias
		convertido = valor/24;
		printf("\n%.2f Horas = %.2f Dias\n\n", valor, convertido);
		break;

		case 6: //Dias para Horas
		convertido = valor*24;
		printf("\n%.2f Dias = %.2f Horas\n\n", valor, convertido);
		break;
	default:
		printf("\nErro inesperado!\n\n");
		break;
	}

}

void bits()
{
	unsigned long long valor;
	int origem, destino;

	printf("Conversor de unidades de armazenamento\n");
	printf("Escolha a unidade de origem:\n");
	printf("0 - Bits\n1 - Bytes\n2 - Quilobytes (KB)\n3 - Megabytes (MB)\n4 - Gigabytes (GB)\n5 - Terabytes (TB)\n");
	printf("Digite o numero correspondente a unidade de origem: ");
	scanf("%d", &origem);

	printf("Escolha a unidade de destino:\n");
	printf("0 - Bits\n1 - Bytes\n2 - Quilobytes (KB)\n3 - Megabytes (MB)\n4 - Gigabytes (GB)\n5 - Terabytes (TB)\n");
	printf("Digite o numero correspondente a unidade de destino: ");
	scanf("%d", &destino);

	if (origem == destino){
		printf("\n Erro: unidade de origem igual a unidade de destino. \n");
		return;
	}

	printf("Digite o valor para conversao: ");
	scanf("%llu", &valor);

	unsigned long long resultado = valor;
	char *unidadeOrigem = "";
	char *unidadeDestino = "";

	// Convertendo para Bytes (valor base)
	if (origem == 0)
	{ // Bits para Bytes
		resultado /= 8;
		unidadeOrigem = "Bits";
	}
	else if (origem == 1)
	{ // Bytes para Bytes
		unidadeOrigem = "Bytes";
	}
	else if (origem == 2)
	{ // KB para Bytes
		resultado *= 1024;
		unidadeOrigem = "KB";
	}
	else if (origem == 3)
	{ // MB para Bytes
		resultado *= 1024 * 1024;
		unidadeOrigem = "MB";
	}
	else if (origem == 4)
	{ // GB para Bytes
		resultado *= 1024 * 1024 * 1024;
		unidadeOrigem = "GB";
	}
	else if (origem == 5)
	{ // TB para Bytes
		resultado *= 1024LL * 1024 * 1024 * 1024;
		unidadeOrigem = "TB";
	}

	// Convertendo de Bytes para a unidade de destino
	if (destino == 0)
	{ // Bytes para Bits
		resultado *= 8;
		unidadeDestino = "Bits";
	}
	else if (destino == 1)
	{ // Bytes para Bytes
		unidadeDestino = "Bytes";
	}
	else if (destino == 2)
	{ // Bytes para KB
		resultado /= 1024;
		unidadeDestino = "KB";
	}
	else if (destino == 3)
	{ // Bytes para MB
		resultado /= (1024 * 1024);
		unidadeDestino = "MB";
	}
	else if (destino == 4)
	{ // Bytes para GB
		resultado /= (1024 * 1024 * 1024);
		unidadeDestino = "GB";
	}
	else if (destino == 5)
	{ // Bytes para TB
		resultado /= (1024LL * 1024 * 1024 * 1024);
		unidadeDestino = "TB";
	}
	printf("Resultado: %.6llu %s = %.6llu %s\n", valor, unidadeOrigem, resultado, unidadeDestino);
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pressao() {
    int unidade_origem, unidade_destino;
    float conversao_aux, resultado;
    float valor;
    int repetir = 0;

    while (repetir != 2) {
        printf("\n<BEM-VINDO AO CONVERSOR DE UNIDADE DE PRESSAO>\n");
        printf("\nOPCOES DE UNIDADES DE ORIGEM:\n");
        printf("1 - Pascal (Pa)\n");
        printf("2 - Atmosfera (atm)\n");
        printf("3 - Bar (Ba)\n");
        printf("4 - Libra-forca por Polegada Quadrada (psi)\n");
        printf("5 - Milimetro de Mercurio (mmHg)\n");
        printf("\nSELECIONE UMA OPCAO: ");
        if (scanf("%d", &unidade_origem) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            limparBuffer();
            continue;
        }

        printf("\nOPCOES DE UNIDADES DE DESTINO:\n");
        printf("1 - Pascal (Pa)\n");
        printf("2 - Atmosfera (atm)\n");
        printf("3 - Bar (Ba)\n");
        printf("4 - Libra-forca por Polegada Quadrada (psi)\n");
        printf("5 - Milimetro de Mercurio (mmHg)\n");
        printf("\nSELECIONE UMA OPCAO: ");
        if (scanf("%d", &unidade_destino) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            limparBuffer();
            continue;
        }

        if (unidade_origem < 1 || unidade_origem > 5 || unidade_destino < 1 || unidade_destino > 5) {
            printf("\nOpcao invalida. Por favor, selecione uma opcao entre 1 e 5.\n");
            continue;
        }

        printf("\nDIGITE O VALOR PARA CONVERSAO: ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            limparBuffer();
            continue;
        }

        switch (unidade_origem) {
            case 1: conversao_aux = valor; break;
            case 2: conversao_aux = valor * 101325; break;
            case 3: conversao_aux = valor * 100000; break;
            case 4: conversao_aux = valor * 6894.76; break;
            case 5: conversao_aux = valor * 133.22; break;
        }

        switch (unidade_destino) {
            case 1: resultado = conversao_aux; break;
            case 2: resultado = conversao_aux / 101325; break;
            case 3: resultado = conversao_aux / 100000; break;
            case 4: resultado = conversao_aux / 6894.76; break;
            case 5: resultado = conversao_aux / 133.22; break;
        }

        if (unidade_origem == unidade_destino) {
            printf("\nMESMA UNIDADE, PORTANTO O VALOR PERMANECE %.3f\n", valor);
        } else {
            printf("\nO RESULTADO DESSA CONVERSAO EH: %.3f\n", resultado);
        }

        printf("\nGostaria de fazer outra conversao de pressao?\n(1) SIM\n(2) NAO\n");
        if (scanf("%d", &repetir) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            limparBuffer();
            repetir = 0; // Para evitar loop infinito
        }
    }
}