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
int esempio() {
    // Dichiara una variabile
    int A, B;

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di A (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &A);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore A: %d\n", A);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di B (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &B);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore B: %d\n", B);

    if (A != 0 && A != 1 && B != 0 && B != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        // Procediamo con l'esecuzione solo se il numero è 1 o 0
        printf("I valori inseriti sono 1 o 0\n");

        // Esempio di porta NOT
        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);

        // Esempio di porta AND
        printf("I valori di A e B vengono trasformati da una porta AND\n");
        int andAB = AND(A, B);
        printf("Il valore di uscita della porta AND è: %d\n", andAB);

        // Esempio di porta OR
        printf("I valori di A e B vengono trasformati da una porta OR\n");
        int orAB = OR(A, B);
        printf("Il valore di uscita della porta OR è: %d\n", orAB);
    }
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

        printf("i valori di A e B vengono trasferiti nella porta OR \n");
        int P1 = OR(A,B);
        printf("Il valore di uscita della porta OR (P1)  è: %d\n", P1);
        printf("i valori di A e P1 vengono trasferiti nella porta AND  \n");
        int P2 = AND(P1,A);
        printf("Il valore di uscita della porta AND (P2)  è: %d\n", P2);
        printf("il valore di P2 viene trasferita nella porta NOT  \n");
        int Q = NOT(P2);
        printf("Il valore di uscita della porta NOT (Q) e: %d\n", Q);
        
    }
}

int main (LAB04) {
    int A, B, C, D, E, F;
     printf("Inserisci il valore di A (0 o 1):\n");
    scanf("%d", &A);
    printf("Hai inserito il valore A: %d\n", A);

     printf("Inserisci il valore di B (0 o 1):\n");
    scanf("%d", &B);
    printf("Hai inserito il valore B: %d\n", B);

     printf("Inserisci il valore di C (0 o 1):\n");
    scanf("%d", &C);
    printf("Hai inserito il valore C: %d\n", C);

     printf("Inserisci il valore di D (0 o 1):\n");
    scanf("%d", &D);
    printf("Hai inserito il valore D: %d\n", D);

     printf("Inserisci il valore di E (0 o 1):\n");
    scanf("%d", &E);
    printf("Hai inserito il valore E: %d\n", E);

     printf("Inserisci il valore di F (0 o 1):\n");
    scanf("%d", &F);
    printf("Hai inserito il valore F: %d\n", F);


    if (A != 0 && A != 1 && B != 0 && B != 1 && C != 0 && C != 1 && D != 0 && D != 1 && E != 0 && E != 1 && F != 0 && F != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        
        printf("I valori inseriti sono 1 o 0\n");

        printf("i valori di A e B vengono trasferiti nella porta AND  \n");
        int AB = AND(A,B);
        printf("Il valore di uscita della porta AND (AB)  è: %d\n", AB);

        printf("i valori di C e D vengono trasferiti nella porta OR  \n");
        int CD = AND(C,D);
        printf("Il valore di uscita della porta AND (CD)  è: %d\n", CD);

        printf("i valori di E e F vengono trasferiti nella porta AND  \n");
        int EF = AND(E,F);
        printf("Il valore di uscita della porta AND (EF)  è: %d\n", EF);

        printf("il valore di AB viene trasferito nella porta NOT  \n");
        int P1 = NOT(AB);
        printf("Il valore di uscita della porta NOT (P1)  è: %d\n", P1);

        printf("i valori di CD e EF vengono trasferiti nella porta AND  \n");
        int P2 = AND(CD,EF);
        printf("Il valore di uscita della porta AND (P2)  è: %d\n", P2);

        printf("i valori di P1 e P2 vengono trasferiti nella porta OR  \n");
        int Q = OR(P1,P2);
        printf("Il valore di uscita della porta OR (Q valore finale)  è: %d\n", Q);
}
}