#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct Cartas{
    char estado[10];
    char idCarta[10];
    char cidade[50];
    int pop;
    float area;
    float PIB;
    int nTuristicos;
    float densidadePOP;
    float PIBper;
    float super;
};


int main(){

    srand(time(NULL));

    printf("\n");
    printf("---------------------------------\n");
    printf("Cadastro de cartas\n");
    printf("Por favor digite as informacoes requisitadas abaixo\n");
    printf("Carta numero 1:\n");
    printf("---------------------------------\n");

    struct Cartas carta1;

    printf("Nome do estado: \n");
    scanf("%s", &carta1.estado);

    printf("Codigo da carta: \n");
    scanf("%s", &carta1.idCarta);

    printf("Nome da cidade: \n");
    getchar();
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0';

    printf("Populacao total: \n");
    scanf("%d", &carta1.pop);

    printf("Area total: \n");
    scanf("%f", &carta1.area);

    printf("Produto interno bruto: \n");
    scanf("%f", &carta1.PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta1.nTuristicos);

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    carta1.densidadePOP = carta1.pop / carta1.area;
    carta1.PIBper = carta1.PIB / carta1.pop;

    carta1.super = ((carta1.pop + carta1.area + carta1.PIB + carta1.nTuristicos + carta1.PIBper) - carta1.densidadePOP) / 6;

    printf("Construindo a carta com os dados enviados...");

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");
    printf("Agora vamos incrementar a carta numero 2: \n");
    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    struct Cartas carta2;
    
    printf("Nome do estado: \n");
    scanf("%s", &carta2.estado);

    printf("Codigo da carta: \n");
    scanf("%s", &carta2.idCarta);

    printf("Nome da cidade: \n");
    getchar();
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0';

    printf("Populacao total: \n");
    scanf("%d", &carta2.pop);

    printf("Area total: \n");
    scanf("%f", &carta2.area);

    printf("Produto interno bruto: \n");
    scanf("%f", &carta2.PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta2.nTuristicos);

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    carta2.densidadePOP = carta2.pop / carta2.area;
    carta2.PIBper = carta2.PIB / carta2.pop;

    carta2.super = ((carta2.pop + carta2.area + carta2.PIB + carta2.nTuristicos + carta2.PIBper) - carta2.densidadePOP) / 6;

    printf("Construindo a carta com os dados enviados...");

    printf("\n");
    printf("|----------|\n");
    printf("| CARTA N1 |\n");
    printf("|----------|\n");
    printf("|-Estado: %s\n|-Codigo: %s\n|-Cidade: %s\n|-populacao: %d habitantes\n|-Area: %0.2f km2\n|-PIB: %0.2f R$\n|-Numero de pontos turisticos: %d\n|-Densidade populacional: %0.2f hab/km2\n|-PIB per capita: %0.2f R$\n|-Super poder: %0.2f",
        carta1.estado,carta1.idCarta,carta1.cidade,carta1.pop,carta1.area,carta1.PIB,carta1.nTuristicos,carta1.densidadePOP,carta1.PIBper,carta1.super);
    printf("\n");
    printf("|----------|\n");
    printf("| CARTA N2 |\n");
    printf("|----------|\n");
    printf("|-Estado: %s\n|-Codigo: %s\n|-Cidade: %s\n|-populacao: %d habitantes\n|-Area: %0.2f km2\n|-PIB: %0.2f R$\n|-Numero de pontos turisticos: %d\n|-Densidade populacional: %0.2f hab/km2\n|-PIB per capita: %0.2f R$\n|-Super poder: %0.2f",
        carta2.estado,carta2.idCarta,carta2.cidade,carta2.pop,carta2.area,carta2.PIB,carta2.nTuristicos,carta2.densidadePOP,carta2.PIBper,carta2.super);
    printf("\n");
    printf("---------------------------------\n");
    printf("\n");
    printf("Comparacao das cartas cadastradas: carta numero 1 e carta numero 2...\n");
    printf("\n");

    int num = rand() % 7;

    switch(num){

        case 0:
            printf("Comparacao de cartas (Atributo: População)\n");
            printf("carta 1 - %s (%s): %d habitantes\n", carta1.cidade,carta1.estado,carta1.pop);
            printf("carta 2 - %s (%s): %d habitantes\n", carta2.cidade,carta2.estado,carta2.pop);
                if(carta1.pop > carta2.pop){
                    printf("Resultado: carta 1 (%s) venceu!", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!", carta2.cidade);
            }
            break;
        case 1:
            printf("Comparacao de cartas (Atributo: Area)\n");
            printf("carta 1 - %s (%s): %0.2f km2\n", carta1.cidade,carta1.estado,carta1.area);
            printf("carta 2 - %s (%s): %0.2f km2\n", carta2.cidade,carta2.estado,carta2.area);
                if(carta1.area > carta2.area){
                    printf("Resultado: carta 1 (%s) venceu!\n------------------------------------", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!\n------------------------------------", carta2.cidade);
            }
            break;
        case 2:
            printf("Comparacao de cartas (Atributo: PIB)\n");
            printf("carta 1 - %s (%s): %0.2f R$\n", carta1.cidade,carta1.estado,carta1.PIB);
            printf("carta 2 - %s (%s): %0.2f R$\n", carta2.cidade,carta2.estado,carta2.PIB);
                if(carta1.PIB > carta2.PIB){
                    printf("Resultado: carta 1 (%s) venceu!\n------------------------------------", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!\n------------------------------------", carta2.cidade);
            }
            break;
        case 3:
            printf("Comparacao de cartas (Atributo: Numero de pontos turisticos)\n");
            printf("carta 1 - %s (%s): %d Pontos turisticos\n", carta1.cidade,carta1.estado,carta1.nTuristicos);
            printf("carta 2 - %s (%s): %d Pontos turisticos\n", carta2.cidade,carta2.estado,carta2.nTuristicos);
                if(carta1.nTuristicos > carta2.nTuristicos){
                    printf("Resultado: carta 1 (%s) venceu!\n------------------------------------", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!\n------------------------------------", carta2.cidade);
            }
            break;
        case 4:
            printf("Comparacao de cartas (Atributo: Densidade populacional)\n");
            printf("carta 1 - %s (%s): %0.2f km2\n", carta1.cidade,carta1.estado,carta1.densidadePOP);
            printf("carta 2 - %s (%s): %0.2f km2\n", carta2.cidade,carta2.estado,carta2.densidadePOP);
                if(carta1.densidadePOP < carta2.densidadePOP){
                    printf("Resultado: carta 1 (%s) venceu!\n------------------------------------", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!\n------------------------------------", carta2.cidade);
            }
            break;
        case 5:
            printf("Comparacao de cartas (Atributo: PIB percapita)\n");
            printf("carta 1 - %s (%s): %0.2f R$\n", carta1.cidade,carta1.estado,carta1.PIBper);
            printf("carta 2 - %s (%s): %0.2f R$\n", carta2.cidade,carta2.estado,carta2.PIBper);
                if(carta1.PIBper > carta2.PIBper){
                    printf("Resultado: carta 1 (%s) venceu!\n------------------------------------", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!\n------------------------------------", carta2.cidade);
            }
            break;
        case 6:
            printf("Comparacao de cartas (Atributo: Super poder)\n");
            printf("carta 1 - %s (%s): %0.2f Super poder\n", carta1.cidade,carta1.estado,carta1.super);
            printf("carta 2 - %s (%s): %0.2f Super poder\n", carta2.cidade,carta2.estado,carta2.super);
                if(carta1.super > carta2.super){
                    printf("Resultado: carta 1 (%s) venceu!\n------------------------------------", carta1.cidade);
                }else{
                    printf("Resultado: carta 2 (%s) venceu!\n------------------------------------", carta2.cidade);
            }
            break;
    }   


    return 0;
};