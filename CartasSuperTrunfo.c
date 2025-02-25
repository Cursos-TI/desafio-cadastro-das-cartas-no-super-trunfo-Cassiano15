#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main(){
    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;
    
    char estado2;
    char codigo2[50];
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;


    printf("carta 1: você deve fornecer uma letra de A a H para representar o estado de sua escolha:\n ");
    scanf("%c", &estado);

    printf(" carta 2: você deve fornecer uma letra de A a H para representar o estado de sua escolha:\n ");
    scanf("%s", &estado2);

    printf("carta 1: agora você pode escolher um numero de 01 a 04 para representar o codigo do seu estado, lembrando que deve ser a letra escolhida anteriormente mais o numero escolhido:\n ");
    scanf("%s", &codigo);

    printf("carta 2: agora você pode escolher um numero de 01 a 04 para representar o codigo do seu estado, lembrando que deve ser a letra escolhida anteriormente mais o numero escolhido:\n ");
    scanf("%s", &codigo2);

    printf("carta 1: escolha o nome de uma cidade:\n ");
    scanf("%s", &nome);

    printf("carta 2: escolha o nome de uma cidade:\n ");
    scanf("%s", &nome2);

    printf("carta 1: informe a qunatidade da população da cidade escolhida:\n ");
    scanf("%d", &populacao);

    printf("carta 2: informe a qunatidade da população da cidade escolhida:\n ");
    scanf("%d", &populacao2);

    printf("carta 1: a area da cidade em quilometros quadrados:\n ");
    scanf("%f", &area);

    printf("carta 2: a area da cidade em quilometros quadrados:\n ");
    scanf("%f", &area2);

    printf("carta 1: o produto interno bruto da cidade:\n ");
    scanf("%f", &PIB);
    printf("carta 2: o produto interno bruto da cidade:\n ");
    scanf("%f", &PIB2);

    printf("carta 1: agr informe a quantidade de pontos turisticos dessa cidade:\n ");
    scanf("%i", &pontosturisticos);

    printf("carta 2: agr informe a quantidade de pontos turisticos dessa cidade:\n ");
    scanf("%d", &pontosturisticos2);
    
    
    printf("CARTA 1\n Estado: %c\n codigo: %s\n nome: %s\n populacao: %d\n area: %.2f km²\n PIB: %.2f bilhões de reais\n pontos turisticos: %i\n", estado, codigo, nome, populacao, area, PIB, pontosturisticos);

    printf("CARTA 2\n Estado: %c\n codigo: %s\n nome: %s\n populacao: %d\n area: %.2f km²\n PIB: %.2f bilhões de reais\n pontos turisticos: %d\n", estado2, codigo2, nome2, populacao2, area2, PIB2, pontosturisticos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
