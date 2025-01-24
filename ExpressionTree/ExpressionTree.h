#ifndef EXPRESSION_TREE
#define EXPRESSION_TREE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char ElementType;

typedef struct tagETNode
{
    struct tagETNode* Left;
    struct tagETNode* Right;

    ElementType Data;
}ETNode;

ETNode* ET_CreateNode(ElementType NewData);
void ET_DestoryNode(ETNode* Node);
void ET_DestoryTree(ETNode* Node);

void ET_PreorderPrintTree(ETNode* Node);
void ET_InorderPrintTree(ETNode* Node);
void ET_PostorderPrintTree(ETNode* Node);
void ET_BulidExpressionTree(char* PostfixExpression, ETNode** Node);
double ET_Evaluate(ETNode* Tree);

#endif