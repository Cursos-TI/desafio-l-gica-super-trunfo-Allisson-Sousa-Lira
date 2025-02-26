/* O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte. Cada carta representa um objeto com várias propriedades.
Nesse desafio, o tema do jogo será Países, e as cartas serão divididas por estados, com cada estado tendo quatro cartas que representam diferentes cidades.

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4.
A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

Cada carta de cidade apresentará as seguintes informações:

População : número de habitantes da cidade.
Área : área total da cidade em quilômetros quadrados (km²).
PIB : produto interno bruto da cidade, representando a soma de todos os bens e serviços produzidos no município.
Número de pontos turísticos : quantidade de pontos turísticos famosos na cidade.*/

#include <stdio.h>

int main(){

    // Declaração de variaveis
    char estado1[20],estado2[20]; 
    char codigo1[20],codigo2[20]; 
    char cidade1[50],cidade2[50];  
    int populacao1, populacao2, pontosTuristico1,pontosTuristico2;
    float area1, area2;
    float pib1, pib2; 
    float pibPerCapita1, densiPopulacional1, pibPerCapita2, densiPopulacional2;
    float superPoder1, superPoder2;

    //Cadastrando a primeira carta!!
    printf("\n*************************\n");
    printf("* Cadastrando a Carta 1 *\n");
    printf("*************************\n");
    /*por algum motivo o programa nao quer que isso seja char(%c) entao deixei do jeito que funciona kkkk
    O padrao para os estados sao as letras do alfabeto, exemplos : A , B , C ....*/
    printf("Digite o nome do estado: "); 
    scanf("%s", estado1);
    // O padrao do programa é a letra ja indicada acima + um numero
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    // Aqui tem toda liberdade, porem nomes de cidades composta deve usar os "-" entre as palavras. Ex: Sao-Paulo, Rio-de-Janeiro.
    printf("Digite o nome da cidade desse estado: ");
    scanf("%s", cidade1);
    //Qualquer numero inteiro positivo e que seja maior que a area , para nao dar problema nos calculos
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d",&populacao1);
    //Qualquer valor sendo positivo
    printf("Digite o numero da area dessa cidade: ");
    scanf("%f",&area1);
    //Recomendo sempre deixar esse valor maior que o da população para nao ficar zerado no PIB per capita
    printf("Digite o pib dessa cidade: ");
    scanf("%f",&pib1);
    //Qualquer valor sendo positivo
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico1);

    //Cadastrando a segunda carta!!
    printf("\n*************************\n");
    printf("* Cadastrando a Carta 2 *\n");
    printf("*************************\n");

    /*por algum motivo o programa nao quer que isso seja char(%c) entao deixei do jeito que funciona kkkk
    O padrao para os estados sao as letras do alfabeto, exemplos : A , B , C ....*/
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    // O padrao do programa é a letra ja indicada acima + um numero 
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    // Aqui tem toda liberdade, porem nomes de cidades composta deve usar os "-" entre as palavras. Ex: Sao-Paulo, Rio-de-Janeiro.
    printf("Digite o nome da cidade desse estado: ");
    scanf("%s", cidade2);
    //Qualquer numero ate o limite dos numeros inteiros
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d",&populacao2);
    //Qualquer valor sendo positivo
    printf("Digite o numero da area dessa cidade: ");
    scanf("%f",&area2);
    //Recomendo sempre deixar esse valor maior que o da população para nao ficar zerado no PIB per capita
    printf("Digite o numero do pib em reais : ");
    scanf("%f",&pib2);
    //Qualquer numero inteiro positivo
    printf("Digite o numero de pontos dessa cidade: ");
    scanf("%d",&pontosTuristico2);
    
    //Calcular a densiade populacional da carta 1

    densiPopulacional1 = (float)populacao1/area1;

    //Calcular o PIB per Capita da carta 1

    pibPerCapita1 = (float) pib1 / populacao1;

    //Calcular a densiade populacional da carta 2

    densiPopulacional2 = (float) populacao2/area2;

    //Calcular o PIB per Capita da carta 2
   
    pibPerCapita2 = (float) pib2 / populacao2;

    //Calcular o SUPER PODER!! da carta 1

    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristico1 + (1/densiPopulacional1) + pibPerCapita1; 

    //Calcular o SUPER PODER!! da carta 2

    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristico2 + (1/densiPopulacional2) + pibPerCapita2;
    //Hora de Printar as cartas començada da primeira

    /*Dexei tudo comentado para caso eu precise usar no futuro
    printf("Estado : %s \n", estado1);
    printf("Codigo : %s\n", codigo1);
    printf("Cidade : %s\n", cidade1);*/
    
    printf("\n*******************************************\n");
    printf("* Comparando Cartas (Atributo: Populacao) *\n");
    printf("*******************************************\n");
    printf("Carta 1 - %s (%s) : %d\n", cidade1,estado1,populacao1);
    /*Dexei tudo comentado para caso eu precise usar no futuro
    printf("Area : %.2f km2\n", area1);
    printf("PIB : %.2f milhoes de reais\n", pib1);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico1);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder Carta 1: %.2f\n", superPoder1);*/

    //Prints da Segunda Carta
    /*Dexei tudo comentado para caso eu precise usar no futuro
    printf("Estado : %s\n", estado2);
    printf("Codigo : %s\n", codigo2);
    printf("Cidade : %s\n", cidade2);*/

    printf("Carta 2 - %s (%s): %d\n", cidade2,estado2,populacao2);

    /* Dexei tudo comentado para caso eu precise usar no futuro
    printf("Area : %.2f quilometros quadrados\n", area2);
    printf("PIB : %.2f milhoes de reais\n", pib2);
    printf("Numeros de Pontos Turisticos : %d\n", pontosTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", densiPopulacional2);
    printf("PIB per Capita: %.2f milhoes reais\n", pibPerCapita2);
    printf("Super Poder Carta 2: %.2f\n", superPoder2);*/

    //Prints das cartas que ganharem
    
    

    //todos os IF e  Else para comparar os valores das cartas

    if(populacao1>populacao2){
        printf("Resultado: Carta 1(%s) ganhou!!!\n", cidade1);
    }else{
        printf("Resultado: Carta 2(%s) ganhou!!!\n", cidade2);
    }
    
    /* Eu tava fazendo antes isso ai fiquei com dó de apagar , por isso vou deixar comentado por enquanto
    if (area1 > area2){
        printf("Area : Carta 1 ganhou!! \n");
    }else{
        printf("Area : Carta 2 ganhou! \n");
    }
    if (pib1 > pib2){
        printf("PIB : Carta 1 ganhou!! \n");
    }else{
        printf("PIB : Carta 2 ganhou! \n");
    }
    if (pontosTuristico1> pontosTuristico2){
        printf("Numeros de Pontos Turisticos : Carta 1 ganhou!! \n");
    }else{
        printf("Numeros de Pontos Turisticos : Carta 2 ganhou! \n");
    }
    if (densiPopulacional1 < densiPopulacional2){
        printf("Densidade Populacional : Carta 1 ganhou!! \n");
    }else{
        printf("Densidade Populacional : Carta 2 ganhou! \n");
    }
    if (pibPerCapita1> pibPerCapita2){
        printf("PIB per Capita : Carta 1 ganhou!! \n");
    }else{
        printf("PIB per Capita : Carta 2 ganhou! \n");
    }
    if (superPoder1>superPoder2){
        printf("Super poder : Carta 1 ganhou!! \n");
    }else{
        printf("Super poder : Carta 2 ganhou! \n");
    }*/

}
