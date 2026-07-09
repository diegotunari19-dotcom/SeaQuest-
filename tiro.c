#include "tiro.h"
#include "tela.h"



void iniciarTiros(Tiro tiros[])
{
    for(int i = 0; i < MAX_TIROS; i++)
    {
        tiros[i].ativo = 0;
    }
}




void criarTiro(Tiro tiros[], int x, int y)
{
    for(int i = 0; i < MAX_TIROS; i++)
    {
        if(tiros[i].ativo == 0)
        {
            tiros[i].x = x;
            tiros[i].y = y;
            tiros[i].ativo = 1;

            break;
        }
    }
}




void atualizarTiros(Tiro tiros[])
{
    for(int i = 0; i < MAX_TIROS; i++)
    {
        if(tiros[i].ativo)
        {
            tiros[i].x++;


            if(tiros[i].x >= LARGURA-1)
            {
                tiros[i].ativo = 0;
            }
        }
    }
}




void desenharTiros(Tiro tiros[])
{
    for(int i = 0; i < MAX_TIROS; i++)
    {
        if(tiros[i].ativo)
        {
            desenharNaTela(
                tiros[i].x,
                tiros[i].y,
                '>',
                COR_TIRO
            );
        }
    }
}
