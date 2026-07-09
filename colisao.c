#include "colisao.h"



void verificarTirosInimigos(
    Tiro tiros[],
    Inimigo inimigos[]
)
{

    for(int i = 0; i < MAX_TIROS; i++)
    {

        if(tiros[i].ativo)
        {

            for(int j = 0; j < MAX_INIMIGOS; j++)
            {

                if(inimigos[j].ativo)
                {

                    // Área de colisão do tiro com o inimigo

                    if(
                    tiros[i].x >= inimigos[j].x - 1 &&
                    tiros[i].x <= inimigos[j].x + 1 &&
                    tiros[i].y == inimigos[j].y
                    )
                    {

                        tiros[i].ativo = 0;

                        inimigos[j].ativo = 0;

                    }

                }

            }

        }

    }

}




int verificarJogadorInimigo(
    Jogador jogador,
    Inimigo inimigos[]
)
{

    for(int i = 0; i < MAX_INIMIGOS; i++)
    {

        if(inimigos[i].ativo)
        {

            if(
            jogador.x >= inimigos[i].x - 1 &&
            jogador.x <= inimigos[i].x + 1 &&
            jogador.y == inimigos[i].y
            )
            {

                return 1;

            }

        }

    }


    return 0;

}
