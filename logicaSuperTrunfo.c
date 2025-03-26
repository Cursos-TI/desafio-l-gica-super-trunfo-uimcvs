#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas dos países. 
// Siga os comentários para implementar cada parte do desafio.
typedef enum {POPULUS = 1, AREA, PIB, PTS_TURISTICOS, DENSIDADE} Atributos;

const char* atribNome(Atributos day) 
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
    int atributoSel, atribSelecionado;
    float somaGeral0, somaGeral1;
    
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
    printf("\n");
    for (Atributos elemento = POPULUS; elemento <= DENSIDADE; elemento++) {
        // Imprime o valor numérico de cada elemento (opcional)
        printf("%d. %s\n", elemento, atribNome(elemento));
    
        // Você pode adicionar outras ações aqui para cada elemento da enum
        // Por exemplo, realizar alguma operação específica com base no valor do elemento
        // if (elemento == ELEMENTO3) {
        //     printf("Encontrei o ELEMENTO3!\n");
        // }
    }
    printf("Qual o primeiro ATRIBUTO (1 a 5) a ser comparado: ");
    scanf(" %d", &atributoSel);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\n*** COMPARAÇÃO DE CARTAS DO PRIMEIRO ATRIBUTO ***\n");
    printf("%s X %s - %s\n", pais0, pais1, atribNome(atributoSel));

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Switch de escolha do primeiro atributo a ser comparado
    switch (atributoSel)
    {
        case POPULUS:
            printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, populus0, pais1, populus1);
            if (populus0 > populus1) {
                printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
            } else if (populus0 < populus1) {
                printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case AREA:
            printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, area0, pais1, area1);
            if (area0 > area1) {
                printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
            } else if (area0 < area1) {
                printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case PIB:
            printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, PIB0, pais1, PIB1);
            if (PIB0 > PIB1) {
                printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
            } else if (PIB0 < PIB1) {
                printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case PTS_TURISTICOS:
            printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, pts_turisticos0, pais1, pts_turisticos1);
            if (pts_turisticos0 > pts_turisticos1) {
                printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
            } else if (pts_turisticos0 < pts_turisticos1) {
                printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case DENSIDADE:
            printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, densidade_pop0, pais1, densidade_pop1);
            if (densidade_pop0 < densidade_pop1) {
                printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
            } else if (densidade_pop0 > densidade_pop1) {
                printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
            } else {
                printf("EMPATE!\n");
            }
            break;
        default:
            printf("Opção inválida! Sair.\n");
            break;
    }

    printf("\n");
    for (Atributos elemento = POPULUS; elemento <= DENSIDADE; elemento++) {
        // Imprime o valor numérico de cada elemento (opcional)
        if (elemento != atributoSel) printf("%d. %s\n", elemento, atribNome(elemento));
    
        // Você pode adicionar outras ações aqui para cada elemento da enum
        // Por exemplo, realizar alguma operação específica com base no valor do elemento
        // if (elemento == ELEMENTO3) {
        //     printf("Encontrei o ELEMENTO3!\n");
        // }
    }
    printf("Qual o segundo ATRIBUTO (1 a 5) a ser comparado: ");
    scanf(" %d%*c", &atribSelecionado);
    
    printf("\n*** COMPARAÇÃO DE CARTAS DO SEGUNDO ATRIBUTO ***\n");
    printf("%s X %s - %s\n", pais0, pais1, atribNome(atribSelecionado));

    // Switch de escolha do segundo atributo a ser comparado
    switch (atribSelecionado)
    {
        case POPULUS:
            if(atribSelecionado != atributoSel) {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, populus0, pais1, populus1);
                if (populus0 > populus1) {
                    printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
                } else if (populus0 < populus1) {
                    printf("Carta 2 (%s) é a VENCEDORA\n!", pais1);
                } else {
                    printf("EMPATE!\n");
                }
            } else {printf("Atributo já havia sido selecionado anteriormente!\n");}
            break;
        case AREA:
            if(atribSelecionado != atributoSel) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, area0, pais1, area1);
                if (area0 > area1) {
                    printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
                } else if (area0 < area1) {
                    printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
                } else {
                    printf("EMPATE!\n");
                }
            } else {printf("Atributo já havia sido selecionado anteriormente!\n");}
            break;
        case PIB:
            if(atribSelecionado != atributoSel) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, PIB0, pais1, PIB1);
                if (PIB0 > PIB1) {
                    printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
                } else if (PIB0 < PIB1) {
                    printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
                } else {
                    printf("EMPATE!\n");
                }
            } else {printf("Atributo já havia sido selecionado anteriormente!\n");}
            break;
        case PTS_TURISTICOS:
            if(atribSelecionado != atributoSel) {
                printf("Carta 1 (%s) %d - carta 2 (%s) %d\n", pais0, pts_turisticos0, pais1, pts_turisticos1);
                if (pts_turisticos0 > pts_turisticos1) {
                    printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
                } else if (pts_turisticos0 < pts_turisticos1) {
                    printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
                } else {
                    printf("EMPATE!\n");
                }
            } else {printf("Atributo já havia sido selecionado anteriormente!\n");}
            break;
        case DENSIDADE:
            if(atribSelecionado != atributoSel) {
                printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, densidade_pop0, pais1, densidade_pop1);
                if (densidade_pop0 < densidade_pop1) {
                    printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
                } else if (densidade_pop0 > densidade_pop1) {
                    printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
                } else {
                    printf("EMPATE!\n");
                }
            } else {printf("Atributo já havia sido selecionado anteriormente!\n");}
            break;
        default:
            printf("Opção inválida! Sair.\n");
            break;
    }
    
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    somaGeral0 = atributoSel == POPULUS ? populus0 : (atributoSel == AREA ? area0 : (atributoSel == PIB ? PIB0 : (atributoSel == PTS_TURISTICOS ? pts_turisticos0 : (atributoSel == DENSIDADE ? densidade_pop0 : 0))));
    somaGeral0 = atribSelecionado == POPULUS ? somaGeral0 + populus0 : (atribSelecionado == AREA ? somaGeral0 + area0 : (atribSelecionado == PIB ? somaGeral0 + PIB0 : (atribSelecionado == PTS_TURISTICOS ? somaGeral0 + pts_turisticos0 : (atribSelecionado == DENSIDADE ? somaGeral0 + densidade_pop0 : somaGeral0 + 0))));

    somaGeral1 = atributoSel == POPULUS ? populus1 : (atributoSel == AREA ? area1 : (atributoSel == PIB ? PIB1 : (atributoSel == PTS_TURISTICOS ? pts_turisticos1 : (atributoSel == DENSIDADE ? densidade_pop1 : 0))));
    somaGeral1 = atribSelecionado == POPULUS ? somaGeral1 + populus1 : (atribSelecionado == AREA ? somaGeral1 + area1 : (atribSelecionado == PIB ? somaGeral1 + PIB1 : (atribSelecionado == PTS_TURISTICOS ? somaGeral1 + pts_turisticos1 : (atribSelecionado == DENSIDADE ? somaGeral1 + densidade_pop1 : somaGeral1 + 0))));

    printf("\n*** COMPARAÇÃO DAS SOMAS DOS ATRIBUTOS ***\n");
    if(atribSelecionado != atributoSel) {
        printf("%s X %s - %s e %s\n", pais0, pais1, atribNome(atributoSel), atribNome(atribSelecionado));
        printf("Carta 1 (%s) %.2f - carta 2 (%s) %.2f\n", pais0, somaGeral0, pais1, somaGeral1);
        if (somaGeral0 > somaGeral1) {
            printf("Carta 1 (%s) é a VENCEDORA!\n", pais0);
        } else if (somaGeral0 < somaGeral1) {
            printf("Carta 2 (%s) é a VENCEDORA!\n", pais1);
        } else {
            printf("EMPATE!\n");
        }
    } else {printf("Atributos selecionados são iguais!\n");}

    getchar();
    return 0;
}