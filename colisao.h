#ifndef COLISAO_H
#define COLISAO_H

#include "tiro.h"
#include "inimigos.h"
#include "jogador.h"


void verificarTirosInimigos(
    Tiro tiros[],
    Inimigo inimigos[]
);


int verificarJogadorInimigo(
    Jogador jogador,
    Inimigo inimigos[]
);


#endif
