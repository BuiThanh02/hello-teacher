#include<stdio.h>

main()
{
    int M; /* so diem cua sinh vien (mark) */
    printf( "\n nhap so diem sinh vien theo thang diem 100: ");
    scanf( "%d", &M);
    printf( "\n so diem la: %d", M);

    if (M>=75)
    printf( "\n sinh vien xep loai A. ");
    else if (60 <= M && M<75)
    printf( "\n sinh vien xep loai B. ");
    else if (45 <= M && M < 60)
    printf( "\n sinh vien xep loai C. ");
    else if (35 <= M && M < 45)
    printf( "\n sinh vien xep loai D. ");
    else
    printf( "\n sinh vien xep loai E. ");

    return 0;
}