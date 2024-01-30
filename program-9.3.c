#include<stdio.h>

 main()
{
  	int i = 1, ans;
 
  	printf("Enter the Any Value : ");
  	scanf("%d", &ans);
  
  	do{
		if(i % 2 == 0){
			printf("%d ",i);
		}
		i++;
		
	} while(i <= ans);

}
