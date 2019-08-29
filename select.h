#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO

            for(size_t numero_de_iteracion=0;numero_de_iteracion<size;numero_de_iteracion++){
                int id_del_minimo_elemento=numero_de_iteracion;
                for(size_t primer_elemento_considerado=numero_de_iteracion;primer_elemento_considerado<size;primer_elemento_considerado++){
                    if(elements[primer_elemento_considerado]<elements[id_del_minimo_elemento])
                        id_del_minimo_elemento=primer_elemento_considerado;
                    }
                swap(elements[numero_de_iteracion],elements[id_del_minimo_elemento]);
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif