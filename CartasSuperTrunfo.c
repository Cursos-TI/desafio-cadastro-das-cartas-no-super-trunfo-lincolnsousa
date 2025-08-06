#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   //Carta1
   char estado[2] = "B";
   char codigoDoEstado[5] = "BAHI";
   char nomeDaCidade[20] = "Salvador";
   int populacao = 3000000;
   float area = 170.500;
   float prod = 4705.5;
   int pontosTuristicos = 80;

   //Carta2
   char estado2[2] = "S";
   char codigoDoEstado2[5] = "CATA";
   char nomeDaCidade2[20] = "Palhoça";
   int populacao2 = 100000;
   float area2 = 70.500;
   float prod2 = 705.5;
   int pontosTuristicos2 = 15;


    //Visualizar no terminal
    //Carta1
    printf("Carta1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDoEstado);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("População: %d de Habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", prod);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    
    printf("\n");
    
    //Carta2
    printf("Carta2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDoEstado2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d de Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", prod2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
