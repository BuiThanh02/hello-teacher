#include<studio.h>

main()
{
    printf( "\n chon A hoac a: Ada ");
    printf( "\n chon B hoac b: Basic ");
    printf( "\n chon C hoac c: COBOL ");
    printf( "\n chon D hoac d: dBASE III ");
    printf( "\n chon F hoac f: Fortran ");
    printf( "\n chon P hoac p: Pascal ");
    printf( "\n chon V hoac v: Visual C++ ");

    char op;
    scanf( "%c", op);
    scanf( "%c", op);

    switch (op)
    {
        case 'A':
        printf( "\n ban da chon ngon ngu lap trinh Ada. ");
        break;
        
        case 'a':
        printf( "\n ban da chon ngon ngu lap trinh Ada. ");
        break;

        case 'B':
        printf( "\n ban da chon ngon ngu lap trinh Basic. ");
        break;

        case 'b':
        printf( "\n ban da chon ngon ngu lap trinh Basic. ");
        break;

        case 'C':
        printf( "\n ban da chon ngon ngu lap trinh COBOL. ");
        break;

        case 'c':
        printf( "\n ban da chon ngon ngu lap trinh COBOL. ");
        break;

        case 'D':
        printf( "\n ban da chon ngon ngu lap trinh dBASE III. ");
        break;

        case 'd':
        printf( "\n ban da chon ngon ngu lap trinh dBASE III. ");
        break;

        case 'F':
        printf( "\n ban da chon ngon ngu lap trinh Fortran. ");
        break;

        case 'f':
        printf( "\n ban da chon ngon ngu lap trinh Fortran. ");
        break;

        case 'P':
        printf( "\n ban da chon ngon ngu lap trinh Pascal. ");
        break;

        case 'p':
        printf( "\n ban da chon ngon ngu lap trinh Pascal. ");
        break;

        case 'V':
        printf( "\n ban da chon ngon ngu lap trinh Visual C++. ");
        break;

        case 'v':
        printf( "\n ban da chon ngon ngu lap trinh Visual C++. ");
        break;

        default:
        printf( "\n Invalid. ");
        break;
    }
    return 0;
}