#include <stdio.h>

void main()
{

//FILE* fp = freopen("input.txt", 'r');
//freopen("subarrays_in.txt", "r", stdin);
int n;
printf("Enter length of array:");
scanf("%d",&n);
int arr[n];
int i,j,k,c=0,s;
printf("Enter elements of array\n");
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
printf("Negative subarrays:\n");
for(i=0;i<n;i++)
  { 
    int p=i+1;
    if(arr[i]<0)
    {
      c++;
      printf("%d\n",arr[i]);
    }
    for(j=1;j<n-i;j++)
      {
        s=arr[i];
       for(k=i+1;k<=p;k++)
         {
            s+=arr[k];
         }
       if(s<0)
        {
          c++;
          printf("%d ",arr[i]);
          for(k=i+1;k<=p;k++)
            printf("%d ",arr[k]);
          printf("\n");
        }
       p++;
  
      }
  }
printf("Number of negative subarrrays=%d\n",c);
}

