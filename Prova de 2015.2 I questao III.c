
#include <stdio.h>

int main(){
    char comodo;
    int espaco2, espaco, largura, altura;
    int watts=60;

    printf("digite qual o espaco:\n\n");
    scanf("%c", &comodo);

    printf("\n\ndigite largura e altura do espaco m2\n\n");
    scanf("%d %d", &largura, &altura);

  espaco=largura*altura;
  espaco2=espaco/watts;
 printf("largura", largura);
  printf("altura", altura);
  printf("%c", comodo);
  printf("nome do espaco %c tamanho do espaco: %d e watts necessarios: %d",comodo, espaco, espaco2);
}