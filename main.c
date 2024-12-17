#include <stdio.h>
#include <stdlib.h>
void comprimento(){
  printf("digite o numero que deseja converter com sua atual unidade de medida: \n");
  
  
}
void massa(){
  
}
void volume(){
  
}
void temperatura(){
  
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
    printf("digite uma das opcoes: \n");
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
    scanf("%d",&input);
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
        printf("input invalido, tente novamente. \n");
        break;
    
    }
  }
  return 0;
}
