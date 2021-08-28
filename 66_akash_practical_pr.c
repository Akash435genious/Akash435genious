#include<stdio.h>
#include<conio.h>
int main()
{   int num, sum, i, number, count, n=1;
    printf("Enter N Digit's Number: ");
    scanf("%d", &num);
    number = num;
//get the counter till then we have to run the loop
    for(count = 0 ;number!=0 ; count ++)
    {   number = number/10;
            }
    for(i=1; i<count; i++)
    {   n = n * 10;
        n = n + 1;
    }
    sum = num + n;
    printf("\nOutput: %d", sum);

    return 0 ;
}

