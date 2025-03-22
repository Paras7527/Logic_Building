//Data Structure:Linear Linked List
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node         //Self Refrential Structure
{
    int data;
    struct node *next;
};
int main()
{
    struct node obj;

    printf("Size of node is: %lu",sizeof(obj));

    return 0;
}