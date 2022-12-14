/*
Napisz program, który w main() pobierze od użytkownika liczbę całkowitą a oraz liczbę bitów ile, 
które mają zostać ustawione na 1 (zaczynając od najmłodszego). Napisz funkcję zgodną z prototypem:
void ustaw(int * , int);
która przy użyciu operatorów bitowych oraz odpowiedniej maski ustawi na 1 bity o pozycjach 0, 1, ..., ile-1 w wartości zmiennej a. 
Proszę przetestować działanie dla przykładowych wartości w main() oraz wypisać zmienną a przed i po wywołaniu funkcji zerowania, np.:
      Podaj liczbe: 41
      Ile najmlodszych bitow ma zostac ustawionych na 1? 4
      Przed wywolaniem funkcji: a = 41
      Po wywolaniu funkcji: a = 47
*/
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
#include <time.h>

void ustaw(int *a, int b)
{
    if (b <= 0)
    {
        return;
    }
    *a = *a | ((1 << b) - 1); //bitwise or 
}

int main()
{
    int a = 0;
    int b = 0;

    printf("Podaj a: \n");
    scanf("%d", &a);

    printf("Podaj b: \n");
    scanf("%d", &b);

    ustaw(&a, b);

    printf("Po zmianie: %d\n", a);

    return 0;
}


