#include<stdio.h>
void Selection(int*pa,int n);
int main()
{ int a[10],n,i;
  do
  {
     printf("Input n(1<=n<=10):\n");
     scanf("%d",&n);
  }while(n<1||n>10);
  printf("Input %d elements:\n",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("原始数组是：\n");
  for(i=0;i<n;i++)
    printf("%5d",a[i]);
  printf("\n");
  Selection(a,n);
  printf("排序后数组是：\n");
  for(i=0;i<n;i++)
    printf("%5d",a[i]);
  printf("\n");
  return 0;
}
void Selection(int*pa,int n)
{
  int i,k,temp,index;
  for(k=0;k<n-1;k++)
  {
    index=k;
    for(i=k+1;i<n;i++)
      if(pa[i]<pa[index])
        index=i;
    if(index!=k)
      {
        temp=pa[index];
        pa[index]=pa[k];
        pa[k]=temp;
      }
  }
}
  


