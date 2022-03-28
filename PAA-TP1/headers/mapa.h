#ifndef MAPA_H
#define MAPA_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "monstro.h"
#include "heroi.h"
#include "pilha.h"
#include "modoAnalise.h"

typedef struct{
    char **mapa; //mapa uma matriz
    int linha; // linhas da matriz
    int coluna; // linhas colunas
    Heroi heroi; // caracteristicas dos heroi
    monstro U; //caracteristicas dos monstros
    monstro T;
    monstro S;
    monstro B;
    monstro G;
}Mapa;



char** initMapa(int linha, int coluna);

void preencherMapa(Mapa *mapa, char *nomeArquivo);

int posicaoEhValida(Mapa *mapa, int i, int j);

int lutar(Mapa* mapa,char monstro);

int movimentar(Mapa *mapa, int i, int j,Pilha* pilha,char posAntiga,int opAntiga,modoAnalise *m, int nivel, int *ptr);

int verificaLoop(int *op, int k);

void printMapa(Mapa *mapa);

int simular(int opAnterior, int opAtual);


#endif