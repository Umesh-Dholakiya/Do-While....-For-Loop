#include <stdio.h>

main()
{
    int n1 = 0, n2 = 1, num3 = 0, i, ans;

    printf("Enter number of Number: ");
    scanf("%d", &ans);

    printf("Fibonacci Series : ");

    for(i = 0; i <= ans; i++)
    {
        printf("%d ", num3);
		 
        n1 = n2;    
        n2 = num3;  
		num3 = n1 + n2;      
    }
}

