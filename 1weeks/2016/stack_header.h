#ifndef STACK
#define STACK

#define v_type int

typedef struct Stack {
	int size;
	int top;
	v_type* index;
}stack; 

void init_stack(stack*);
void push_stack(stack*,v_type);
v_type pop_stack(stack*);


#endif
