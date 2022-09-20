#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char poly[100],*p,temp[1],s_num[100];
int num[100],x=0;
main(){
	printf("Polynomial:");
	fgets(poly,100,stdin);
	
	//spilt char
	p = poly;
	while(*p!='\0'){
		//printf("%c\n",*p);
		temp[0] = *p;
		//printf("%s\n",s_num);
		switch(*p){
			case '-':
			case '+':			
				num[x] = atoi(s_num);
				strcpy(s_num,"");
				x++;
				break;

				
			default :strcat(s_num,temp);
				break;
		}
		
		
		p++;
	}
	if(*p=='\0'){
		num[x] = atoi(s_num);
		strcpy(s_num,"");
		x++;		
	}
	//End Of Process SpiltChar
	
	for(int u=0;u<x;u++){
		printf("%d\n",num[u]);
	}
	
}
