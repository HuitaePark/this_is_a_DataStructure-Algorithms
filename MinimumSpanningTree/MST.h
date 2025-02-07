#ifndef MST_H
#define MST_C

#include "../Graph/Graph.h"
#include "../PriorityQueue/PriorityQueue.h"
#include "../DisJoingSet/DisJointSet.h"

#define MAX_WEIGHT 36267

void Prim(Graph* G,Vertex* StartVertext,Graph* MST);
void Kruskal(Graph* G,Graph* MST);

#endif