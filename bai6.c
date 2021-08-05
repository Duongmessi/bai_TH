//Nhập vào xâu kí tự, đếm số kí tự chữ hoa, chữ thường và chữ số trong xâu.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int count = 0, count2 = 0, count3 = 0;
    int i;
    printf("Nhap vao mot xau ky tu: "); gets(str);

    i = 0;
    while (str[i] != '\0')
    {
        //chu thuong.
        if ( islower(str[i]) != 0 )
        {
            count++;
        }
        //Chu hoa
        if ( isupper(str[i]) != 0 )
        {
            count2++;
        }
        //number.
        if( isdigit(str[i]) != 0 )
        {
            count3++;
        }
        i++;
    }
    printf("\nSo ky tu chu hoa: %d", count2);
    printf("\nSo ky tu thuong: %d", count);
    printf("\nSo chu so trong xau: %d", count3);

}