#include <stdio.h> 
#include <limits.h> 
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    int n;
    int i;

    printf("Введiть кiлькiсть елементiв масиву: ");
    scanf_s("%d", &n);
    int* array = (int*)malloc(n * sizeof(int));
    printf("Введiть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        s += array[i];
    }
    printf("Загальна сума елементiв масиву: %d\n", s);

    if (n < 10) {
        int m = 1;
        for (int i = 0; i < n; i++) {
            m *= array[i];
        }
        printf("Загальний добуток елементiв масиву: %d\n", m);
    }

    return 0;
}