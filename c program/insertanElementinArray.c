#include<stdio.h>
main(){
    int log;
    int new;
    printf("enter the index where element will be inserted");
    scanf("%d",&log);
    printf("enter the element to be inserted");
    scanf("%d",&new);
    insertAnitem(log,new);
}
void insertAnitem(log,new)
{
    int a[5]={1,2,3,4,5};
     int i,last;
    // printf("the previous Array is");
    // for(i=0;i<5;i++){
    //     printf("&d",a[i]);
    //}
   
    last=4;
    for(i=log;i<=last;i++)
    {
        a[i+1]=a[i];
    }
    a[log]=new;
    printf("the array elements are");
    for(i=0;i<6;i++)
    {
        printf("%d",a[i]);
    }
}