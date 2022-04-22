//A prefeitura de Olinda fez uma pesquisa na UniAESO com 1000 alunos, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
//a) média do salário da população;
//b) média do número de filhos;
//c) maior e menor salário;
//d) percentual de habitantes com mais de 2 filhos.//*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
float salario[3], qts=0.0, qtf=0.0, maior=0, menor=9999, perc;
int filhos[3], total=0, pe=0;
for (int y=0; y<3; y++){
    printf("digite o salario:\n");
    scanf("%f", &salario[y]);
    printf("digite o numero de filhos:\n");
    scanf("%d", &filhos[y]);
    total++;
    
    qts += salario[y];
    qtf += filhos[y];
    if(salario[y]>maior){
        maior=salario[y];
        }
    if(salario[y]<menor){
        menor=salario[y];
    }
    
    if(filhos[y]>2){
      pe++;
    }
    
    perc = (pe*100)/total;
    }
   
   printf("\nmedia de salarios: %.2f", qts/3);
   printf("\nmedia de filhos: %.2f", qtf/3);
   printf("\nMaior salario = %.2f",maior);
   printf("\nMenor salario = %.2f",menor);
   printf("\npercentual de pessoas com mais de dois filhos:%.2f",perc);
   return 0;
} 
