#ifndef TIRO_H
#define TIRO_H

#define MAX_TIROS 10


typedef struct
{
    int x;
    int y;
    int ativo;

} Tiro;


void iniciarTiros(Tiro tiros[]);
void criarTiro(Tiro tiros[], int x, int y);
void atualizarTiros(Tiro tiros[]);
void desenharTiros(Tiro tiros[]);


#endif
