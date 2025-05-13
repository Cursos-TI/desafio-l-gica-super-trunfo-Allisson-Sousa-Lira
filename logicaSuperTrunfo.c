#include <stdio.h>

int main(){

    // Declaração de variaveis
    char cidade1[50] = "Cajazeiras", cidade2[50] = "Sao-Paulo";
    char estado1[20] = "PB", estado2[20] = "SP"; 
    //char codigo1[20],codigo2[20]; deixei comentando pois nao esta em uso no projeto atual
    int populacao1, populacao2, pontosTuristico1,pontosTuristico2;
    float area1, area2;
    float pib1, pib2; 
    float pibPerCapita1, densiPopulacional1, pibPerCapita2, densiPopulacional2;
    //float superPoder1, superPoder2; deixei comentando pois nao esta em uso no projeto atual

    //Para agilizar os testes eu deixei as cartas criadas aqui so pela praticidade
    populacao1 = 10000;
    populacao2 = 20000;
    area1 = 1500.25;
    area2 = 1025.15;
    pib1 = 50000;
    pib2 = 80000;
    pontosTuristico1 = 20;
    pontosTuristico2 = 20;
/*
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
*/    
    //Calcular a densiade populacional da carta 1
    densiPopulacional1 = (float)populacao1/area1;

    //Calcular o PIB per Capita da carta 1
    pibPerCapita1 = (float) pib1 / populacao1;

    //Calcular a densiade populacional da carta 2
    densiPopulacional2 = (float) populacao2/area2;

    //Calcular o PIB per Capita da carta 2
    pibPerCapita2 = (float) pib2 / populacao2;
    /*deixei comentando pois nao esta em uso no projeto atual
    //Calcular o SUPER PODER!! da carta 1
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristico1 + (1/densiPopulacional1) + pibPerCapita1; 

    //Calcular o SUPER PODER!! da carta 2
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristico2 + (1/densiPopulacional2) + pibPerCapita2;
    */
    //Variavel para usar no Switch
    int opcao1, soma1, soma2;
    //Switch para escolha da comparação de atributos
    printf("\n**************************************************\n");
    printf("\nEscolha o primeiro atributo para comparacao\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numeros de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("\n**************************************************\n");
    printf("Digite sua primeira escolha:");
    scanf("%d", &opcao1);

    switch (opcao1){
        case 1://Escolhendo a População como primeira escolha
            printf("\nEscolha o segundo atributo para comparacao\n");
            printf("1. Area\n");
            printf("2. PIB\n");
            printf("3. Numeros de Pontos Turisticos\n");
            printf("4. Densidade Populacional\n");
            printf("5. PIB per Capita\n");
            printf("Digite sua segunda escolha: ");
            scanf("%d", &opcao1);
            switch (opcao1){
                case 1://Area como segunda escolha
                    printf("\n**************************************************\n");
                    printf("* Comparando Cartas (Atributo: Populacao e Area) *\n");
                    printf("**************************************************\n");
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("*******************************************\n");
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!");
                    }
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!");
                    }
                    soma1 = populacao1+area1;
                    soma2 = populacao2+area2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!");
                    }  
                    break;
                case 2://pib como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Populacao e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("*******************************************\n");
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!");
                    }
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!");
                    }
                    soma1 = populacao1+pib1;
                    soma2 = populacao2+pib2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!");
                    }
                    
                    break;
                case 3://Pontos Turisticos como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Populacao e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("*******************************************\n");
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!");
                    }
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!");
                    }
                    soma1 = populacao1+pontosTuristico1;
                    soma2 = populacao2+pontosTuristico2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!");
                    }
                    break;
                case 4: //Densidade Populacional como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Populacao e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("*******************************************\n");
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!");
                    }
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!");
                    }
                    soma1 = populacao1+densiPopulacional1;
                    soma2 = populacao2+densiPopulacional2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!");
                    }
                    break;
                case 5://PIB per Capita como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Populacao e PIB per Capita) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("*******************************************\n");
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!");
                    }
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    soma1 = populacao1+pibPerCapita1;
                    soma2 = populacao2+pibPerCapita2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!");
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
        break;
        case 2://Escolhendo Area como primeira escolha
            printf("\nEscolha o segundo atributo para comparacao\n");
            printf("1. Populacao\n");
            printf("2. PIB\n");
            printf("3. Numeros de Pontos Turisticos\n");
            printf("4. Densidade Populacional\n");
            printf("5. PIB per Capita\n");
            printf("Digite sua segunda escolha: ");
            scanf("%d", &opcao1);
            switch (opcao1){
                case 1://Populacao como segunda escolha
                    printf("\n**************************************************\n");
                    printf("* Comparando Cartas (Atributo: Area e Populacao ) *\n");
                    printf("**************************************************\n");
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                   
                    printf("*******************************************\n");
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!\n");
                    }
                    soma1 = area1+populacao1;
                    soma2 = area2+populacao2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }  
                    break;
                case 2://PIB como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Area e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("*******************************************\n");
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    soma1 = area1+pib1;
                    soma2 = area2+pib2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    
                    break;
                case 3://Pontos Turisticos como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Area e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("*******************************************\n");
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    soma1 = area1+pontosTuristico1;
                    soma2 = area2+pontosTuristico2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 4: //Densidade Populacional como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Area e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("*******************************************\n");
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    soma1 = area1+densiPopulacional1;
                    soma2 = area2+densiPopulacional2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 5://PIB per Capita como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Area e PIB per Capita) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("*******************************************\n");
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    soma1 = area1+pibPerCapita1;
                    soma2 = area2+pibPerCapita2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
        break;
        case 3://Escolhendo o PIB como primeira escolha
            printf("\nEscolha o segundo atributo para comparacao\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. Numeros de Pontos Turisticos\n");
            printf("4. Densidade Populacional\n");
            printf("5. PIB per Capita\n");
            printf("Digite sua segunda escolha: ");
            scanf("%d", &opcao1);
            switch (opcao1){
                case 1://Populacao como segunda escolha
                    printf("\n**************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB e Populacao ) *\n");
                    printf("**************************************************\n");
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                
                    printf("*******************************************\n");
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!\n");
                    }
                    soma1 = pib1+populacao1;
                    soma2 = pib2+populacao2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }  
                    break;
                case 2://Area como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB e Area) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("*******************************************\n");
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    soma1 = pib1+area1;
                    soma2 = pib2+area2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    } 
                    break;
                case 3://Pontos Turisticos como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("*******************************************\n");
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    soma1 = pib1+pontosTuristico1;
                    soma2 = pib2+pontosTuristico2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 4: //Densidade Populacional como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("*******************************************\n");
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    soma1 = pib1+densiPopulacional1;
                    soma2 = pib2+densiPopulacional2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 5://PIB per Capita como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB e PIB per Capita) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("*******************************************\n");
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    soma1 = pib1+pibPerCapita1;
                    soma2 = pib2+pibPerCapita2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
        break;
        case 4://Escolhendo o Numeros de Pontos Turisticos como primeira escolha
            printf("\nEscolha o segundo atributo para comparacao\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Densidade Populacional\n");
            printf("5. PIB per Capita\n");
            printf("Digite sua segunda escolha: ");
            scanf("%d", &opcao1);
            switch (opcao1){
                case 1://Populacao como segunda escolha
                    printf("\n**************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e Populacao ) *\n");
                    printf("**************************************************\n");
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                
                    printf("*******************************************\n");
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!\n");
                    }
                    soma1 = pontosTuristico1+populacao1;
                    soma2 = pontosTuristico2+populacao2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }  
                    break;
                case 2://Area como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e Area) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("*******************************************\n");
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    soma1 = pontosTuristico1+area1;
                    soma2 = pontosTuristico2+area2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    } 
                    break;
                case 3://PIB como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("*******************************************\n");
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    soma1 = pontosTuristico1+pib1;
                    soma2 = pontosTuristico2+pib2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 4: //Densidade Populacional como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("*******************************************\n");
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    soma1 = pontosTuristico1+densiPopulacional1;
                    soma2 = pontosTuristico2+densiPopulacional2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!");
                    }
                    break;
                case 5://PIB per Capita como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e PIB per Capita) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("*******************************************\n");
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    soma1 = pontosTuristico1+pibPerCapita1;
                    soma2 = pontosTuristico2+pibPerCapita2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
        break;
        case 5://Escolhendo o Densidade Populacional como primeira escolha
            printf("\nEscolha o segundo atributo para comparacao\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Numero de Pontos Turisticos\n");
            printf("5. PIB per Capita\n");
            printf("Digite sua segunda escolha: ");
            scanf("%d", &opcao1);
            switch (opcao1){
                case 1://Populacao como segunda escolha
                    printf("\n**************************************************\n");
                    printf("* Comparando Cartas (Atributo: Densidade Populacional e Populacao ) *\n");
                    printf("**************************************************\n");
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("*******************************************\n");
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!\n");
                    }
                    soma1 = densiPopulacional1+populacao1;
                    soma2 = densiPopulacional2+populacao2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }  
                    break;
                case 2://Area como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Densidade Populacional e Area) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("*******************************************\n");
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    soma1 = densiPopulacional1+area1;
                    soma2 = densiPopulacional2+area2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    } 
                    break;
                case 3://PIB como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Densidade Populacional e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("*******************************************\n");
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    soma1 = densiPopulacional1+pib1;
                    soma2 = densiPopulacional2+pib2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 4: //Pontos Turisticos como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Densidade Populacional e Pontos Turisticos) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("*******************************************\n");
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    soma1 = densiPopulacional1+pontosTuristico1;
                    soma2 = densiPopulacional2+pontosTuristico2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 5://PIB per Capita como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Densidade Populacional e PIB per Capita) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("*******************************************\n");
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    soma1 = densiPopulacional1+pibPerCapita1;
                    soma2 = densiPopulacional2+pibPerCapita2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
        break;
        case 6://Escolhendo o PIB per Capita como primeira escolha
            printf("\nEscolha o segundo atributo para comparacao\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Numero de Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("Digite sua segunda escolha: ");
            scanf("%d", &opcao1);
            switch (opcao1){
                case 1://Populacao como segunda escolha
                    printf("\n**************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB per Capita e Populacao ) *\n");
                    printf("**************************************************\n");
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("Carta 1 Populacao - %s (%s): %d\n", cidade1,estado1,populacao1);
                    printf("Carta 2 Populacao - %s (%s): %d\n", cidade2,estado2,populacao2);
                    printf("*******************************************\n");
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    if(populacao1>populacao2){
                        printf("Resultado da comparacao do atributo Populacao: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (populacao2>populacao1){
                        printf("Resultado da comparacao do atributo Populacao: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Populacao: Empate!!\n");
                    }
                    soma1 = pibPerCapita1+populacao1;
                    soma2 = pibPerCapita2+populacao2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }  
                    break;
                case 2://Area como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e Area) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("Carta 1 Area - %s (%s): %.2f \n", cidade1,estado1,area1);
                    printf("Carta 2 Area - %s (%s): %.2f\n", cidade2,estado2,area2);
                    printf("*******************************************\n");
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    if(area1>area2){
                        printf("Resultado da comparacao do atributo Area: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (area2>area1){
                        printf("Resultado da comparacao do atributo Area: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Area: Empate!!\n");
                    }
                    soma1 = pibPerCapita1+area1;
                    soma2 = pibPerCapita2+area2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    } 
                    break;
                case 3://PIB como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("Carta 1 PIB- %s (%s): %.2f \n", cidade1,estado1,pib1);
                    printf("Carta 2 PIB- %s (%s): %.2f\n", cidade2,estado2,pib2);
                    printf("*******************************************\n");
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    if(pib1>pib2){
                        printf("Resultado da comparacao do atributo PIB: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pib2>pib1){
                        printf("Resultado da comparacao do atributo PIB: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo PIB: Empate!!\n");
                    }
                    soma1 = pibPerCapita1+pib1;
                    soma2 = pibPerCapita2+pib2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 4: //Pontos Turisticos como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: Pontos Turisticos e PIB) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("Carta 1 Pontos Turisticos- %s (%s):  %d \n", cidade1,estado1,pontosTuristico1);
                    printf("Carta 2 Pontos Turisticos- %s (%s):  %d\n", cidade2,estado2,pontosTuristico2);
                    printf("*******************************************\n");
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    if(pontosTuristico1>pontosTuristico2){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pontosTuristico2>pontosTuristico1){
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%s) ganhou!!!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!!\n");
                    }
                    soma1 = pibPerCapita1+pontosTuristico1;
                    soma2 = pibPerCapita2+pontosTuristico2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                case 5://Densidade Populacional como segunda escolha
                    printf("\n*************************************************\n");
                    printf("* Comparando Cartas (Atributo: PIB per Capita e Densidade Populacional) *\n");
                    printf("*************************************************\n");
                    printf("Carta 1 PIB per Capita- %s (%s): %.2f \n", cidade1,estado1,pibPerCapita1);
                    printf("Carta 2 PIB per Capita- %s (%s): %.2f \n", cidade2,estado2,pibPerCapita2);
                    printf("Carta 1 Densidade Populacional- %s (%s): %.2f \n", cidade1,estado1,densiPopulacional1);
                    printf("Carta 2 Densidade Populacional- %s (%s): %.2f \n", cidade2,estado2,densiPopulacional2);
                    printf("*******************************************\n");
                    if (pibPerCapita1> pibPerCapita2){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else if (pibPerCapita2> pibPerCapita1){
                        printf("Resultado da comparacao do atributo PIB per Capita: Carta 1(%s) ganhou!!!\n", cidade1);
                    }else{
                        printf("Resultado da comparacao do atributo PIB per Capita: Empate!!\n");
                    }
                    if (densiPopulacional1 < densiPopulacional2){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 1(%s)  ganhou!!\n", cidade1);
                    }else  if (densiPopulacional2 < densiPopulacional1){
                        printf("Resultado da comparacao do atributo Densidade Populacional: Carta 2(%s)  ganhou!\n", cidade2);
                    }else{
                        printf("Resultado da comparacao do atributo Densidade Populacional: Empate!!\n");
                    }
                    soma1 = pibPerCapita1+densiPopulacional1;
                    soma2 = pibPerCapita2+densiPopulacional2;
                    if (soma1>soma2){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 1(%s) com a soma dos atributos de %d pontos\n", cidade1, soma1);
                        printf("\n************************************************************************************\n");
                    }else if(soma2>soma1){
                        printf("\n************************************************************************************\n");
                        printf("O ganhador da Rodada e Carta 2(%s) com a soma dos atributos de %d pontos\n", cidade2, soma2);
                        printf("\n************************************************************************************\n");
                    }else{
                        printf("A rodada deu Empate!!\n");
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
                    break;
            }
        break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
}
    /*deixei comentado para caso fosse usar ainda
        if (superPoder1>superPoder2){
            printf("Super poder : Carta 1 ganhou!! \n");
        }else{
            printf("Super poder : Carta 2 ganhou! \n");
        }
    */