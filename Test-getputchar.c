#include <stdio.h>
#include <errno.h> // for the definition of errno
#include <stdlib.h> // for exit()
int main()
{
    int c;
    while ((c = getchar()) != EOF)
       putchar(c);

    if (feof(stdin)) {
        printf("end-of-file reached\n");
        exit(0);
    }
    else if (ferror(stdin)) {
        printf("An error occurred. errno set to %d\n", errno);
        perror("Human readable explanation");
        exit(1);
    }
    else {
        printf("This should never happen...\n");
        exit('?');
    }
}