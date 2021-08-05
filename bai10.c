/*
Một văn bản gồm không quá 60 dòng, mỗi dòng không quá 80 kí tự. 
Hãy viết chương trình thực hiện nhập vào một văn bản, sau đó

a. Nhập vào xâu s và chỉ ra vị trí xuất hiện của xâu S trong văn bản nếu có.
b. Thay tất cả các chuỗi "hanoi" (nếu có) bằng chuỗi "HANOI".
c. Đếm xem trong văn bản có bao nhiêu từ (các từ phân cách bởi dấu cách).

*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i, j, n; 
    char str1[60][80], str2[80]; // 60 dong, moi dong 80 ky tu.
    char *see;

    printf("Nhap vao mot doan van (enter 1 lan de xuong dong, 2 lan de stop): \n");
    n = 0;
    do
    {
        printf(""); gets(str1[n]);

        if(str1[n][0] != '\0')
        {
            n++;
        }
        else
        {
            break;
        }

        if(n == 60) break;
    }while(1);

    // printf("\nDoan van vua nhap: \n"); //in ra doan van vua nhap.
    // for (i = 0; i < n; i++)
    // {
    //     printf("%s\n", str1[i]);
    // }

    printf("\nNhap vao mot xau can tim: ");
    gets(str2);
  
    //tim vi tri.
    printf("\nVi tri cua xau '%s' la ", str2);
    for ( i = 0; i < n; i++)
    {
        int k = 0;
        do
        {
            see = strstr(str1[i] + k, str2);
            if (see != NULL)
            {
                k = see - str1[i];
                printf("dong thu %d , ky tu thu %d", i+1, k+1);
                k++;
            }
            
        } while (see != NULL);
        
    }

    //Thay tất cả các chuỗi "hanoi" (nếu có) bằng chuỗi "HANOI".  
    for ( i = 0; i < n; i++)
    {
        int k = 0;
        do
        {
            see = strstr(str1[i] + k, "hanoi");
            if (see != NULL)
            {
                k = see - str1[i];
                for(j = k; j < k + 5; j++)
                {
                    str1[i][j] = toupper(str1[i][j]);
                }
                k++;
            }
            
        } while (see != NULL);
        
    }
    printf("\nSau khi viet hoa 'hanoi': \n");
   //in ra doan van vua nhap.
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str1[i]);
    }

    //c. Đếm xem trong văn bản có bao nhiêu từ (các từ phân cách bởi dấu cách).
    int count=0;
    int x = 0, y = 0, d = 0;  //mỗi dòng x không quá 80 kí tự. x la dong, y la ky tu.

    for ( x = 0; x < n; x++)
    {
        count = strlen(str1[x]); //dem so ky tu tren moi dong.
        for ( y = 0; y < count; y++)
        {
            if( (isspace(str1[x][y-1])) && (!isspace(str1[x][y])) ) //kiem tra co bao nhieu tu.
            {
                d++;
            }
        }
        
    }
    


    printf("\nSo tu trong doan van tren la: %d", d+n); //phai cong voi n, vi may tinh bi bo di n dong kien d bi thieu.
    

 
        
    
    





}