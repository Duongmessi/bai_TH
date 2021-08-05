#include<stdio.h>
#include<ctype.h>

#define length 50
int main()
{
    char str[length];
    int i=0;
    
    printf("\nNhap vao mot xau: "); gets(str);
    printf("\nXau ban dau: %s", str);
    i=0;
    while (str[i] != '\0')
    {
        if ( (i == 0) && (islower(str[i])) )
        {
            str[i] = toupper(str[i]);
        }
        else if ((isspace(str[i-1])) && (!isspace(str[i])) )
        {
            str[i] =toupper(str[i]);    
        }
        i++;

    }
    
    i=1;
    while (str[i] != '\0')
    {
        if (( isspace(str[i-1])  && ( isupper(str[i]) )))
        {
            i++;
            continue;   
        }

        if (isupper(str[i]) )
        {
            str[i] =tolower(str[i]);
        }
        i++;

    }

    printf("\nXau ky tu sau khi fix: %s", str);

    


}