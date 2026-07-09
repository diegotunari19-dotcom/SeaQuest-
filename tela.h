#ifndef TELA_H
#define TELA_H

#define LARGURA 80
#define ALTURA 20


#define COR_AGUA 1
#define COR_SUBMARINO 2
#define COR_TIRO 3
#define COR_INIMIGO 4


void iniciarTela();

void limparBuffer();

void desenharNaTela(int x, int y, char caractere, int cor);

void mostrarBuffer();

void finalizarTela();


#endif
