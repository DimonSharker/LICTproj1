#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp, i;
    scanf("%d", &num);
    //arr = (int*) malloc(num * sizeof(int));
    int arr[num];

    for(i = 0; i < num; i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num/2+1;i++){
        temp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1]=temp;
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
