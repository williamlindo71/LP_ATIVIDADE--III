#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
setlocale(LC_ALL, "portuguese");

char nome [1][500];
int idade [1];
float altura[1];
float peso [1];
float maiorAltura = 0;
float menorAltura = 9999;
float maiorPeso = 0;
float menorPeso = 99999;
int maiorIdade = 0;
int menorIdade = 999;
int i;

for (i = 0; i < 1; i++){

printf("Digite o nome do usuario:");
scanf("%s", &nome);
printf("Digite a idade do usuario:");
scanf("%i", &idade);
printf("Digite a altura do usuario:");
scanf("%f", &altura);
printf("Digite o peso do usuario:");
scanf("%f", &peso);

fflush(stdin);
maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;
menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;
maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;
maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
}



printf("Maior altura: %.2f \n", maiorAltura);
printf("Menor altura: %.2f \n", menorAltura);
printf("Maior idade: %d \n", maiorIdade);
printf("Menor idade: %d \n", menorIdade);
printf("Maior peso: %.2f \n", maiorPeso);
printf("Menor peso: %.2f \n", menorPeso);





}