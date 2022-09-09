#include <stdio.h>
#include <ctype.h>
/**
 * main - entry
 *
 * prints the alphabet to lower case then upper case
 *
 * Return: 0
 */
int main(void)
{
        char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 52; i++)
        {
                putchar(ch[i]);
        }
        putchar('\n');
        return (0);
}

