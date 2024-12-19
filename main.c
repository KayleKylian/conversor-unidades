#include <stdio.h>
#include <stdlib.h>
void comprimento(){
  printf("digite o numero que deseja converter com sua atual unidade de medida: \n");
  
  
}
void massa(){
  
}
void volume() {
    int escolha;
    float valor, convertido;

    printf("Escolha a conversao de volume desejada:\n");
    printf("1- Litros para Mililitros\n");
    printf("2- Mililitros para Litros\n");
    printf("3- Litros para Metros Cubicos\n");
    printf("4- Metros Cubicos para Litros\n");
    printf("5- Mililitros para Metros Cubicos\n");
    printf("6- Metros Cubicos para Mililitros\n");
    scanf("%d", &escolha);

    switch (escolha) {
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
