/*   Copy terminal inputs 
Note, after running this program takes all 
comand line inputs and prints them back out
To end file copy kill terminal Cntl+C

Method: copy code to output one character 
at a time
*/ 

/* Read a character 
    while (character is not end-of-file indicator)
      output the character just read
      read a character 
*/


#include <stdio.h>

// copy input to output; 1st version
/*
main()
{
    int c;

    c = getchar();
    while (c != EOF)    // EOF: End of file 
    {
        putchar(c);     // output read character
        c = getchar();  // read character
    }
}
*/



/*
// Copy input to output; 2nd Version
main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("end-of-file reached\n"); // occurs after EOF

}
*/


// Try to show the condition is 0 or 1 






// print the EOF