#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    if(a%2==0)
     {b=a-1;}
    else
     {b=a;}
    for(int i=1;i<=a;i++){
     for(int j=1;j<=a;j++){
        if(i>1&&i<=b/2+1&&(j>=b/2+1-(i-1)&&j<=b/2+1+(i-1)))
         printf("*");
        else if(a%2==1&&i>b/2+1&&i<a&&(j<=a-(i-(b/2+1))&&j>=1+(i-(b/2+1))))
        printf("*");
        else if(a%2==0&&i>b/2+1&&i<a&&(j<=a-(i-(b/2+1))&&j>=0+(i-(b/2+1))))
        printf("*");
        else if((i==a||i==1)&&(j==b/2+1))
        printf("*");
        else
         printf(" ");
     }
    printf("\n");
    }
}