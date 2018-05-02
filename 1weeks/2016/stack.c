#include<stdio.h>
#include<stdlib.h>
#include"stack_header.h"

void init_stack(stack* s){
	s->size = 100;
	s->top = -1;
	s->index = (v_type *)malloc(sizeof(v_type)*s->size);	
}

void push_stack(stack *s,v_type in){
	s->top++;
	if(s->top == s->size){
		printf("stack is full\n");
		return;
	}
	s->index[s->top] = in;
}

v_type pop_stack(stack *s){
	if(s->top == -1){
		printf("stack is empty\n");
		return -1;
	}
	return s->index[s->top--];
}


