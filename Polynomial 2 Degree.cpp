#include <stdio.h>
#include <string.h>
char poly[100],*tok,s_num[100][100];
int num=0,a=0,b=0;
main(){
    printf("Polynomial:");
    fgets(poly,100,stdin);
    tok = strtok(poly,"+");
	while(tok!=NULL){
		/*fputs(tok,stdout);*/
		
		while(*tok != '\0'){
			s_num[a][b] += *tok - '0';	
			tok++;
		}
		//printf("%d\n",num);  
		tok = strtok(NULL,"+");
	}
	printf("%d",num);
  
	                    
}
