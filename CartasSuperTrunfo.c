#include <stdio.h>
#include<stdlib.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod_carta[4];
    char nome_cidade[50];
    double populacao;
    int area;
    double pib;


    printf("Insira o cód da cidade:\n");
    scanf("%3s", cod_carta);
    printf("Código inserido: %s\n", cod_carta);

     // Limpa o buffer de entrada
    while (getchar() != '\n');

    printf("Insira o nome da cidade:\n");
    scanf("%49[^\n]s", nome_cidade);
    printf("Nome de Cidade inserido: %s\n", nome_cidade);
    
    printf("Insira o tamanho da população :\n "); //CONCERTAR PARTE DOS NÚMEROS
    scanf("%lf", &populacao);
    printf("Numero da população inserido: %.3lf\n", populacao);

    printf("Insira o tamanho da area :\n "); //CONCERTAR PARTE DOS NÚMEROS
    scanf("%d", &area);
    printf("tamanho da area inserido: %d\n", area);


    printf("Insira o PIB:\n "); //CONCERTAR PARTE DOS NÚMEROS
    scanf("%lf", &pib);         
    printf("Numero do PIB inserido: %lf\n", pib);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
