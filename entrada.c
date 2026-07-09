#include "entrada.h"
#include <curses.h>

void iniciarEntrada()
{
    initscr();          // Inicia o modo curses
    cbreak();           // Desativa buffer de linha
    noecho();           // Não mostra as teclas digitadas
    keypad(stdscr, TRUE); // Habilita teclas especiais
    nodelay(stdscr, TRUE); // getch() não bloqueia
    curs_set(0);        // Esconde o cursor
}

void finalizarEntrada()
{
    endwin();
}

int lerTecla()
{
    int tecla = getch();

    if (tecla == ERR)
        return 0;

    return tecla;
}
