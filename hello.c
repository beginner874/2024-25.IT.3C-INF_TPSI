#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    // Il valore di ritorno della funzione
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return a * B;
}

// Funzione per simulare la porta OR
int OR(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return a + B - a * B;
}

int LAB03 () {
    int A, B;
    printf("Inserisci il valore di A (0 o 1):\n");
    scanf("%d", &A);
    printf("Hai inserito il valore A: %d\n", A);
    printf("Inserisci il valore di B (0 o 1):\n");
    scanf("%d", &B);
    printf("Hai inserito il valore B: %d\n", B);

    if (A != 0 && A != 1 && B != 0 && B != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        
        printf("I valori inseriti sono 1 o 0\n");

        printf("i valori di A e B vengono trasferiti nella porta OR di uscita viene nominata P1");
        int P1 = OR(A,B);
        printf("i valori di A e P1 vengono trasferiti nella porta and di uscita viene nominata P2");
        int P2 = AND(P1,A);
        printf("il valore di P2 viene trasferita nella porta not di uscita viene nominata Q");
        int Q = NOT(P2);
        printf("Il valore finale ovvero di Q e: %d\n", Q);
        
    }
    printf("\n\n");
}