#include <stdio.h>
#include <conio.h>
float a1,d,an;
int n,topic;
char a[1];
main(){
	do{
		printf("****************************\n");
		printf("*****Series Calculation*****\n");
		printf("****************************\n");
		printf("{Type number to use these functions}\n\n");
		printf("--1.Find Index of number\n\n");
		printf("--2.Find The sum of the first number to specific number \n\n");
		printf("Type Number:");
		scanf("%d",&topic);
		
		switch(topic){
			case 1 : 	printf("****************************\n");
						printf("*******Index of number******\n");
						printf("****************************\n");
						printf("First number:");
						scanf("%f",&a1);
						printf("Common Difference:");
						scanf("%f",&d);
						printf("Find Number At:");
						scanf("%d",&n);
						an = a1+(n-1)*d;
						printf("Number At %d is: %.2f\n\n",n,an);
						
						for(int i=1;i<=n;i++){
							printf("%.2f ",a1);
							a1 += d;
						}
						printf("\n");
						break;
						
			case 2 :	printf("***********************************\n");
						printf("**********The Sum of Number********\n");
						printf("***********************************\n");
			
		}
		

		printf("\nDo you want to continue?(y/n):");
		a[0] = getch();
		printf("\n");
				
	}while(a[0]!='n');

}
