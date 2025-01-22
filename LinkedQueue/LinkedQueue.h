#ifndef Linked_QUEUE_H
#define Linked_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagNode
{
    char* Data;
    struct tagNode* NextNode;
}Node;


typedef struct tagLinkedQueue
{
    int Count;
    Node* Front;
    Node* Rear;

    Node* Nodes;
}LinkedQueue;

void LQ_CreateQueue(LinkedQueue** Queue);
void LQ_DestroyQueue(LinkedQueue* Queue);

Node* LQ_CreateNode(char* Data);
void LQ_DestroyNode(Node* _Node);

void LQ_Enqueue(LinkedQueue* Queue, Node* NewNode);
Node* LQ_Dequeue(LinkedQueue* Queue);

int CQ_IsEmpty(LinkedQueue* Queue);

#endif


