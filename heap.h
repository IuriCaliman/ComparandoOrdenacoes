#ifndef HEAP_H
#define HEAP_H
#include "vetor.h"

class Heap : public Vetor
{
private:
    int tamH;
    void maxHeapify(int value);
public:
    void setTamH(int value);
    int getTamH();
    void buildMaxHeap();
    int parent(int value);
    void heapSort();
    int left(int value);
    int right(int value);
};

#endif // HEAP_H
