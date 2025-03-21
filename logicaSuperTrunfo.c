#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas dos países. 
// Siga os comentários para implementar cada parte do desafio.
enum  Atributos {POPULUS = 1, AREA, PIB, PTS_TURISTICOS, DENSIDADE};

const char* atribNome(enum Atributos day) 
{
   switch (day) 
   {
        case POPULUS: return "População";
        case AREA: return "Área";
        case PIB: return "PIB";
        case PTS_TURISTICOS: return "Pontos Turísticos";
        case DENSIDADE: return "Densidade Populacional";
   }
}

int main() {
    // Definição das variáveis para armazenar as propriedades dos países
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados dos países
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // char estado0[3], estado1[3];  // letras que representam os estados
    // char cod_carta0[4], cod_carta1[4]; // letras dos estados seguidas de um número de 2 dígitos. Ex. 01  
    char pais0[20], pais1[20]; // nomes dos países (SEM ESPAÇO, somente UNDERLINE, nem acentuação)
    int populus0, populus1; // nºs de habitantes dos países
    float area0, area1; // áreas dos países
    float PIB0, PIB1; // PIBs dos países
    int pts_turisticos0, pts_turisticos1; //nºs de pontos turísticos dos países
    float densidade_pop0, densidade_pop1; //armazena os cálculos da densidade populacional dos países
    int atributoSel;
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Cadastro da CARTA 1
    // Solicitação de entrada do país da carta 1
    printf("Digite o nome do país: ");
    scanf(" %s", &pais0);

    // Solicitação de entrada da população do país da carta 1
    printf("Digite a população: ");
    scanf(" %u", &populus0);

    // Solicitação de entrada da área do país da carta 1
    printf("Digite a area: ");
    scanf(" %f", &area0);

    // Solicitação de entrada do PIB do país da carta 1
    printf("Digite o PIB: ");
    scanf(" %f", &PIB0);

    // Solicitação de entrada do nº de pontos turísticos do país da carta 1
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pts_turisticos0);
    printf("\n");

    // Cadastro da CARTA 2
    // Solicitação de entrada do país da carta 2
     printf("Digite o nome do país: ");
     scanf(" %s", &pais1);

    // Solicitação de entrada da população do país da carta 2
    printf("Digite a população: ");
    scanf(" %u", &populus1);

    // Solicitação de entrada da área do país da carta 2
    printf("Digite a area: ");
    scanf(" %f", &area1);

    // Solicitação de entrada do PIB do país da carta 2
    printf("Digite o PIB: ");
    scanf(" %f", &PIB1);

    // Solicitação de entrada do nº de pontos turísticos do país da carta 1
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pts_turisticos1);

    // Cálculos das densidades populacionais
    densidade_pop0 = (float) populus0 / area0;
    densidade_pop1 = (float) populus1 / area1;

    // Seleção do ATRIBUTO a ser comparado
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Qual o ATRIBUTO (1 a 5) a ser comparado: ");
    scanf(" %d%*c", &atributoSel);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\n*** COMPARAÇÃO DE CARTAS ***\n");
    printf("%s X %s - %s\n", pais0, pais1, atribNome(atributoSel));

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Switch de escolha do atributo a ser comparado
    switch (atributoSel)
    {
        case POPULUS:
            if (populus0 > populus1) {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, populus0, pais1, populus1);
                printf("Carta 1 (%s) é a VENCEDORA!", pais0);
            } else if (populus0 < populus1) {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, populus0, pais1, populus1);
                printf("Carta 2 (%s) é a VENCEDORA!", pais1);
            } else {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, populus0, pais1, populus1);
                printf("EMPATE!");
            }
            break;
        case AREA:
            if (area0 > area1) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, area0, pais1, area1);
                printf("Carta 1 (%s) é a VENCEDORA!", pais0);
            } else if (area0 < area1) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, area0, pais1, area1);
                printf("Carta 2 (%s) é a VENCEDORA!", pais1);
            } else {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, area0, pais1, area1);
                printf("EMPATE!");
            }
            break;
        case PIB:
            if (PIB0 > PIB1) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, PIB0, pais1, PIB1);
                printf("Carta 1 (%s) é a VENCEDORA!", pais0);
            } else if (PIB0 < PIB1) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, PIB0, pais1, PIB1);
                printf("Carta 2 (%s) é a VENCEDORA!", pais1);
            } else {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, PIB0, pais1, PIB1);
                printf("EMPATE!");
            }
            break;
        case PTS_TURISTICOS:
            if (pts_turisticos0 > pts_turisticos1) {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, pts_turisticos0, pais1, pts_turisticos1);
                printf("Carta 1 (%s) é a VENCEDORA!", pais0);
            } else if (pts_turisticos0 < pts_turisticos1) {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, pts_turisticos0, pais1, pts_turisticos1);
                printf("Carta 2 (%s) é a VENCEDORA!", pais1);
            } else {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, pts_turisticos0, pais1, pts_turisticos1);
                printf("EMPATE!");
            }
            break;
        case DENSIDADE:
            if (densidade_pop0 < densidade_pop1) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, densidade_pop0, pais1, densidade_pop1);
                printf("Carta 1 (%s) é a VENCEDORA!", pais0);
            } else if (densidade_pop0 > densidade_pop1) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, densidade_pop0, pais1, densidade_pop1);
                printf("Carta 2 (%s) é a VENCEDORA!", pais1);
            } else {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, densidade_pop0, pais1, densidade_pop1);
                printf("EMPATE!");
            }
            break;
        default:
            printf("Opção inválida! Sair.");
            break;
    }
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    getchar();
    return 0;
}