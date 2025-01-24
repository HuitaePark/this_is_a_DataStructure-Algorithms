#ifndef DISJOINTSET_H
#define DISJOINTSET_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tagDisJointSet{
    struct tagDisJointSet* Parent;
    void* Data;
}DisJointSet;

void Ds_UnionSet(DisJointSet* Set1,DisJointSet* Set2);
DisJointSet* DS_FindSet(DisJointSet* Set);
DisJointSet* DS_MakeSet(void* NewData);
void DS_DestroySet(DisJointSet* Set);

#endif