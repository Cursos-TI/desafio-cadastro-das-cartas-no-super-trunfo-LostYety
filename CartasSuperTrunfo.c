#include <stdio.h>
#include<stdlib.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod_cidade[4], cod_cidade2[4];
    char nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int ponto_turistico, ponto_turistico2;

    printf("JOGO TRUNFO TEMA: PAÍSES\n");

    // Cadastro da Cidade 1
    printf("Insira o cód da cidade:\n");
    scanf("%3s", cod_cidade);
    printf("Código inserido: %s\n", cod_cidade);
    while (getchar() != '\n'); // Limpa o buffer

    printf("Insira o nome da cidade:\n");
    scanf("%49[^\n]", nome_cidade); // Corrigido: removido o 's' extra
    printf("Nome de Cidade inserido: %s\n", nome_cidade);
    while (getchar() != '\n');

    printf("Insira o tamanho da população:\n"); 
    scanf("%d", &populacao);
    printf("Número da população inserido: %d\n", populacao);

    printf("Insira o tamanho da área:\n"); 
    scanf("%f", &area);
    printf("Tamanho da área inserido: %.2f\n", area);

    printf("Insira o PIB:\n"); 
    scanf("%f", &pib);         
    printf("Número do PIB inserido: %.2f\n", pib);

    printf("Insira o número de ponto turístico:\n");
    scanf("%d", &ponto_turistico);
    printf("Número de pontos turísticos: %d\n", ponto_turistico);
    while (getchar() != '\n');

    // Cadastro da Cidade 2
    printf("Insira o cód da cidade2:\n");
    scanf("%3s", cod_cidade2);
    printf("Código inserido: %s\n", cod_cidade2);
    while (getchar() != '\n'); // Limpa o buffer após o código

    printf("Insira o nome da cidade 2:\n");
    scanf("%49[^\n]", nome_cidade2); // Corrigido: removido o 's' extra
    printf("Nome de Cidade inserido: %s\n", nome_cidade2);
    while (getchar() != '\n');

    printf("Insira o tamanho da população 2:\n"); 
    scanf("%d", &populacao2);
    printf("Número da população inserido: %d\n", populacao2);

    printf("Insira o tamanho da área 2:\n"); 
    scanf("%f", &area2);
    printf("Tamanho da área inserido: %.2f\n", area2);

    printf("Insira o PIB 2:\n"); 
    scanf("%f", &pib2);         
    printf("Número do PIB inserido: %.2f\n", pib2);

    printf("Insira o número de ponto turístico 2:\n");
    scanf("%d", &ponto_turistico2);
    printf("Número de pontos turísticos: %d\n", ponto_turistico2);

    // Interface de exibição
  
    printf("\nCIDADE 1:\n");
    printf("Código da cidade 1: %s\n", cod_cidade);
    printf("Nome da cidade 1: %s\n", nome_cidade);
    printf("Tamanho da população 1: %d\n", populacao);
    printf("Tamanho da área 1: %.2f\n", area);
    printf("Quantidade de Pontos turísticos 1: %d\n", ponto_turistico);

    printf("\nCIDADE 2:\n");
    printf("Código da cidade 2: %s\n", cod_cidade2);
    printf("Nome da cidade 2: %s\n", nome_cidade2);
    printf("Tamanho da população 2: %d\n", populacao2);
    printf("Tamanho da área 2: %.2f\n", area2);
    printf("Quantidade de Pontos turísticos 2: %d\n", ponto_turistico2);


     
  

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
