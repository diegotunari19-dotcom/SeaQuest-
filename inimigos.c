#include "inimigos.h"
#include "tela.h"

#include <stdlib.h>



void iniciarInimigos(Inimigo inimigos[])
{
    for(int i = 0; i < MAX_INIMIGOS; i++)
    {
        inimigos[i].ativo = 0;
    }
}





void criarInimigo(Inimigo inimigos[])
{

    for(int i = 0; i < MAX_INIMIGOS; i++)
    {

        if(inimigos[i].ativo == 0)
        {

            inimigos[i].x = LARGURA - 2;


            // Nasce somente no mar

            inimigos[i].y = 6 + rand() % (ALTURA - 7);


            inimigos[i].velocidade = 1;


            inimigos[i].ativo = 1;


            break;

        }

    }

}





void atualizarInimigos(Inimigo inimigos[])
{

    for(int i = 0; i < MAX_INIMIGOS; i++)
    {

        if(inimigos[i].ativo)
        {

            inimigos[i].x -= inimigos[i].velocidade;



            if(inimigos[i].x <= 1)
            {
                inimigos[i].ativo = 0;
            }

        }

    }

}





void desenharInimigos(Inimigo inimigos[])
{

    for(int i = 0; i < MAX_INIMIGOS; i++)
    {

        if(inimigos[i].ativo)
        {

            desenharNaTela(
                inimigos[i].x,
                inimigos[i].y,
                '<',
                COR_INIMIGO
            );

        }

    }

}
