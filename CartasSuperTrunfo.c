#include <stdio.h>
int main() {

    //Declaração das variáveis da primeira carta
    char estado1;
    int codigo_da_carta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area_em_km²1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

     //Declaração das variáveis da segunda carta
    char estado2;
    int codigo_da_carta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area_em_km²2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;




    //Entrada de dados da primeira carta
    printf("\n********AQUI VOCÊ DEVE DIGITAR OS DADOS DA PRIMEIRA CARTA********\n");
    printf("Digite a letra do estado ('A-H'): \n");
    scanf(" %c", &estado1);  

    printf("Digite o código da carta ('1-4'): \n");
    scanf("%3s", codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km²1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);


    //Entrada de dados da segunda carta
    printf("\n********AQUI VOCÊ DEVE DIGITAR OS DADOS DA SEGUNDA CARTA********\n");
    printf("Digite a letra do estado ('A-H'): \n");
    scanf(" %c", &estado2);  

    printf("Digite o código da carta ('1-4'): \n");
    scanf("%3s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km²2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);


    
    //Aqui o programa calcula e exibe a densidade e pob percapita
    densidade1 = populacao1 / area_em_km²1;
    pib_per_capita1 = pib1 / populacao1;
    densidade2 = populacao2 / area_em_km²2;
    pib_per_capita2 = pib2 / populacao2;


    //Escolhe um atributo para ser comparado (pode ser alterado)
     char atributo_escolhido[] = "PIB per capita";
     float valor1 = pib_per_capita1;
     float valor2 = pib_per_capita2;
    
     
    //Programa determina o vencedor
    printf("\n******** COMPARAÇÃO DAS CARTAS ********\n");
    printf("Atributo comparado: %s\n", atributo_escolhido);
    printf("%s (Carta 1 - %c%s): %.2f\n", nomeCidade1, estado1, codigo_da_carta1, valor1);
    printf("%s (Carta 2 - %c%s): %.2f\n", nomeCidade2, estado2, codigo_da_carta2, valor2);
    
    //Exibe os dados da comparação
    if (valor1 > valor2) {
        printf("A carta 1 venceu!!!");
    } else if (valor2 > valor1) {
        printf("A carta 2 venceu!!!");
    } else
        printf("Deu EMPATE!!!");

    
    return 0;


}