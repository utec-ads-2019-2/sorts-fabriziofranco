#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {       
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}



    void merge(int inicio, int mitad, int fin){
        int i, j, k;
        int size_1 = mitad - inicio + 1;
        int size_2 = fin - mitad;

        int Array_izquierda[size_1], Array_Derecha[size_2];

        for (i = 0; i < size_1; i++){
            Array_izquierda[i] = elements[inicio + i];}

        for (j = 0; j < size_2; j++){
            Array_Derecha[j] = elements[mitad + 1+ j];}

        i = 0; j = 0;
        k = inicio;
        while (i < size_1 && j < size_2){
            if (Array_izquierda[i] <= Array_Derecha[j]){
                elements[k] = Array_izquierda[i];
                i++;}
            else{
                elements[k] = Array_Derecha[j];
                j++;}
            k++;
        }

        while (i < size_1){
            elements[k] = Array_izquierda[i];
            i++;
            k++;}

        while (j < size_2){
            elements[k] = Array_Derecha[j];
            j++;
            k++;}
    }

    void mergeSort(int inicio, int fin){
        if (inicio < fin){
            int mitad = inicio+(fin-inicio)/2;

            mergeSort(inicio, mitad);
            mergeSort(mitad+1, fin);
            merge(inicio, mitad, fin);
        }
    }

    void execute() {
        mergeSort(0,int(size)-1);}



    inline string name() { return "MergeSort"; }
};

#endif