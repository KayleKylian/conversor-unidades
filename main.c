#include <stdio.h>
#include <stdlib.h>

// Funções de Conversão de Unidades
void comprimento();
void massa();
void volume();
void temperatura();
void velocidade();
void potencia();
void area();
void tempo();
void bits();

int main(){
  int input = -1; 
  while (input != 0) {
    printf("\nDigite uma das opcoes: \n");
    printf("0 - Para fechar \n");
    printf("1 - Para converter unidades de comprimento \n");
    printf("2 - Para converter unidades de massa \n");
    printf("3 - Para converter unidades de volume \n");
    printf("4 - Para converter unidades de temperatura \n");
    printf("5 - Para converter unidades de velocidade \n");
    printf("6 - Para converter unidades de potencia \n");
    printf("7 - Para converter unidades de area \n");
    printf("8 - Para converter unidades de tempo \n");
    printf("9 - Para converter unidades de bits \n");
   if (scanf("%d", &input) != 1) {
      // Limpa o buffer de entrada se a leitura falhar
      while (getchar() != '\n');  // Limpa qualquer caractere restante
      system("cls");
      printf("Entrada invalida. Por favor, insira um numero entre 0 e 9.\n");
      continue;  // Retorna ao início do loop
    }
    switch (input) {
      case 0:
        input = 0;
        printf("Fechando");
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
      default:
        system("cls");//limpa o terminal
        printf("Input invalido, tente novamente. \n");
        break;
    }
  }
  return 0;
}

void comprimento(){

}

void massa(){

}

void volume(){

}

void temperatura(){
  float temperatura;
  char escala;
  printf("Digite o numero seguido de sua escala:\n");
  printf("C- Celsius \nF- Fahrenheit \nK- Kelvin \n");
  printf("Por exemplo 27C, para indicar 27 graus celsius\n");
  printf("Valor: ");
  scanf("%f %c",&temperatura,&escala);
  switch (escala) {
    case 'C':
      printf("%.2f em Celsius equivalem a:\n%.2f em Fahrenheit\n%.2f em Kelvin\n",temperatura,(temperatura * 9/5) + 32,temperatura + 273.15);
      break;
    case 'K':  
      printf("%.2f em Kelvin equivalem a:\n%.2f em Fahrenheit\n%.2f em Celsius\n",temperatura,1.8 * (temperatura - 273.15) + 32,temperatura - 273.15);
      break;
    case 'F':  
      printf("%.2f em Fahrenheit equivalem a:\n%.2f em Kelvin\n%.2f em Celsius\n",temperatura,(temperatura - 32) * 5/9 + 273.15,(temperatura - 32) / 1.8);
      break;
      
    default:
      system("cls");
      printf("Unidade indisponivel no conversor\nVerifique se esta utilizando letras maiusculas\n");  
      break;
   }
}

void velocidade(){

}

void potencia(){

}

void area(){

}

void tempo(){

}

void bits(){

}