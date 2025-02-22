#include <stdio.h>

void swap(int* A,int* B){
    int temp = *A;
    *A = *B;
    *B = temp;
}
int Partion(int DataSet[], int Left, int Right){
    int First = Left;
    int Pivot = DataSet[First];

    ++Left;

    while (Left<=Right)
    {
        while (DataSet[Left]<= Pivot && Left < Right)
            ++Left;
        while (DataSet[Right]>= Pivot && Left <= Right)
            --Right;

        if (Left<Right)
        {
            swap(&DataSet[Left],&DataSet[Right]);
        }
        else
            break;
    }
        swap(&DataSet[First],&DataSet[Right]);

        return Right;
    
}
    
    

void QuickSort(int DataSet[], int Left, int Right){
        if (Left<Right)
        {
            int Index = Partion(DataSet,Left,Right);

            QuickSort(DataSet,Left,Index-1);
            QuickSort(DataSet,Index+1,Right);
        }
        
    }
int main(void){
    int DataSet[] = {6,4,2,3,1,5};
    int Length = sizeof(DataSet)/sizeof(DataSet[0]);

    QuickSort(DataSet,0,Length-1);

    for (int i = 0; i < Length; i++)
    {
        printf("%d ",DataSet[i]);
    }

    printf("\n");
    return 0;
}