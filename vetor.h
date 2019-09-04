#ifndef VETOR_H
#define VETOR_H

#include <sstream>

using namespace std;

class Vetor
{
private:
    int tam, *A, operacoes;
    void mergeSort(int l, int r, int m);
    int particao(int l, int r);
public:
    Vetor();
    ~Vetor();
    friend class Heap;
    int getTam() const;
    string getA() const;
    void criarVetor(int value);
    void insertionSort();
    void bubbleSort();
    void mergeSort(int l, int r);
    void quickSort(int l, int r);
    void shellSort();
    void montaVetorAleatorio();
    void montaVetorCrescente();
    void montaVetorDecrescente();
};

#endif // VETOR_H
