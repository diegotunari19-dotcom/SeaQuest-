#include "mapa.h"
#include "tela.h"



void desenharMapa()
{

    for(int y = 1; y < ALTURA-1; y++)
    {

        for(int x = 1; x < LARGURA-1; x++)
        {

            desenharNaTela(
                x,
                y,
                ' ',
                COR_AGUA
            );

        }

    }

}
