#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int arr[3],*p,i,n;
clrscr();
printf("\n enter the size");
scanf("%d",&n);
p = (int*)malloc(n * sizeof(int));

for(int k =0; k<n; k++){
 scanf("%d", p+k);
}

for(int l =0 ; l<n; l++ ){
 printf("\n %d",*(p+l));
}

// static
for(i=0;i<3;i++)
{
scanf("%d",&arr[i]);
}
printf("\n element is");
for(i=0;i<3;i++)
{
printf("\n%d",arr[i]);
}
getch();
}
