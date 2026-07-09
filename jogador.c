#include "jogador.h"
#include "tela.h"



void iniciarJogador(Jogador *jogador)
{
    jogador->x = 10;
    jogador->y = ALTURA / 2;

    jogador->velocidadeX = 0;
    jogador->velocidadeY = 0;
}





void atualizarJogador(Jogador *jogador)
{

    jogador->x += jogador->velocidadeX;

    jogador->y += jogador->velocidadeY;



    // Limite esquerda

    if(jogador->x < 1)
    {
        jogador->x = 1;
    }



    // Limite direita

    if(jogador->x > LARGURA - 2)
    {
        jogador->x = LARGURA - 2;
    }



    // Limite cima

    if(jogador->y < 1)
    {
        jogador->y = 1;
    }



    // Limite baixo

    if(jogador->y > ALTURA - 2)
    {
        jogador->y = ALTURA - 2;
    }

}





void desenharJogador(Jogador jogador)
{

    desenharNaTela(
        jogador.x,
        jogador.y,
        '>',
        COR_SUBMARINO
    );

}
