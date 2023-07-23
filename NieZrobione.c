



https://www.codewars.com/kata/5274e122fc75c0943d000148/train/c





#include <stdlib.h>

int intlength(int n) {
    int i = 0;
    while (n != 0) {
        n /= 10;
        i++;
    }
    return i;
}

char* IntToArray(int n) {
    if (n == 0) {
        char* done = malloc(2);
        done[0] = '0';
        done[1] = '\0';
        return done;
    }

    int length = intlength(n);
    char* done = malloc(sizeof(char) * length + 1); // Allocate memory for the character array

    for (int i = length - 1; i >= 0; i--) {
        done[i] = n % 10 + '0'; // Convert digits to characters
        n /= 10;
    }

    done[length] = '\0'; // Null-terminate the character array
    return done;
}

char* group_by_commas(int n) {
    int dlugosc = intlength(n);
    int reszta = dlugosc % 3;
    int elo = dlugosc / 3;
    int maloc = dlugosc + elo + (elo > 0 ? elo - 1 : 0); // Dodajemy miejsce na przecinki
    char* tablicaliczb = IntToArray(n);
    char* done = malloc(sizeof(char) * maloc + 1); // Dodajemy miejsce na znak końca stringu '\0'

    int count = 0; // Licznik wstawionych przecinków
    int j = 0; // Zmienna pomocnicza do indeksowania tablicy done

    for (int o = 0; o < reszta; o++) {
        done[j++] = tablicaliczb[o];
    }

    for (int i = 0 + reszta; i < dlugosc + elo; i++) {
        done[j++] = tablicaliczb[i - reszta];
        if (count < elo && (i - reszta + 1) % 3 == 0) {
            done[j++] = ',';
            count++;
        }
    }

    done[j] = '\0'; // Dodaj znak końca stringu

    free(tablicaliczb); // Zwolnij pamięć zaalokowaną w funkcji IntToArray

    return done;
}
