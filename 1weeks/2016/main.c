#include<stdio.h>
#include"stack_header.h"

int main(){
	int size,input,count=0;
	int temp;
	stack a;
	init_stack(&a);
	scanf("%d",&size);
	scanf("%d",&input);
	for(int i=0;i<size;i++){	
		temp = input%10;
		input = input/10;
		push_stack(&a,temp);
	}
	while(1){
		temp = pop_stack(&a);
		count++;
		if(temp==-1)break;
		if(count == 3){
			printf(",");
			count=0;
		}
		printf("%d",temp);
	}
	return 0;
}
