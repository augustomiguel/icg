#include "definitions.h"
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
    //*************************************************************************
    // Chame aqui as funções do mygl.h
    //*************************************************************************
    PutPixel();
    DrawLine();

}

void PutPixel(void) {
    // Escreve um pixel vermelho na posicao (0,0) da tela:
    FBptr[0] = 255; // componente R
    FBptr[1] = 0;   // componente G
    FBptr[2] = 0;   // componente B
    FBptr[3] = 255; // componente A

    // Escreve um pixel verde na posicao (1,0) da tela:
    FBptr[4] = 0;   // componente R
    FBptr[5] = 255; // componente G
    FBptr[6] = 0;   // componente B
    FBptr[7] = 255; // componente A

    // Escreve um pixel azul na posicao (2,0) da tela:
    FBptr[8] = 0;    // componente R
    FBptr[9] = 0;    // componente G
    FBptr[10] = 255; // componente B
    FBptr[11] = 255; // componente A
}

void DrawLine(void)
{
    for (unsigned int i = 0; i < 250; ++i)
    {
        FBptr[4 * i + 4 * i * IMAGE_WIDTH + 0] = 255;
        FBptr[4 * i + 4 * i * IMAGE_WIDTH + 1] = 0;
        FBptr[4 * i + 4 * i * IMAGE_WIDTH + 2] = 255;
        FBptr[4 * i + 4 * i * IMAGE_WIDTH + 3] = 255;
    }
}