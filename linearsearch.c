#include <stdio.h>
void main()
{
    int b, flag = 0;
    int arr[] = {2, 13, 14};
    b = 72;
    // for(int i=0; i<arr)
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size of array: %d", size);
    for (int i = 0; i < size; i++)
    {
        if (b == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("we got the item");
    }
    else
    {
        printf("we didnot got ");
    }
}