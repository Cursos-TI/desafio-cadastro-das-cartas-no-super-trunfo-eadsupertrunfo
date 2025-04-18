#include <stdio.h>

// Desafio Super Trunfo - Países

#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 = Salvador;
    char codigo1[4] = "A01"; 
    char nomeCidade1[50] = Bahia;
    int populacao1 = 2429000; 
    float area1 = 313,800;
    float pib1 = 12243536;
    int pontosTuristicos1 = 50;

    // Declaração das variáveis para a segunda carta
    char estado2 = Ceará;
    char codigo2[4] = "B01";
    char nomeCidade2[50] = Fortaleza;
    int populacao2 = 1414000;
    float area2 = 567,295;
    float pib2 = 2453672;
    int pontosTuristicos2 = 10;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê a linha inteira com espaços

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Leitura dos dados da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
