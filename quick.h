#ifndef QUICK_H
#define QUICK_H

#include "sort.h"
class QuickSort : public Sort {
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}

    void swap(int* a,int *b){
        int t=*a;
        *a=*b;
        *b=t;}


    int ordenar_particion(int primer_id,int pivote_id){

        int pivote = elements[pivote_id];
        int actual_id = primer_id;
        for (int comparador = primer_id; comparador <pivote_id; comparador++){

            if (elements[comparador] <pivote){
                swap(&elements[actual_id], &elements[comparador]);
                actual_id++;
            }
        }
        swap(&elements[actual_id], &elements[pivote_id]);
        return actual_id;
    }


    void quicksort( int primer_id, int ultimo_id){

        if (primer_id < ultimo_id){
            int pivote = ordenar_particion(primer_id, ultimo_id);
            quicksort(primer_id,pivote - 1);
            quicksort( pivote + 1, ultimo_id);
        }
    }

    void execute(){
        quicksort(0,size-1);
    }

        inline string name() { return "QuickSort"; }
};

#endif