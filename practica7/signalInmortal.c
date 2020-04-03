#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void processSignal(int s){
    char destino[]="xxxxxxxxxx";
    char muestra[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    for (int x = 0; x < 10; x++) {
        int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    }
    printf("%s\nsoy inmortal\n",destino);
    
}

int main(void){
    signal(15, processSignal);
    while(1){
        sleep(3);
        printf("hacking...\n");
    }
    return 1;
}