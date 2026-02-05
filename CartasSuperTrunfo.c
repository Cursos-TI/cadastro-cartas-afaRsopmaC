#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char capital1[20], capital2[20], codigo1[4], codigo2[4];
  float pib1, pib2, area1, area2;
  int populacao1, populacao2, pt_tour1, pt_tour2;

  // Área para entrada de dados da PRIMEIRA carta.
  printf ("ENTRADA - DADOS DA CARTA Nº 1:\n");
  printf ("ESTADO (somente a primeira letra): ");
  scanf (" %c", &estado1);
  printf ("CAPITAL: ");
  scanf ("%s", capital1);
  printf ("CÓD. DA CARTA (1ª letra do Estado + sequência de dois algarismos numéricos): ");
  scanf ("%s", codigo1);
  printf ("PIB (Em Trilhões de R$): ");
  scanf ("%f", &pib1);
  printf ("ÁREA: ");
  scanf ("%f", &area1);
  printf ("POPULAÇÃO (Em milhões de habitantes): ");
  scanf ("%d", &populacao1);
  printf ("QUANTIDADE DE PONTOS TURÍSTICOS: ");
  scanf ("%d", &pt_tour1);

  // Área para entrada de dados da SEGUNDA carta.
  printf ("\nENTRADA - DADOS DA CARTA Nº 2:\n");
  printf ("ESTADO (Somente a primeira letra): ");
  scanf (" %c", &estado2);
  printf ("CAPITAL: ");
  scanf ("%s", capital2);
  printf ("CÓD. DA CARTA (1ª letra do Estado + sequência de dois algarismos numéricos): ");
  scanf ("%s", codigo2);
  printf ("PIB (Em Trilhões de R$): ");
  scanf ("%f", &pib2);
  printf ("Área: ");
  scanf ("%f", &area2);
  printf ("POPULAÇÃO (Em milhões de habitantes): ");
  scanf ("%d", &populacao2);
  printf ("QUANTIDADE DE PONTOS TURÍSTICOS: ");
  scanf ("%d", &pt_tour2);

  // Área para exibição dos dados DAS CARTAS CADASTRADAS
  printf ("\nAPRESENTAÇÃO - DADOS DA CARTA Nº1\n");
  printf ("Estado: %c\n", estado1);
  printf ("Capital: %s\n", capital1);
  printf ("Cód. da Carta: %.3s\n", codigo1);
  printf ("PIB: R$ %.2f Trilhões\n", pib1);
  printf ("Área: %.3f km²\n", area1);
  printf ("População: %d milhões de habitantes.\n", populacao1);
  printf ("%d pontos turísticos no Estado.\n", pt_tour1);

  printf ("\nAPRESENTAÇÃO - DADOS DA CARTA Nº2:\n");
  printf ("Estado: %c\n", estado2);
  printf ("Capital: %s\n", capital2);
  printf ("Cód. da Carta: %.3s\n", codigo2);
  printf ("PIB: R$ %.2f Trilhões\n", pib2);
  printf ("Área: %.3f km²\n", area2);
  printf ("População: %d milhões de habitantes.\n", populacao2);
  printf ("%d pontos turísticos no Estado.\n", pt_tour2);

return 0;
} 