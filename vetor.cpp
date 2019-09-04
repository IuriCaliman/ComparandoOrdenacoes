#include "vetor.h"
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>

using namespace std;

void Vetor::mergeSort(int l, int r, int m)
{
        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;
        int L[n1], R[n2];

        for (i = 0; i < n1; i++)
            L[i] = A[l + i];
        for (j = 0; j < n2; j++)
            R[j] = A[m + 1+ j];

        i = 0;
        j = 0;
        k = l;

        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                A[k] = L[i];
                i++;
            }
            else
            {
                A[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            A[k] = L[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            A[k] = R[j];
            j++;
            k++;
        }
}

int Vetor::particao(int l, int r)
{
    int pivozao = A[r];
    int i = (l - 1);

    for(int j = l; j < r; j++)
    {
        if(A[j] <= pivozao)
        {
            i++;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }

    int aux = A[i+1];
    A[i+1] = A[r];
    A[r] = aux;

    return i + 1;
}

Vetor::Vetor()
{
    tam=0;
    operacoes=0;
}

Vetor::~Vetor()
{
    delete [] A;
}

int Vetor::getTam() const
{
    return tam;
}

string Vetor::getA() const
{
    string v;
    stringstream a;
    for(int i=0;i<tam;i++){
        a << A[i] << "\t";
        v = a.str();
    }

    return v;
}

void Vetor::criarVetor(int value)
{
    tam=value;
    delete [] A;
    A = new int [tam];
}

void Vetor::insertionSort()
{
    int key=0;
    int i=0;
    for(int j=1;j<tam;j++)
    {
        key = A[j];
        i=j-1;
        while(i>=0 && A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}

void Vetor::bubbleSort()
{
    for(int fim=tam-1;fim>0;--fim)
    {
        for(int i=0;i<fim;++i)
        {
            if(A[i] > A[i+1])
            {
                int aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
            }
        }
    }
}

void Vetor::mergeSort(int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(l, m);
        mergeSort(m+1, r);

        mergeSort(l, r, m);
    }
}

void Vetor::quickSort(int l, int r)
{
    if(l > r) return;
    int q = particao(l, r);
    quickSort(l, q - 1);
    quickSort(q + 1, r);
}

void Vetor::shellSort()
{
    int i, j, value;
    int gap = 1;
    while(gap < getTam())
    {
        gap = 3*gap + 1;
    }
    while(gap > 1)
    {
        gap /= 3;
        for(i = gap; i < getTam(); i++)
        {
            value = A[i];
            j = i - gap;
            while(j >= 0 && value < A[j])
            {
                A[j + gap] = A[j];
                j -= gap;
            }
            A[j + gap] = value;
        }
    }
}

void Vetor::montaVetorAleatorio()
{
    srand(time(0));
    for(int i=0;i<tam;i++)
        A[i]=rand();
}

void Vetor::montaVetorCrescente()
{
    for(int i=0;i<tam;i++)
        A[i]=i+1;
}

void Vetor::montaVetorDecrescente()
{
    int j=tam;
    for(int i=0;i<tam;i++)
        A[i]=j--;
}
