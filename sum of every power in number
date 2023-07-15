
https://imgur.com/a/ty4Z5hh

//  don't allocate memory for the results array
//  assign values to the provided results array
//  set length pointer as size of results array
//  after calculations return the results array

#include <stddef.h>
#include <math.h>

typedef unsigned long long ull;

ull *sum_dig_pow(ull a, ull b, ull *results, size_t *length) {
    int counter;
    int done;
    int elo;
    *length = 0;

    for (ull i = a; i <= b; i++) {
        counter = 0;
        done = 0;
        ull temp = i;

        // Obliczanie długości liczby
        while (temp != 0) {
            temp /= 10;
            counter++;
        }

        temp = i;

        // Sprawdzanie, czy suma potęg cyfr jest równa liczbie
        while (temp != 0) {
            int digit = temp % 10;
            done += pow(digit, counter);
            temp /= 10;
            counter--;
        }

        // Jeśli suma potęg cyfr jest równa liczbie, dodaj ją do tablicy results
        if (done == i) {
            results[*length] = i;
            (*length)++;
        }
    }

    return results;
}
