#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Primeira Cidade
    char cid01_nome[50];
    char cid01_estado;
    char cid01_cod[4];
    float cid01_area, cid01_pib, cid01_pib_capta, cid01_dens_pop;
    int cid01_tur;
    unsigned long int cid01_populacao;

    //Segunda cidade
    char cid02_nome[50];
    char cid02_estado;
    char cid02_cod[4];
    float cid02_area, cid02_pib, cid02_pib_capta, cid02_dens_pop;
    int cid02_tur;
    unsigned long int cid02_populacao;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Inserção dos dados da primeira carta pelo usuário
    printf("Bem-vindo(a) ao jogo Super Trunfo. Para começar, vamos cadastrar 2 cartas para jogar!\nInsira o nome da cidade para criar a primeira carta: ");
    scanf("%s", &cid01_nome);
    printf("\nDe que estado \"%s\" é?: ", cid01_nome);
    scanf("%c", &cid01_estado);
    printf("\nInsira o código da carta: ");
    scanf("%s", &cid01_cod);
    printf("\nInsira a área em km² de \"%s\": ", cid01_nome);
    scanf("%f", &cid01_area);
    printf("\nInsira o PIB de \"%s\": ", cid01_nome);
    scanf("%f", &cid01_pib);
    printf("\nInsira o número de pontos turísticos de \"%s\": ", cid01_nome);
    scanf("%i", &cid01_tur);
    printf("\nInsira a população de \"%s\": ", cid01_nome);
    scanf("%lu", &cid01_populacao);
    //Cálculo da densidade populacional e do PIB per capta da cidade 1
    cid01_pib_capta = cid01_populacao / cid01_area;
    cid01_dens_pop = cid01_pib / cid01_populacao;

    //Inserção dos dados da segunda carta pelo usuário
    printf("Perfeito, agora já temos a primeira carta!\nInsira o nome da cidade para criar a segunda carta: ");
    scanf("%s", &cid02_nome);
    printf("\nDe que estado \"%s\" é?: ", cid02_nome);
    scanf("%c", &cid02_estado);
    printf("\nInsira o código da carta: ");
    scanf("%s", &cid02_cod);
    printf("\nInsira a área em km² de \"%s\": ", cid02_nome);
    scanf("%f", &cid02_area);
    printf("\nInsira o PIB de \"%s\": ", cid02_nome);
    scanf("%f", &cid02_pib);
    printf("\nInsira o número de pontos turísticos de \"%s\": ", cid02_nome);
    scanf("%i", &cid02_tur);
    printf("\nInsira a população de \"%s\": ", cid02_nome);
    scanf("%lu", &cid02_populacao);
    //Cálculo da densidade populacional e do PIB per capta da cidade 2
    cid02_pib_capta = cid02_populacao / cid02_area;
    cid02_dens_pop = cid02_pib / cid02_populacao;
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Certo, aqui estão as duas cartas que você criou!\n");

    //Mostrar no terminal a primeira carta
    printf("\nCarta 1:\nEstado: %c", cid01_estado);
    printf("\nCódigo: %s", cid01_cod);
    printf("\nNome da Cidade: %s", cid01_nome);
    printf("\nPopulação: %lu", cid01_populacao);
    printf("\nÁrea: %f km²", cid01_area);
    printf("\nPIB: %.2f bilhões de reais", cid01_pib);
    printf("\nPIB per capta: %.2f", cid01_pib_capta);
    printf("\nDensidade populacional: %.2f", cid01_dens_pop);
    printf("\nNúmero de pontos turísticos: %i", cid01_tur);

    //Mostrar no terminal a segunda carta
    printf("\nCarta 2:\nEstado: %c", cid02_estado);
    printf("\nCódigo: %s", cid02_cod);
    printf("\nNome da Cidade: %s", cid02_nome);
    printf("\nPopulação: %lu", cid02_populacao);
    printf("\nÁrea: %f km²", cid02_area);
    printf("\nPIB: %.2f bilhões de reais", cid02_pib);
    printf("\nPIB per capta: %.2f", cid02_pib_capta);
    printf("\nDensidade populacional: %.2f", cid02_dens_pop);
    printf("\nNúmero de pontos turísticos: %i", cid02_tur);

    return 0;
}
