//Nhập vào 2 xâu S1, S2 và một số nguyên k.
// Hãy chèn xâu S1 vào S2 tại vị trí k và đưa ra màn hình (giả thiết xâu S2 được khai báo đủ lớn).
#include<stdio.h>
#include<string.h>

int main()
{
    char xau1[100], xau2[100];
    int i, k;

    printf("\nNhap vao xau 1: ");
    gets(xau1);
    printf("\nNhap vao xau2: ");
    gets(xau2);
    printf("\nChen xau s1 vao s2 tai vi tri: ");
    scanf("%d", &k);

    for (i=0; i <= strlen(xau2); i++)
    {
        if (i == k)
        {
            printf(" %s ", xau1);
        }
        printf("%c", xau2[i]);

    }

}
