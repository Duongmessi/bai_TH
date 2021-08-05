//Nhập xâu kí tự, xóa các dấu cách dư thừa trong xâu.
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[100]p;
    int i, length;

    printf("\nNhap vao mot xau: "); gets(str);
    printf("\nXau ban vua nhap la: %s", str);

    length = strlen(str); 
    if (str[0] == 32 )
    {
        strcpy(&str[0], &str[1]);
    }
    
    for ( i = 0; i < length ; i++)
    {
        if( (isspace(str[i]))  && (isspace(str[i+1])) )
        {
            strcpy(&str[i], &str[i+1]);
            i--;


        }
    }
    
    printf("\nSau khi fix: %s", str);
    

    


}