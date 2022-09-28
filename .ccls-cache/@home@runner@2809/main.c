#include <stdio.h>

int main() {
  int idade, ano_de_nascimento;
  printf("Digite a sua idade:\n");
   scanf("%d",&idade);
  ano_de_nascimento = 2022 - idade;
   printf("Ano de nascimento %d",ano_de_nascimento);
} 