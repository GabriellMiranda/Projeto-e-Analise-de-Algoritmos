#ifndef CAVERNA_H
#define CAVERNA_H
#include <stdbool.h>

typedef struct {
    int **caverna; //matriz caverna
    int linha;//linha
    int coluna;//coluna
    int unidadeTempoGasta; //unidade de tempo gasta
    int tempoLava; //tempo da lava
    int tempoTotal; //tempo total que ele pode passar no mapa sem ser pego pela lava
}Caverna;

int** initCaverna(int linha, int coluna);

void preencherCaverna(Caverna *caverna, char* nomeAquivo);

void printCaverna(Caverna *caverna);

int movimentar(Caverna *caverna, int i, int j);

int caminhoMinimo(Caverna *caverna, int i, int j);

int minimo(int valor1,int valor2);

//int Min(Caverna *caverna, int i, int j); função inexistente

int posicaoEhValida(Caverna *caverna, int i, int j);

void calcula(Caverna *caverna);

int inicio(Caverna *caverna,int i,int j);

void calcularCelInalcancaveis(Caverna caverna);

void desenharMelhorCaminho(Caverna caverna);

#endif