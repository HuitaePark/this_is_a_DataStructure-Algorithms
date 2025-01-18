#include "CircularDoublyLinkedList.h"

//노드 생성
Node* CDLL_CreateNode(ElementType NewData){
    Node* NewNode = (Node*)malloc(sizeof(Node);

    NewNode->Data = NewData; //데이터를 저장한다
    NewNode->PrevNode = NULL; //이전 노드에 대한 포인터도 NULL로 초기화한다.
    NewNode->NextNode = NULL; //다음 노드에 대한 포인터는 NULL로 초기화한다.
    return NewNode;
}
//노드 소멸
void CDLL_DestroyNode(Node* Node){
    free(Node);
}
//노드 추가
void CDLL_AppendNode(Node** Head, Node* NewNode){
    //해드 노드가 NULL이라면 새로운 노드가 Head가 된다.
    if((*Head) == NULL){
        *Head = NewNode;
        (*Head)->NextMode = *Head;
        (*Head)->PrevMode = *Head;
    }
    else{
        //테일헤드 사이에 NewNode를 연결한다.
        Node* Tail = (*Head)->PrevNode;
        
        Tail->NextNode->PrevNode = NewNode;
        Tail->NextNode = NewNode;
        
        NewNode->NextNode = (*Head);
        NewNode->PrevNode = Tail;
    }
}
//노드 삽입
void CDLL_InsertAfter(Node* Current, Node* NewNode){
    NewNode->NextNode = Current->NextNode;
    NewNode->PrevNode = Current;

    if (Current -> NextNode != NULL)
    {
        Current->NextNode->PrevNode = NewNode;
        Current->NextNode = NewNode;
    }
    
}

//노드 제거
void CDLL_RemoveNode(Node** Head, Node* Remove){
    if ((*Head) == Remove)
    {
        (*Head)->PrevNode->NextNode = Remove->NextNode;
        (*Head)->NextNode->PrevNode = Remove->PrevNode;
        
        *Head = Remove->NextNode;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
    else
    {
        Remove->PrevNode->NextNode = Remove->NextNode;
        Remove->NextNode->PrevNode = Remove->PrevNode;
       
        Remove-> PrevNode = NULL;
        Remove-> NextNode = NULL;
    }
}
//노드 탐색
Node* CDLL_GetNodeAt(Node* Head, int Location){
    Node* Current = Head;

    while (Current != NULL && (--Location) >= 0)
    {
        Current = Current->NextNode;
    }
    return Current;
}
//노드 개수 세기
int DLL_GetNodeCount(Node* Head){
    int Count = 0;
    Node* Current = Head;

    while (Current != NULL)
    {
        Current = Current->NextNode;
        Count++;
    }
    return Count;
}

void PrintNode(Node* _Node){
    if (_Node->PrevNode == NULL)
    {
        printf("Prev: NULL\n");
    }
    else
    {
        printf("Prev : %d", _Node->PrevNode->Data);
        printf("Current: %d", _Node->Data);
    }
    if (_Node->NextNode == NULL)
    {
       printf("Next : NULL\n");
    }
    else
    {
        printf("Next: %d\n", _Node->NextNode->Data);
    }
    
}