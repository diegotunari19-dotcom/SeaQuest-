#ifndef JOGADOR_H
#define JOGADOR_H

typedef struct
{
    int x;
    int y;

    int velocidadeX;
    int velocidadeY;

} Jogador;


void iniciarJogador(Jogador *jogador);
void atualizarJogador(Jogador *jogador);
void desenharJogador(Jogador jogador);


#endif
