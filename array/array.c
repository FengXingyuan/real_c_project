
#include<stdio.h>
#include"include/array.h"
#define _MY_STACK_H 5
#define _MY_QUEUE_H 5
int SqStack[_MY_STACK_H];
int top=0;
int QUQueue[_MY_QUEUE_H];
int count = 0;
void push_stack(int x)
{
	SqStack[top++]=x;
}

int pop_stack()
{
	int e;
	top--;
	e=SqStack[top];
	return e;
}


int capacity_stack()
{
	return _MY_STACK_H;
	
}


int size_stack()
{
	return top;
}

int is_empty_stack()
{
	if(top==0)
		return 1;
	else
		return 0;

}

int is_full_stack()
{
	if(top==_MY_STACK_H)
		return 1;
	else 
		return 0;
}

void push_queue(int x)
{
	QUQueue[count++]=x;
}

int pop_queue()
{
	int e;
	int i;
	e=QUQueue[0];
	for(i=0;i<count;i++)
	{
		QUQueue[i]=QUQueue[i+1];
	}
	count--;
	return e;
}


int capacity_queue()
{
	return _MY_QUEUE_H;
	
}


int size_queue()
{
	return count;
}

int is_empty_queue()
{
	if(count==0)
		return 1;
	else
		return 0;

}

int is_full_queue()
{
	if(count==_MY_QUEUE_H)
		return 1;
	else 
		return 0;
}



