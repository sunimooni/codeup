
#include<stdio.h>
#include"stack_header.h"

int main(){
	stack a;
	int input,result=0;
	init_stack(&a);
	for(int i=0;i<a.size;i++){
		scanf("%d",&input);
		if(input){
			push_stack(&a,input);
		}else{
			pop_stack(&a);
		}
	}
	for(int i=0;i<=a.top;i++){
		result+=a.index[i];
	}
	printf("result is %d\n",result);
	return 0;
}
