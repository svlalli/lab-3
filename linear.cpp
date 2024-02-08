#include <stdio.h>

int main()
{   int i,n,arr[i],target;
    printf("enetr size of array :");
    scanf("%d",&n);
    
    printf("enter elements in the array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a number u want to target :");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
       if(arr[i]==target)
         {
		 printf("%d is present ",target);
         break;
         }
         
        else
        {
         printf("%d isn't present ",&target);
        }
    }
         return 0;
}


