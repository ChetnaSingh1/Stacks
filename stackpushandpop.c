#include <stdio.h>
#include <stdlib.h>

// run program using the compiler

//program which enters the student details

//stacks
#define max 10

int tos=-1;
int stack[10];
int x,ch;

int push(int a)
{
if (tos==max-1)
printf("Stack overflow");
else
{
tos=tos+1;
stack[tos]=x;
}
}

int pop(int a)
{
if(tos==-1)
printf("Stack underflow");
else
{
stack[tos]=0;
tos=tos-1;
}
}

int main()
{
int i;

for(i=0;i<=max;i++)
{
printf("\nEnter choice 1.push 2.pop ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter value ");
       scanf("%d",&x);
       push(x);
       break;
case 2: pop(x);
       break;
}
for(i=0;i<=tos;i++)
printf("%d ",stack[i]);
}

}
