#include<stdio.h>

main()
{
    int A, B, O, S;
    A=300; /* muc thuong loai A */   
    B=250; /* muc thuong loai B */
    O=100; /* muc thuong cac loai khac (others) */
    S=2000; /* luong nhan vien hang thang (salary) */
    
    printf( "\n muc luong nhan vien loai A la: %d", S+A);
    printf( "\n muc luong nhan vien laoi B la: %d", S+B);
    printf( "\n muc luong nhan vien cac loai khac la: %d", S+O);

    return 0;
}