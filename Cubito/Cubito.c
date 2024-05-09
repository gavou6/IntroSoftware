#include <stdio.h>
#include <conio.h>
#include <windows.h> 
#define ANCHO 200
#define ALTO 50

int x = ANCHO / 2;
int y = ALTO / 2;

void dibujarCuadrado() {
    system("cls");
    int i,j;
    for(i = 0; i < ALTO; i++) {
        for(j = 0; j < ANCHO; j++) {
            if(i == y && j == x) {
                //printf("O");
                printf ("%c", 254);//imprimir el square
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void moverCuadrado(char direccion) {
    switch(direccion) {
        case 'w':
            if(y > 0) y--;
            break;
        case 'a':
            if(x > 0) x--;
            break;
        case 's':
            if(y < ALTO - 1) y++;
            break;
        case 'd':
            if(x < ANCHO - 1) x++;
            break;
    }
}
int main() {
    char tecla;
    do {
        dibujarCuadrado();
        tecla = getch();
        moverCuadrado(tecla);
    } while(tecla != 'q'); // 'q' para salir
    return 0;
}
