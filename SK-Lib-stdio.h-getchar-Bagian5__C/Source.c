#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {

    int c;

    printf("Enter text (Include '@' in the sentence to exit):");

    do {
        c = getchar();
        putchar(c);
    } while (c != '@');

    _getch();
    return 0;
}

