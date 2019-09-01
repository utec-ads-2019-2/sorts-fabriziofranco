#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO


            for (int gap=int(size/2);gap > 0; gap/=2){
                for (int id_elemento_de_comparacion = gap; id_elemento_de_comparacion < int(size); id_elemento_de_comparacion ++){
                    int temporal = elements[id_elemento_de_comparacion];
                    int iteador;
                    for (iteador = id_elemento_de_comparacion; iteador >= gap && elements[iteador - gap] > temporal; iteador -= gap)
                        elements[iteador] = elements[iteador - gap];
                    elements[iteador] = temporal;
                }
            }
        }

        inline string name() { return "ShellSort"; }
};

#endif