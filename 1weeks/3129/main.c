#include<stdio.h>
#include"stack_header.h"

int main(){
	char a[100];
	stack b;
	init_stack(&b);
	printf("input string : ");
	scanf("%s",a);
	for(int i=0;a[i];i++){
		if(a[i]=='('){
			push_stack(&b,'(');	
		}else if(a[i]==')'){
			if(pop_stack(&b)==-1){
				printf("bad\n");
				return 0;	
			}
		}
	}
	printf("good\n");
	return 0;

}
