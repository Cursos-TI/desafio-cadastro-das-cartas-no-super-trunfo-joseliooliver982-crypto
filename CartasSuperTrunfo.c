#include <stdio.h>

int main() {
    char cidade[50];
    char estado[50];
    int população;
    float area_km2;
    float pib;
    int ponto_turistico;
    char codigo_cartas[3];

    printf("digite o nome da sua cidade: \n");
    scanf("%s", &cidade);
    printf("o nome da cidade e: %s\n", cidade);

    printf("digite o nome do estado: \n");
    scanf("%s", &estado);
    printf("o nome do estado e: %s\n", estado);

    printf("digite numero de população: \n");
    scanf("%d", &população);
    printf("numero de populacao e: %d\n", população);

    printf("digite o valor do km2: \n");
    scanf("%f", &area_km2);
    printf("area em km2: %.2f\n", area_km2);

    printf("digite o valor do pib:(em bilhões de reais): \n");
    scanf("%f", &pib);
    printf("pib; %.2f bilhões de reais: \n", pib);


    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &ponto_turistico);
    printf("numero de pontos turisticos e: %d\n", ponto_turistico);

    printf("digite o codigo das cartas: \n");
    scanf("%s", &codigo_cartas);
    printf("o codigo das cartas e: %s\n", codigo_cartas);

    printf("A cidade %s, localizada no estado %s, possui uma população de %d habitantes, uma área de %.2f km² e um PIB de %.2f bilhões de reais. Com %d pontos turísticos, o código das cartas é %s.\n", 
           cidade, estado, população, area_km2, pib, ponto_turistico, codigo_cartas);





printf("Aqui está a carta dois:\n");

char Cidade[50];
char Estado[50];
char Codigo_carta[4];
int Populacao;
float Area_km2;
float Pib;
int Pontos_turisticos;


printf("Digite sua cidade:\n");
scanf("%s",Cidade);
printf("Sua cidade é: %s\n", Cidade);

printf("Digite seu estado:\n");
scanf("%s", Estado);
printf("seu estado é: %s\n", Estado);

printf("Digite o codigo da carta:\n");
scanf("%s", &Codigo_carta);
printf("O codigo da carta é: %s\n", Codigo_carta);

printf("Populacão atual é:\n");
scanf("%d", &Populacao);
printf("A populacao atual é: %d\n", Populacao);

printf("Digite Área em km²:\n");
scanf("%f", &Area_km2);
printf("Area em km² é: %.2f\n", Area_km2);

 printf("Digite o PIB:\n");
scanf("%f", &Pib);
    printf("O valor do Pib é: %.2f\n", Pib);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos);
    printf("Numeros de pontos turistico é: %d\n", Pontos_turisticos);

  printf("A cidade %s, localizada no estado %s, possui uma população de %d habitantes, uma área de %.2f km² e um PIB de %.2f bilhões de reais. Com %d pontos turísticos, o código das cartas é %s.\n", 
           Cidade, Estado, Populacao, Area_km2, Pib, Pontos_turisticos, Codigo_carta);

    return 0;
}







