//Write a program to find out the max number from given array using function
#include<stdio.h>
int findmax(int arr[],int size)
{
    int max;
    int i;
    for(i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    
    int arr[size],i;
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxnum=findmax(arr,size);
    printf("The maximum element is %d\n",maxnum);
}
