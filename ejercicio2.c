#include<stdio.h>
#define N 5
struct stonks {
int sube;
int baja;
};
struct stonks stonks_master(int tam, int a[]){
    int menor = 0, mayor = 0; 
    struct stonks res; 
    int i = 0;
    while (i < tam -1){
        if (a[i] <= a[i + 1]){
            menor ++;
        } else { 
            mayor ++;
        }
        i ++;
    }
    res.sube = menor;
    res.baja = mayor; 
    return res; 
}
int main(void){
    int a[N];
    struct stonks result; 
    int i = 0;
    while(i < N){
        printf("Ingresa el elemento del array en la posicion %d\n", i);
        scanf("%d", &a[i]);
        i++;
    }
    result = stonks_master(N, a); 
    printf("Sube: %d \n", result.sube);
    printf("Baja: %d\n", result.baja);
    return 0;
}

/*
EJEMPLOS: 

Ingresa el elemento del array en la posicion 0
1
Ingresa el elemento del array en la posicion 1
2
Ingresa el elemento del array en la posicion 2
3
Ingresa el elemento del array en la posicion 3
4
Ingresa el elemento del array en la posicion 4
5
Sube: 4 
Baja: 0

Ingresa el elemento del array en la posicion 0
-1
Ingresa el elemento del array en la posicion 1
-2
Ingresa el elemento del array en la posicion 2
-2
Ingresa el elemento del array en la posicion 3
-3
Ingresa el elemento del array en la posicion 4
-4
Sube: 1 
Baja: 3

*/