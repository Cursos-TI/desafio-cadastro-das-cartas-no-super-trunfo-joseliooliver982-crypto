#include <stdio.h>

int main(){

int Estado[50];
int Cidade[50];
char Condigo_carta[3];
int Populacão;
float Area_km²;
float Pib;
int Pontos_turisticos;

printf("Digite o nome do estado:\n");
scanf("%s", &Estado);
printf("nome do Estado é: %s\n", Estado);

printf("Digite o nome da cidade:\n");
scanf("%s", &Cidade);
printf("O nome da ciade é: %s\n", Cidade);

printf("Código da carta:\n");
scanf("%s", &Condigo_carta);
printf("O condigo da carta é: %s\n", Condigo_carta);

printf("Numeros de habitantes:\n");
scan("%d", &Populacão);
printf("Habitantes total é: %d\n", Populacão);

printf("Quantos quilomentros km²?\n");
scanf("%2.f", &Area_km²);
printf("Quilomentros km² %2.f\n", Area_km²);

printf("Digite o Pib\n");
scanf("%2.f", &Pib);
printf("Numero do Pib é: %.2f\n", Pib);

printf("Quantos pontos turisticos?\n");
scanf("%d", &Pontos_turisticos);
printf("Totais de pontos são: %d\n", Pontos_turisticos);


return 0;


}







