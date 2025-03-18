#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    char estado0[3], estado1[3];  // letras que representam os estados
    char cod_carta0[4], cod_carta1[4]; // letras dos estados seguidas de um número de 2 dígitos. Ex. 01  
    char cidade0[20], cidade1[20]; // nomes das cidades (SEM ESPAÇO, somente UNDERLINE, nem acentuação)
    int populus0, populus1; // nºs de habitantes das cidades
    float area0, area1; // áreas das cidades
    float PIB0, PIB1; // PIBs das cidades
    int pts_turisticos0, pts_turisticos1; //nºs de pontos turísticos das cidades
    float densidade_pop0, densidade_pop1; //armazena os cálculos da densidade populacional das cidades
    float pib_per_capita0, pib_per_capita1; //armazena os PIBs per capita das cidades
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Cadastro da CARTA 1
    // Solicitação de entrada da letra do estado da carta 1
    printf("Digite o Estado: ");
    scanf("%s", &estado0);
    
    // Solicitação de entrada do código da carta 1 
    printf("Digite o código da carta 1: ");
    scanf(" %s", &cod_carta0);

    // Solicitação de entrada da cidade da carta 1
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade0);

    // Solicitação de entrada da população da cidade da carta 1
    printf("Digite a população: ");
    scanf(" %u", &populus0);

    // Solicitação de entrada da área da cidade da carta 1
    printf("Digite a area: ");
    scanf(" %f", &area0);

    // Solicitação de entrada do PIB da cidade da carta 1
    printf("Digite o PIB: ");
    scanf(" %f", &PIB0);

    // Solicitação de entrada do nº de pontos turísticos da cidade da carta 1
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pts_turisticos0);

    // Cadastro da CARTA 2
    // Solicitação de entrada da letra do estado da carta 2
    printf("\nDigite o Estado: ");
    scanf(" %s", &estado1);

    // Solicitação de entrada do código da carta 2
    printf("Digite o código da carta 2: ");
    scanf(" %s", &cod_carta1);

    // Solicitação de entrada da cidade da carta 2
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade1);

    // Solicitação de entrada da população da cidade da carta 2
    printf("Digite a população: ");
    scanf(" %u", &populus1);

    // Solicitação de entrada da área da cidade da carta 2
    printf("Digite a area: ");
    scanf(" %f", &area1);

    // Solicitação de entrada do PIB da cidade da carta 2
    printf("Digite o PIB: ");
    scanf(" %f", &PIB1);

    // Solicitação de entrada do nº de pontos turísticos da cidade da carta 1
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d%*c", &pts_turisticos1);

    // Cálculos das densidades populacionais e dos PIBs per capita
    densidade_pop0 = (float) populus0 / area0;
    densidade_pop1 = (float) populus1 / area1;
    pib_per_capita0 = (float) PIB0 / populus0;
    pib_per_capita1 = (float) PIB1 / populus1;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\nCOMPARAÇÃO DE CARTAS (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade0, estado0, densidade_pop0);
    printf("Carta 2 - %s (%s): %.2f\n", cidade1, estado1, densidade_pop1);

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("Resultado: ");
    if(densidade_pop0 < densidade_pop1) printf("Carta 1 (%s) venceu!\n", cidade0);
    else if(densidade_pop0 > densidade_pop1) printf("Carta 2 (%s) venceu!\n", cidade1);
    else printf("EMPATE!\n");
    
    getchar();
    return 0;
}
