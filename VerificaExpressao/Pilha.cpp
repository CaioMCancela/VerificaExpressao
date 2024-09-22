#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

TipoCelula *Topo;

int Contador;

void Pilha_Construtor(){

    Topo = NULL;

    Contador = 0;
}

void Pilha_Destrutor(){

    TipoCelula *Temp;

    while(Topo != NULL)
    {
        Temp = Topo;
        Topo = Topo -> Prox;

        Temp->Prox = NULL;
        free(Temp);
    }
    Contador = 0;
}

bool Pilha_Vazia(){
    return Topo == NULL;
}


int Pilha_Tamanho(){
    return Contador;
}

bool Pilha_Empilhar(TipoDado Elemento){

    TipoCelula *Nova;
    Nova = (TipoCelula *) malloc(sizeof(TipoCelula));

    if(Nova==NULL)  {


        return false;
    }
    else
    {
        Nova->Item = Elemento;
        Nova->Prox = Topo;

        Topo = Nova;
        Contador++;

        return true;
    }
}

bool Pilha_Desempilhar(){

    if(!Pilha_Vazia()){

        TipoCelula *Temp = Topo;

        Topo = Topo->Prox;

        Temp->Prox = NULL;

        free(Temp);
        Contador--;

        return true;
    }else
        return false;
}

bool Pilha_Topo(TipoDado &Elemento){

    if(!Pilha_Vazia())  {
        Elemento = Topo->Item;

        return true;
    }else {
        return false;
    }
}