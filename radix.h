#ifndef RADIX_H
#define RADIX_H
#include "sort.h"
#include <vector>
class RadixSort : public Sort {
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}


    int Obtener_maximo(){
        int maximo = elements[0];
        for (int i = 1; i < int(size); i++){
            if (elements[i] > maximo)
                maximo = elements[i];}
        return maximo;
    }


    void Ordenar_por_digito(int digito){

        int array_temporal[size];
        int i, bins[10] = {0};

        for (i = 0; i < int(size); i++)
            bins[ (elements[i]/digito)%10]++;


        for (int actual = 1; actual < 10; actual++)
            bins[actual] += bins[actual - 1];


        for(i=int(size)-1;i>=0;i--){
            array_temporal[bins[ (elements[i]/digito)%10 ]-1]=elements[i];
            bins[(elements[i]/digito)%10]--;
        }


        for (i = 0; i < int(size); i++)
            elements[i] = array_temporal[i];
    }


    void execute(){
        int m = Obtener_maximo();
        for (int digito_actual = 1; m/digito_actual > 0; digito_actual *= 10){
            Ordenar_por_digito(digito_actual); }
    }
        inline string name() { return "RadixSort"; }
};

#endif