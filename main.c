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
    float valor;
    char unidade;

    printf("Digite o valor seguido de sua unidade de medida:\n");
    printf("K - Quilograma\nG - Grama\nT - Tonelada\n");
    printf("Por exemplo, 5K para 5 Quilogramas\n");
    scanf("%f %c", &valor, &unidade);

    switch (unidade) {
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
  float valorInicial;
  char escalaInicial;
  printf("Digite a velocidade com m (para m/s), k (para km/h), ou p (para mph) para ser convertida (ex: 100m): ");
  scanf("%f %c", &valorInicial, &escalaInicial);

  switch (escalaInicial)
  {
  case 'm':
    printf("A velocidade %.2f m/s equivale a %.2f Km/h e %.2f mph \n", valorInicial,valorInicial * 3.6, (valorInicial*3.6)/1.60934);
    break;

  case 'k':
    printf("A velocidade em %.2f Km/h equivale a %.2f m/s e %.2f mph \n", valorInicial, valorInicial/3.6, valorInicial/1.60934);
    break;

  case 'p':
    printf("A velocidade em %.2f mph equivale a %.2f km/h e %.2f m/s \n", valorInicial, valorInicial*1.60934, (valorInicial*1.60934)/3.6);
    break;
  
  default:
    printf("Escolha uma velociade valida (m para m/s, k para km/h e p para mph): \n");
    break;
  }
  //converte m/s, km/h e mph
}
void potencia(){
    
    int escolhaInicial,escolhaFinal,novaescolha;
    float valor, resultado;
    do{
      MENU:
    //Unidades de Potência (Watts [W], Quilowatts [kW], cavalos-vapor [cv ou hp])
        printf("Conversor de unidades de potencia \n\n");
        printf("Em qual unidade esta o seu valor : \n1-Watts\n2-Quilowatts (kW)\n3-cavalos-vapor\n");
        scanf("%d",&escolhaInicial);
    
    }while(escolhaInicial >=4 || escolhaInicial<=0);

    printf("Qual o valor numerico a ser convertido:");
    scanf("%f", &valor);

    do{
        
        printf("\n\n");
        printf("Qual Unidade de conversao:\n");
        printf("1-Watts\n2-Quilowatts (kW)\n3-cavalos-vapor\n");
        scanf("%d",&escolhaFinal);
    }while(escolhaFinal>=4 || escolhaFinal<=0);
    //do while pra impedir que outros valores errados sejam adicionados as variaveis escolhafinal e  escolha inicial


    switch (escolhaInicial)
    {
        case 1: //Watts
            switch (escolhaFinal)
            {
            case 1 : 
                do{
                printf("Voce escolheu de Watts para Watts , nao precisa fazer conversao\n");
                printf("Deseja retornar ao menu ?\n1-Menu inicial\n2- Sair do codigo\n");
                scanf("%d",&novaescolha);
                if (novaescolha==1)
                {
                    goto MENU;
                }
                else if (novaescolha==2)
                {
                    goto END;
                }
                }while (novaescolha <1 || novaescolha>2);
                break;
            case 2://kW
                resultado = valor / 1000;
                printf("Voce escolheu Watts para Quilowatts.\n"); 
                printf("O resultado e: %.2f kW\n", resultado);
                break;
            case 3: //cavalo
                resultado = valor / 735.5; 
                printf("Voce escolheu Watts para Cavalos-Vapor.\n"); 
                printf("O resultado e: %.2f kW\n", resultado);
                break;
            }
        break;   
        case 2:
             switch(escolhaFinal)//kw
            {
                case 1:
                    resultado = valor * 1000; 
                    printf("Você escolheu Quilowatts para Watts.\n"); 
                    printf("O resultado é: %.2lf W\n", resultado);
                    break;
                case 2:
                    do{
                    printf("Voce escolheu de Quilowatts para Quilowatts, nao precisa fazer conversao\n");
                    printf("Deseja retornar ao menu ?\n1-Menu inicial\n2-Sair do codigo\n");
                    scanf("%d",&novaescolha);
                    if (novaescolha==1)
                    {
                        goto MENU;
                    }
                    else if (novaescolha==2)
                    {
                        goto END;
                    }
                    }while (novaescolha <1 || novaescolha>2);
                    break;
                case 3:
                    resultado = valor * 1000 / 735.5;
                    printf("Você escolheu Quilowatts para Cavalos-Vapor.\n");
                    printf("O resultado é: %.2lf cv\n", resultado); 
                    break;
            
            }       
        break;
            
        case 3: //Cavalos-Vapor switch (unidadeDestino) 
         
            switch (escolhaFinal)
            {
            case 1: // Para Watts 
                resultado = valor * 735.5; 
                printf("Você escolheu Cavalos-Vapor para Watts.\n");
                printf("O resultado é: %.2f W\n", resultado); 
                break; 
            case 2: // Para Quilowatts 
                 resultado = valor * 735.5 / 1000; 
                 printf("Você escolheu Cavalos-Vapor para Quilowatts.\n"); 
                 printf("O resultado é: %.2f kW\n", resultado);
                 break; 
            case 3: // Para Cavalos-Vapor (mesma unidade)
                do{
                printf("Você escolheu a mesma unidade, Cavalos-Vapor para Cavalos-Vapor.\n");
                printf("Deseja retornar ao menu ?\n1-Menu inicial\n2-Sair do codigo\n");
                scanf("%d",&novaescolha);
                if (novaescolha==1)
                {
                    goto MENU;
                }
                else if (novaescolha==2)
                {
                    goto END;
                }
                }while (novaescolha <1 || novaescolha>2);
                break;
            break;
            }
        break;     
    }             
END:
printf("Fim do codigo\n");
}
void area() {
    int escolha = 0;
    float valor, convertido;

    printf("Escolha a conversao de area desejada:\n");
    printf("1- Metros Quadrados para Centimetros Quadrados\n");
    printf("2- Centimetros Quadrados para Metros Quadrados\n");
    scanf("%d", &escolha);

    switch (escolha) {
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
