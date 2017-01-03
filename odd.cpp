#include <stdio.h>
 
int main()
{
    int i, n;
     
    //Read the upper limit to print odd from user
    printf("Print odd numbers till: ");
    scanf("%d", &n);
 
    printf("All odd numbers from 1 to %d are: \n", n);
 
    /*
     * Starts a loop from 1 and increments its by 1
     */
    for(i=1; i<=n; i++)
    {
        /* Check if the number is odd then print */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
 
    return 0;
}
