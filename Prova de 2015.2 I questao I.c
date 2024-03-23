#include <stdio.h>

int main() {
float salario, liquido;
  
  printf("digite o valor do salario\n");
  scanf("%f", &salario);

  liquido=salario*0.11;
  if(liquido>570,88){
    printf("%.2f", liquido);
  }else{
    printf("erro");
  }
  return 0;
}