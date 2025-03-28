#include <stdio.h>
#include <string.h>

void sortierePointer(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void textausgabe(char *textPointer[], int anz_Zeilen) {
    for (int zahl = 0; zahl < anz_Zeilen; zahl++) {
        printf("%s\n", textPointer[zahl]);
    }
}

void main() {
    char *pointer[] = {"Pflaume", "Apfel", "Johannisbeere"};
    int anz_Zeilen = 3;

    printf("Vor dem Sortieren:\n");
    textausgabe(pointer, anz_Zeilen);

    sortierePointer(pointer, anz_Zeilen);

    printf("\nNach dem Sortieren:\n");
    textausgabe(pointer, anz_Zeilen);

}
