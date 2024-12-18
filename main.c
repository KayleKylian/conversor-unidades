#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comprimento(){
  float tamanho;
  char medida[3];
  int resultado;

  printf("Digite o valor seguido de sua medida:\n");
  printf("m - Metros\ncm - Centimetros\nmm - Milimetros\n");
  printf("Por exemplo, 100m para indicar 100 metros\n");
  printf("Valor: ");
  resultado = scanf("%f %s", &tamanho, &medida);
  
  while(getchar() != '\n');

  if(resultado != 2) {
    printf("Entrada invalida, verifique se digitou corretamente.\n");
    return;
  }

  switch (strlen(medida)) {
    case 1:
      if(medida[0] == 'm') {
        printf("%.2f metros equivalem a:\n%.2f centimetros\n%.2f milimetros\n", tamanho, tamanho * 100, tamanho * 1000);
        break;
      } else {
        printf("Unidade de medida invalida, verifique se digitou em minusculo\n");
        break;
      }
    case 2:
      if(strcmp(medida, "cm") == 0) {
        printf("%.2f centimetros equivalem a:\n%.2f metros\n%.2f milimetros\n", tamanho, tamanho / 100, tamanho * 10);
        break;
      } else if(strcmp(medida, "mm") == 0) {
        printf("%.2f milimetros equivalem a:\n%.2f metros\n%.2f centimetros\n", tamanho, tamanho / 1000, tamanho / 10);
        break;
      } else {
        printf("Unidade de medida invalida, verifique se digitou em minusculo\n");
        break;
      }
    default:
      printf("Entrada Invalida\n");
      break;
  }
}
void massa(){
  
}
void volume(){
  
}
void temperatura(){
  int acabou = 0;
  float temperatura;
  char escala;
  printf("Digite o numero seguido de sua escala \n");
  printf("C- Celsius \nF- Fahrenheit \nK- Kelvin \n");
  printf("Por exemplo 27C, para indicar 27 graus celsius \n");
  scanf("%f %c",&temperatura,&escala);
  switch (escala) {
    case 'C':
      printf("%.2f em Celsius equivalem a %.2f em Fahrenheit e %.2f em Kelvin \n",temperatura,(temperatura * 9/5) + 32,temperatura + 273.15);
      break;
    case 'K':  
      printf("%.2f em Kelvin equivalem a %.2f em Fahrenheit e %.2f em Celsius \n",temperatura,1.8 * (temperatura - 273.15) + 32,temperatura - 273.15);
      break;
    case 'F':  
      printf("%.2f em Fahrenheit equivalem a %.2f em Kelvin e %.2f em Celsius \n",temperatura,(temperatura - 32) * 5/9 + 273.15,(temperatura - 32) / 1.8);
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
int main(){
  int input = -1; 
  while (input != 0) {
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
      default:
        system("cls");//limpa o terminal
        printf("Input invalido, tente novamente. \n");
        break;
    
    }
  }
  return 0;
}
