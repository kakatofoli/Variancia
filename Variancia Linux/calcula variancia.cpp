#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i;
int n, aux;
int* numero;
float total;
int media, media2;
int* parent;
int* parent2;
int somatoria;
int* frequencia;
int esc;

int main(){


printf("Digite o numeros de valores a serem calculados.....: ");
scanf("%d", & n);

numero=(int *) malloc(n * sizeof (int));
parent = (int *) malloc(n * sizeof (int));
parent2 = (int *) malloc(n * sizeof (int));
frequencia = (int *) malloc(n * sizeof (int));


for(i = 0; i < n; i++){

printf("Digite o %d numero....: ", i+1);
scanf("%d",& numero[i]);

printf("Digite a sua frequencia.....: ");
scanf("%d", & frequencia[i]);

}

for(i = 0; i < n; i++){

media = (numero[i] + media);
media2 = (media / n);

}

for(i = 0; i < n; i++){

parent[i] = (numero[i] - media2);

}

for(i = 0; i < n; i++){

parent2[i] = ((parent[i]  ^ 2) * frequencia[i]);

}

for(i = 0; i < n; i++){

somatoria = (parent2[i] + somatoria);

}

printf("\n\n");
printf("Os dados são populacional = 1 // amostra = 2...: ");
scanf("%d", & esc);

if(esc == 1){

total = sqrt(somatoria / n);

printf("\n");
printf("A variancia populaciona é....: %.2f", total);


}
else {

total = sqrt(somatoria / (n - 1));

printf("\n");
printf("A variancia amostral é....: %.2f", total);



}



}
