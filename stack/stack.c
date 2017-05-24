
#include<stdio.h>
#include"include/stack.h"
#define _MY_STACK_H 5

int SqStack[_MY_STACK_H];
int top=0;

void push(int x)
{
	SqStack[top++]=x;
}

int pop()
{
	int e;
	top--;
	e=SqStack[top];
	return e;
}


int capacity()
{
	return _MY_STACK_H;
	
}


int size()
{
	return top;
}

int is_empty()
{
	if(top==0)
		return 1;
	else
		return 0;

}

int is_full()
{
	if(top==_MY_STACK_H)
		return 1;
	else 
		return 0;
}



