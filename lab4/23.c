#include<stdio.h>

main()
{
    char ch;

    printf( "\nenter a lower cased alphabet (a-z): ");
    scanf("%c", &ch);
    if (ch<'a'||ch>'z')
    printf( "\ncharacter not a lower case alphabet");
    else 
    switch (ch)
    {
        case 'a';
        case 'e';
        case 'i';
        case 'o';
        case 'u';
        printf("\ncharacter is a lower");
        break;
        case'z':
        printf("\nlast alphabet (z) was entered");
        break;

        default:
        printf("\n character is a consonant");
        break;
    }
}