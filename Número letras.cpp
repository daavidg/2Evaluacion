#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int medida(char aux[]){
    int L=0;
    while( aux[L] != '\0' ){
           L++;
           }
    return L;
    }
int main(){
    int salir;
    char aux[15];
    char *lista[5];
    int L;
    int n, i;
    char *pauxiliar;
    for(i=0 ; i<5 ; i++){
            printf("Nombre del amigo %i: ",i);
            scanf("%s",aux);
            L=medida(aux);
            printf("Tiene %i letras\n",L);
            lista[i]=(char*) malloc(L*sizeof(char));
            strcpy(lista[i],aux);
    }
    for(i=1 ; i<7 ; i++){
           printf("\n%s",lista[i]);
           }    
    for(n=1 ; n<5 ; n++){
           for(i=0 ; i<4 ; i++){
                  if( *lista[i]>=*lista[i+1] ){
                      pauxiliar=lista[i];
                      lista[i]=lista[i+1];
                      lista[i+1]=pauxiliar;
                      }
           
           }
    }
    printf("\n\nLista ordenada: ");
    for(i=1 ; i<7 ; i++){
           printf("\n%s",lista[i]);
           }
    
    scanf("%i",&salir);
    }
