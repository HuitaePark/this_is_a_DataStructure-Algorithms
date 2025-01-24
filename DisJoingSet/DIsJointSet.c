#include "DIsJointSet.h"


void Ds_UnionSet(DisJointSet* Set1,DisJointSet* Set2){
    Set2 = DS_FindSet(Set2);
    Set2->Parent = Set1;
}
DisJointSet* DS_FindSet(DisJointSet* Set){
    while (Set->Parent != NULL)
    {
        Set = Set->Parent;
    }
    return Set;
}
DisJointSet* DS_MakeSet(void* NewData){
    DisJointSet* NewNode = (DisJointSet*)malloc(sizeof(DisJointSet));
    NewNode->Data = NewData;
    NewNode->Parent = NULL;

    return NewNode;
}
void DS_DestroySet(DisJointSet* Set){
    free(Set);
}