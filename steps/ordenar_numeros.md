# posibilidades de ordenar 3 números

3 1 2 <- ra rotate a -move a
2 1 3
2 3 1
3 2 1
1 3 2

# posibilidades de ordenar 5 números

1 2 3 4 5 <- descartada porque estan ordenados
5 1 2 3 4 <- ra rotate a- move
4 5 1 2 3
3 4 5 1 2
2 3 4 5 1 <- rra revese rotate a - move

# posibilidades de ordenar 5 o más números con stack_a stack_b



1 2 3 4 5 6 7 8 9 10 <- descartada porque estan ordenados
2 3 4 5 6 7 8 9 10 1
3 4 5 6 7 8 9 10 1 2
4 5 6 7 8 9 10 1 2 3
5 6 7 8 9 10 1 2 3 4
6 7 8 9 10 1 2 3 4 5
7 8 9 10 1 2 3 4 5 6
8 9 10 1 2 3 4 5 6 7
9 10 1 2 3 4 5 6 7 8
10 1 2 3 4 5 6 7 8 9

# la ai dice que lo haga asi xd

Un algoritmo de ordenamiento utilizando dos pila

    Crea dos pilas, llamadas  pila1 y  pila2, utilizando listas enlazadas.
    Inicialmente,  pila1 contendrá los elementos desordenados y  pila2 estará vacía.
    Mientras  pila1 no esté vacía, sigue los siguientes pasos:
        Extrae el primer elemento de  pila1 y guárdalo en una variable temporal  temp.
        Mientras  pila2 no esté vacía y el elemento superior de  pila2 sea mayor que  temp, extrae el elemento superior de  pila2 y agrégalo a `p pila1.
        Agrega  temp a  pila2.
    Una vez que  pila1 esté vacía, los elementos en  pila2 estarán ordenados en orden creciente. Si se desea obtener una lista ordenada en orden decreciente, pila2 y agregarlos a una lista nueva, en orden inverso.

Es importante tener en cuenta que, dado que se utilizan dos pilas, este algoritmo tiene un costo de espacio de O(n), donde n es el número de elementos a ordenar. Además, dado que


```c
#include <stdio.h>
#include <stdlib.h>

// Estructura que representa un nodo de una lista enlazada
typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} nodo_t;

// Estructura que representa una pila implementada con una lista enlazada
typedef struct pila {
    nodo_t *cima;
} pila_t;

// Crea una pila vacía
pila_t *crear_pila() {
    pila_t *pila = malloc(sizeof(pila_t));
    pila->cima = NULL;
    return pila;
}

// Agrega un elemento a la pila
void push(pila_t *pila, int dato) {
    nodo_t *nodo = malloc(sizeof(nodo_t));
    nodo->dato = dato;
    nodo->siguiente = pila->cima;
    pila->cima = nodo;
}

// Extrae el elemento superior de la pila
int pop(pila_t *pila) {
    int dato = pila->cima->dato;
    nodo_t *temp = pila->cima;
    pila->cima = pila->cima->siguiente;
    free(temp);
    return dato;
}

// Devuelve 1 si la pila está vacía, 0 en caso contrario
int pila_vacia(pila_t *pila) {
    return pila->cima == NULL;
}

// Ordena una lista de enteros utilizando dos pilas con listas enlazadas
void ordenar(int *lista, int n) {
    // Crea las pilas
    pila_t *pila1 = crear_pila();
    pila_t *pila2 = crear_pila();

    // Agrega los elementos de la lista a pila1
    for (int i = 0; i < n; i++) {
        push(pila1, lista[i]);
    }

    // Mientras pila1 no esté vacía, sigue los siguientes pasos:
    while (!pila_vacia(pila1)) {
        // Extrae el primer elemento de pila1 y guárdalo en una variable temporal
        int temp = pop(pila1);

        // Mientras pila2 no esté vacía y el elemento superior de pila2 sea mayor que temp,
        // extrae el elemento superior de pila2 y agrégalo a pila1
        while (!pila_vacia(pila2) && pila2->cima->dato > temp) {
            push(pila1, pop(pila2));
        }

```
