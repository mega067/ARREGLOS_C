#include <stdio.h>
#include <stdlib.h>

// 1. Definimos la estructura del Nodo
struct Nodo {
    int dato;
    struct Nodo* izquierda;
    struct Nodo* derecha;
};

// Función auxiliar para crear un nuevo nodo
struct Nodo* nuevoNodo(int dato) {
    struct Nodo* nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nodo->dato = dato;
    nodo->izquierda = NULL;
    nodo->derecha = NULL;
    return nodo;
}

// ---------------------------------------------------------
// METRICAS (Tu código original)
// ---------------------------------------------------------

// ALGORITMO 1: Contar número de nodos
int contarNodos(struct Nodo* nodo) {
    if (nodo == NULL) {
        return 0;
    }
    return 1 + contarNodos(nodo->izquierda) + contarNodos(nodo->derecha);
}

// ALGORITMO 2: Calcular la altura
int calcularAltura(struct Nodo* nodo) {
    if (nodo == NULL) {
        return 0;
    }
    
    int alturaIzquierda = calcularAltura(nodo->izquierda);
    int alturaDerecha = calcularAltura(nodo->derecha);

    if (alturaIzquierda > alturaDerecha) {
        return alturaIzquierda + 1;
    } else {
        return alturaDerecha + 1;
    }
}

// ---------------------------------------------------------
// RECORRIDOS (Nuevas funciones)
// ---------------------------------------------------------

// 1. Preorden: Raíz -> Izquierda -> Derecha
void preorden(struct Nodo* nodo) {
    if (nodo == NULL) return;

    printf("%d ", nodo->dato);      // Mostrar dato
    preorden(nodo->izquierda);      // Ir izquierda
    preorden(nodo->derecha);        // Ir derecha
}

// 2. Inorden: Izquierda -> Raíz -> Derecha
void inorden(struct Nodo* nodo) {
    if (nodo == NULL) return;

    inorden(nodo->izquierda);       // Ir izquierda
    printf("%d ", nodo->dato);      // Mostrar dato
    inorden(nodo->derecha);         // Ir derecha
}

// 3. Postorden: Izquierda -> Derecha -> Raíz
void postorden(struct Nodo* nodo) {
    if (nodo == NULL) return;

    postorden(nodo->izquierda);     // Ir izquierda
    postorden(nodo->derecha);       // Ir derecha
    printf("%d ", nodo->dato);      // Mostrar dato
}

// ---------------------------------------------------------
// MAIN
// ---------------------------------------------------------
int main() {
    // Construimos el árbol:
    //       1
    //      / \
    //     2   3
    //    /
    //   4
    
    struct Nodo* raiz = nuevoNodo(1);
    raiz->izquierda = nuevoNodo(2);
    raiz->derecha = nuevoNodo(3);
    raiz->izquierda->izquierda = nuevoNodo(4);

    // --- Sección de Métricas ---
    printf("--- ESTADISTICAS ---\n");
    printf("Total de Nodos: %d\n", contarNodos(raiz));
    printf("Altura del Arbol: %d\n", calcularAltura(raiz));
    printf("--------------------\n\n");

    // --- Sección de Recorridos ---
    printf("--- RECORRIDOS ---\n");
    
    printf("Preorden (R-I-D): ");
    preorden(raiz);
    printf("\n");

    printf("Inorden (I-R-D):  ");
    inorden(raiz);
    printf("\n");

    printf("Postorden (I-D-R): ");
    postorden(raiz);
    printf("\n");

    return 0;
}