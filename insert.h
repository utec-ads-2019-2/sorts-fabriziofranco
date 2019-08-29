#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        // TODO

        for(int numero_de_elementos_ordenados=1;numero_de_elementos_ordenados<int(size);numero_de_elementos_ordenados++){
            size_t elemento_adyacente=elements[numero_de_elementos_ordenados];
            int iterador=numero_de_elementos_ordenados-1;
            while(elemento_adyacente<elements[iterador] && iterador>=0){
                elements[iterador+1]=elements[iterador];
                iterador--;
            }
            elements[iterador+1]=elemento_adyacente;

        }

    }

    inline string name() { return "InsertSort"; }
};

#endif