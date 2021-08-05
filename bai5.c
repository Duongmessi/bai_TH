#include<stdio.h>
#define length 50
//Nhập vào 1 dãy số có nhiều hơn 10 phần tử, in ra màn hình 5 giá trị nhỏ nhất và 5 giá trị lớn nhất.

int main()
{
    int i, size, arr[length], tmp, k;
    do
    {
        printf("Nhap vao do dai day so ( >10 phan tu): "); scanf("%d", &size);
    }while(size < 10);

    printf("Nhap vao cac phan tu:\n");
    for ( i = 0; i < size; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    //sap xep mang tang dan tu min --> max.
    for ( i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[i] < arr[j] )
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;

            }
        }
        
    }

    // printf("\nDay so sau khi sap xep la: ");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%3d", arr[i]);
    // }

    printf("\n5 so nho nhat la: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%3d", arr[i]);
    }

    printf("\n5 so lon nhat la: ");
    i = 0;
    k = size - 1;
    while(i < size-1)
    {
        printf("%3d", arr[k]);
        k--;
        i++;
        //dem nguoc lai, size-1 ung voi i=1 den khi i = 5. break.
        if (i == 5)
        {
            break;
        }
    }

}