#include "heap.h"
#include "math.h"

void Heap::maxHeapify(int value)
{
    int maior = value;
    int l = left(value);
    int r = right(value);

    if(l < tamH && A[l] > A[maior])
    { maior = l; }
    if(r < tamH && A[r] > A[maior])
    { maior = r; }

    if(maior != value)
    {
        A[value] = A[value] + A[maior];
        A[maior] = A[value] - A[maior];
        A[value] = A[value] - A[maior];
        maxHeapify(maior);
    }
}

void Heap::setTamH(int value)
{
    tamH = value;
}

int Heap::getTamH()
{
    return tamH;
}

void Heap::buildMaxHeap()
{
    tamH = tam;
    for(int i = (floor(tamH/2) - 1); i >= 0; i--)
    {
        maxHeapify(i);
    }
}

int Heap::parent(int value)
{
    return floor(value/2);
}

void Heap::heapSort()
{
    buildMaxHeap();
    for(int i = tam - 1; i > 0; i--)
    {
        A[0] = A[i] + A[0];
        A[i] = A[0] - A[i];
        A[0] = A[0] - A[i];
        tamH--;
        maxHeapify(0);
    }
}

int Heap::left(int value)
{
    return 2*value + 1;
}

int Heap::right(int value)
{
    return (2*value) + 2;
}
