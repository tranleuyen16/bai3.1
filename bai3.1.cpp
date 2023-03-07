#include<stdio.h>
int main()
{
    int n;
    int a[100];
    printf("\nNhap so luong phan tu n= ");
    do{
        scanf("%d", &n);
        if(n<=0){
            printf("\nNhap lai n= ");
        }
    }while(n<=0);
    
    for(int i=0; i< n; i++)
    {
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    int tg;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    printf("Mang sau khi nhap la:\n");
    for(int i=0; i< n; i++)
    {
        printf("%d \t",a[i]);
    }
    for(int i=0; i< n-1; i++)
    {
        for(int j=i+1; j< n; j++)
        if(a[i]>a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("\nMang sau khi sap xep la:\n");
    for(int i=0; i< n; i++)
    {
        printf("%d \t",a[i]);
    }
    
}