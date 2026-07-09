#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#include "tela.h"
#include "entrada.h"
#include "jogador.h"
#include "tiro.h"
#include "inimigos.h"
#include "colisao.h"
#include "mapa.h"


int main()
{
    srand(time(NULL));


    iniciarTela();
    iniciarEntrada();


    Jogador jogador;
    iniciarJogador(&jogador);



    Tiro tiros[MAX_TIROS];
    iniciarTiros(tiros);



    Inimigo inimigos[MAX_INIMIGOS];
    iniciarInimigos(inimigos);



    int rodando = 1;



    while(rodando)
    {

        int tecla = lerTecla();



        // Movimento

        jogador.velocidadeX = 0;
        jogador.velocidadeY = 0;


        if(tecla == 'w')
            jogador.velocidadeY = -1;


        if(tecla == 's')
            jogador.velocidadeY = 1;


        if(tecla == 'a')
            jogador.velocidadeX = -1;


        if(tecla == 'd')
            jogador.velocidadeX = 1;



        // Atirar

        if(tecla == ' ')
        {
            criarTiro(
                tiros,
                jogador.x + 1,
                jogador.y
            );
        }



        // Sair

        if(tecla == 'q')
        {
            rodando = 0;
        }



        // Criar inimigos

        if(rand() % 40 == 0)
        {
            criarInimigo(inimigos);
        }



        // Atualização

        atualizarJogador(&jogador);

        atualizarTiros(tiros);

        atualizarInimigos(inimigos);



        // Colisões

        verificarTirosInimigos(
            tiros,
            inimigos
        );


        if(verificarJogadorInimigo(
            jogador,
            inimigos))
        {
            jogador.x = 10;
            jogador.y = ALTURA / 2;
        }



        // Renderização

        limparBuffer();


        desenharMapa();


        desenharJogador(jogador);


        desenharTiros(tiros);


        desenharInimigos(inimigos);


        mostrarBuffer();



        usleep(50000);

    }



    finalizarEntrada();

    finalizarTela();


    return 0;
}
