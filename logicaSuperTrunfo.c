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
/*
    //Para agilizar os testes eu deixei as cartas criadas aqui so pela praticidade
    populacao1 = 651753;
    populacao2 = 459753;
    area1 = 1500.25;
    area2 = 1025.15;
    pib1 = 989456;
    pib2 = 789456;
    pontosTuristico1 = 50;
    pontosTuristico2 = 60;
*/
    //Cadastrando a primeira carta!!
    printf("\n*************************\n");
    printf("* Cadastrando a Carta 1 *\n");
    printf("*************************\n");
   
    //O padrao para os estados sao as letras do alfabeto, exemplos : A , B , C ....
    printf("Digite a sigla do estado: "); 
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
 
    //Variavel para usar no Switch
    int opcao;
    //Switch para escolha da comparação de atributos
    printf("\n Escolha o atributo para comparacao\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numeros de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");

    printf("Digite sua opção:");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\n*******************************************\n");
            printf("* Comparando Cartas (Atributo: Populacao) *\n");
            printf("*******************************************\n");
            printf("Carta 1 - %s (%s): %d\n", cidade1,estado1,populacao1);
            printf("Carta 2 - %s (%s): %d\n", cidade2,estado2,populacao2);
            if(populacao1>populacao2){
                printf("Resultado: Carta 1(%s) ganhou!!!\n", cidade1);
            }else if (populacao2>populacao1){
                printf("Resultado: Carta 2(%s) ganhou!!!\n", cidade2);
            }
            else{
                printf("Empate!!");
            }

            break;

        case 2:
            printf("\n*******************************************\n");
            printf("* Comparando Cartas (Atributo: Area) *\n");
            printf("*******************************************\n");
            printf("Carta 1 - %s (%s): %.2f \n", cidade1,estado1,area1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2,estado2,area2);
            if(area1>area2){
                printf("Resultado: Carta 1(%s) ganhou!!!\n", cidade1);
            }else if (area2>area1){
                printf("Resultado: Carta 2(%s) ganhou!!!\n", cidade2);
            }
            else{
                printf("Empate!!");
            }
            break;

        case 3:
            printf("\n*******************************************\n");
            printf("* Comparando Cartas (Atributo: PIB) *\n");
            printf("*******************************************\n");
            printf("Carta 1 - %s (%s): %.2f \n", cidade1,estado1,pib1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2,estado2,pib2);
            if(pib1>pib2){
                printf("Resultado: Carta 1(%s) ganhou!!!\n", cidade1);
            }else if (pib2>pib1){
                printf("Resultado: Carta 2(%s) ganhou!!!\n", cidade2);
            }
            else{
                printf("Empate!!");
            }
            break;   

        case 4:
            printf("\n*******************************************\n");
            printf("* Comparando Cartas (Atributo: Numeros de Pontos Turisticos) *\n");
            printf("*******************************************\n");
            printf("Carta 1 - %s (%s): %d \n", cidade1,estado1,pontosTuristico1);
            printf("Carta 2 - %s (%s): %d\n", cidade2,estado2,pontosTuristico2);
            if(pontosTuristico1>pontosTuristico2){
                printf("Resultado: Carta 1(%s) ganhou!!!\n", cidade1);
            }else if (pontosTuristico2>pontosTuristico1){
                printf("Resultado: Carta 2(%s) ganhou!!!\n", cidade2);
            }
            else{
                printf("Empate!!");
            }
            break;

        case 5:
            printf("\n*******************************************\n");
            printf("* Comparando Cartas (Atributo: Densidade Populacional) *\n");
            printf("*******************************************\n");
            printf("Carta 1 - %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
            printf("Carta 2 - %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
            if (densiPopulacional1 < densiPopulacional2){
                printf("Densidade Populacional : Carta 1 ganhou!! \n");
            }else  if (densiPopulacional2 < densiPopulacional1){
                printf("Densidade Populacional : Carta 2 ganhou! \n");
            }
            else{
                printf("Empate!!");
            }
            break;

        case 6:
            printf("\n*******************************************\n");
            printf("* Comparando Cartas (Atributo: PIB per Capita) *\n");
            printf("*******************************************\n");
            printf("Carta 1 - %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2,estado2,pibPerCapita2);
            if (pibPerCapita1> pibPerCapita2){
                printf("PIB per Capita : Carta 1 ganhou!! \n");
            }else if (pibPerCapita2> pibPerCapita1){
                printf("PIB per Capita : Carta 2 ganhou! \n");
            }
            else{
                printf("Empate!!");
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }
}
   
    //Prints das cartas que ganharem
    //todos os IF e  Else para comparar os valores das cartas
    /*
        if (superPoder1>superPoder2){
            printf("Super poder : Carta 1 ganhou!! \n");
        }else{
            printf("Super poder : Carta 2 ganhou! \n");
        }
    */
