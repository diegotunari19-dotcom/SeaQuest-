#include "tela.h"
#include <curses.h>


typedef struct
{
    char caractere;
    int cor;

} Pixel;


Pixel buffer[ALTURA][LARGURA];



void iniciarTela()
{
    initscr();

    cbreak();

    noecho();

    keypad(stdscr, TRUE);

    nodelay(stdscr, TRUE);

    curs_set(0);


    start_color();


    init_pair(
        COR_AGUA,
        COLOR_BLUE,
        COLOR_BLUE
    );


    init_pair(
        COR_SUBMARINO,
        COLOR_YELLOW,
        COLOR_BLUE
    );


    init_pair(
        COR_TIRO,
        COLOR_GREEN,
        COLOR_BLUE
    );


    init_pair(
        COR_INIMIGO,
        COLOR_RED,
        COLOR_BLUE
    );


    refresh();
}





void limparBuffer()
{

    for(int y = 0; y < ALTURA; y++)
    {

        for(int x = 0; x < LARGURA; x++)
        {

            buffer[y][x].caractere = ' ';

            buffer[y][x].cor = COR_AGUA;

        }

    }



    // Bordas

    for(int x = 0; x < LARGURA; x++)
    {

        buffer[0][x].caractere = '-';

        buffer[ALTURA - 1][x].caractere = '-';

    }



    for(int y = 0; y < ALTURA; y++)
    {

        buffer[y][0].caractere = '|';

        buffer[y][LARGURA - 1].caractere = '|';

    }

}





void desenharNaTela(
    int x,
    int y,
    char caractere,
    int cor
)
{

    if(
        x >= 1 &&
        x < LARGURA - 1 &&
        y >= 1 &&
        y < ALTURA - 1
    )
    {

        buffer[y][x].caractere = caractere;

        buffer[y][x].cor = cor;

    }

}





void mostrarBuffer()
{

    for(int y = 0; y < ALTURA; y++)
    {

        for(int x = 0; x < LARGURA; x++)
        {

            attron(
                COLOR_PAIR(buffer[y][x].cor)
            );


            mvaddch(
                y,
                x,
                buffer[y][x].caractere
            );


            attroff(
                COLOR_PAIR(buffer[y][x].cor)
            );

        }

    }


    refresh();

}





void finalizarTela()
{
    endwin();
}
