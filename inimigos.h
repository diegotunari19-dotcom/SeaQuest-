#ifndef INIMIGOS_H
#define INIMIGOS_H

#define MAX_INIMIGOS 10


typedef struct
{
    int x;
    int y;
    int ativo;
    int velocidade;

} Inimigo;



void iniciarInimigos(Inimigo inimigos[]);

void criarInimigo(Inimigo inimigos[]);

void atualizarInimigos(Inimigo inimigos[]);

void desenharInimigos(Inimigo inimigos[]);


#endif
