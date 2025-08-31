#include <stdio.h>
#include <string.h> //para uso fgtes

int main() {
    
    char letraEstado1, letraEstado2;
    char codigoCarta1[3], codigoCarta2[3], nomeCidade1[50], nomeCidade2[50];    
    int numeroPontosTuristicos1, numeroPontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, denspopulacao1, denspopulacao2, pibpercapta1, pibpercapta2;
    double superPoder1, superPoder2;
    int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoNumeroPontosTuristicos, resultadoDensPopulacao, resultadoPIBperCapta, resultadoSuperPoder;

    printf(" ===== Desafio Super Trunfo - Países ===== \n\n");
    printf(" ===== Insira os dados para carta 1 ===== \n\n");
    
    printf("Informe a letra que representa o estado ['A' até 'H']: ");
    scanf(" %c", &letraEstado1);
    
    printf("Informe o código da carta ['01' até '04']: ");
    scanf("%s", codigoCarta1);
        
    getchar(); // Limpar o '\n' que sobrou do scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); //fgets - Ler uma string com espaços
    nomeCidade1[strcspn(nomeCidade1,"\n")]=0; //Remove o '\n' do final da string, o que evita quebras de linha indesejadas na saída.
        
    printf("Informe o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (bilhões de reais): ");
    scanf("%f", &pib1);
    pib1 = pib1 * 1000000000.0; // converte bilhões para reais

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos1);
    
    
    printf(" \n===== Insira os dados para carta 2 ===== \n\n");
    
    printf("Informe a letra que representa o estado ['A' até 'H']: ");
    scanf(" %c", &letraEstado2);
    
    printf("Informe o código da carta ['01' até '04']: ");
    scanf("%s", codigoCarta2);
        
    getchar(); // Limpar o '\n' que sobrou do scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); //fgets - Ler uma string com espaços
    nomeCidade2[strcspn(nomeCidade2,"\n")]=0; //Remove o '\n' do final da string, o que evita quebras de linha indesejadas na saída.
        
    printf("Informe o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (bilhões de reais): ");
    scanf("%f", &pib2);
    pib2 = pib2 * 1000000000.0; // converte bilhões para reais

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos2);
    
    denspopulacao1 = populacao1 / area1; //número de habitantes por quilômetro quadrado.
    denspopulacao2 = populacao2 / area2; //número de habitantes por quilômetro quadrado.

    pibpercapta1 = pib1 / populacao1; //indica a riqueza média por pessoa na cidade.
    pibpercapta2 = pib2 / populacao2; //indica a riqueza média por pessoa na cidade

    superPoder1 = (double) populacao1 + area1 + pib1 + (double) numeroPontosTuristicos1 + pibpercapta1 + (1.0/denspopulacao1);
    superPoder2 = (double) populacao2 + area2 + pib2 + (double) numeroPontosTuristicos2 + pibpercapta2 + (1.0/denspopulacao2);

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoNumeroPontosTuristicos = numeroPontosTuristicos1 > numeroPontosTuristicos2;
    resultadoDensPopulacao = denspopulacao1 < denspopulacao2;
    resultadoPIBperCapta = pibpercapta1 > pibpercapta2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    //Exibir as informações digitadas pelo usuário da carta 1
    printf("\n ===== Dados carta 1 ===== \n\n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %c%s\n", letraEstado1, codigoCarta1); //Contatenando os atributos 'letraEstado' e 'codigoCarta'
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos túristicos: %d\n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", denspopulacao1);
    printf("PIB per Capta: R$ %.2f\n", pibpercapta1);
    //printf("Valor do Super poder: %f\n", superPoder1);
    
   
    //Exibir as informações digitadas pelo usuário da carta 2
    printf("\n ===== Dados carta 2 ===== \n\n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %c%s\n", letraEstado2, codigoCarta2); //Contatenando os atributos 'letraEstado' e 'codigoCarta'
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos túristicos: %d\n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", denspopulacao2);
    printf("PIB per Capta: R$ %.2f\n", pibpercapta2);
    //printf("Valor do Super poder: %f\n", superPoder2);


    //Comparando as cartas dos usuários
    printf("\n ===== Comparação de Cartas ===== \n\n");
    printf("População da carta 1 é maior do que População da carta 2: %d\n", resultadoPopulacao);
    printf("Area da carta 1 é maior do que Area da carta 2: %d\n", resultadoArea);
    printf("PIB da carta 1 é maior do que PIB da carta 2: %d\n", resultadoPIB);
    printf("Números de Pontos Turísticos da carta 1 é maior do que Números de Pontos Turísticos da carta 2: %d\n", resultadoNumeroPontosTuristicos);
    printf("Densidade Populacional da carta 1 é menor do que Densidade Populacional da carta 2: %d\n", resultadoDensPopulacao);
    printf("PIB per Capta da carta 1 é maior do que PIB per Capta da carta 2: %d\n", resultadoPIBperCapta);
    printf("Super Poder da carta 1 é maior do que Super Poder da carta 2: %d\n\n", resultadoSuperPoder);

    //Comparando usando 'if else'
    printf ("\n ===== Comparando número de habitantes utilizando 'if else'  ===== \n\n");
    if (populacao1 > populacao2) {     
    printf ("População 1 venceu!\n");
    }
    else if (populacao1 < populacao2) {
    printf ("População 2 venceu\n");
    }
    else {
    printf ("População 1 é igual à População 2\n");
    }
    printf ("Número de habitantes da população 1: %lu\n", populacao1);
    printf ("Número de habitantes da população 2: %lu\n", populacao2);

    //Comparando usando 'if else'
    printf ("\n ===== Comparando PIB das cidades utilizando 'if else'  ===== \n\n");
    if (pib1 > pib2) {     
    printf ("PIB da cidade 1 Venceu!\n");
    }
    else if (pib1 < pib2) {
    printf ("PIB da cidade 2 venceu!\n");
    }
    else {
    printf ("PIB da cidade 1 é igual à PIB da cidade 2\n");
    }
    printf ("PIB da cidade 1: %f\n", pib1);
    printf ("PIB da cidade 2: %f\n", pib2);

    //Comparando usando 'if else'
    printf ("\n ===== Comparando área da cidade utilizando 'if else'  ===== \n\n");
    if (area1 > area2) {     
    printf ("Área da cidade 1 Venceu!\n");
    }
    else if (area1 < area2) {
    printf ("Área da cidade 2 venceu!\n");
    }
    else {
    printf ("Área da cidade 1 é igual à Área da cidade 2\n");
    }
    printf ("Área da cidade 1: %f\n", area1);
    printf ("Área da cidade 2: %f\n", area2);

    //Comparando usando 'if else'
    printf ("\n ===== Comparando PIB per Capta da cidade utilizando 'if else'  ===== \n\n");
    if (pibpercapta1 > pibpercapta2) {     
    printf ("PIB per Capta da cidade 1 venceu!\n");
    }
    else if (pibpercapta1 < pibpercapta2) {
    printf ("PIB per Capta da cidade 2 venceu!\n");
    }
    else {
    printf ("PIB Capta da cidade 1 é igual à PIB per Capta da cidade 2\n");
    }
    printf ("PIB per Capta da cidade 1: %f\n", pibpercapta1);
    printf ("PIB per Capta da cidade 2: %f\n", pibpercapta2);

    //Comparando usando 'if else'
    printf ("\n ===== Comparando Densidade Populacional da cidade utilizando 'if else'  ===== \n\n");
    if (denspopulacao1 < denspopulacao2) {     
    printf ("Densidade Populacional da cidade 1 venceu!\n");
    }
    else if (denspopulacao1 > denspopulacao2) {
    printf ("Densidade Populacional da cidade 2 venceu!\n");
    }
    else {
    printf ("Densidade Populacional da cidade 1 é igual à Densidade Populacional da cidade 2\n");
    }
    printf ("Densidade Populacional da cidade 1: %f\n", denspopulacao1);
    printf ("Densidade Populacional da cidade 2: %f\n", denspopulacao2);


    return 0;
}
