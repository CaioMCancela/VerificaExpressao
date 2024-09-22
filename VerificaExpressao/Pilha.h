#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED


typedef char TipoDado;


struct TipoCelula{

    TipoDado Item;
    TipoCelula *Prox;
};



void Pilha_Construtor();


void Pilha_Destrutor();


bool Pilha_Vazia();


int Pilha_Tamanho();

bool Pilha_Empilhar(TipoDado Elemento);

bool Pilha_Desempilhar();

bool Pilha_Topo(TipoDado &Elemento);




#endif // PILHA_H_INCLUDED