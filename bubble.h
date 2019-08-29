#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include <algorithm>

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
            for(size_t i=0;i<size-1;i++){
                for(size_t j=0;j<size-1-i;j++){
                    if(elements[j]>elements[j+1])
                        swap(elements[j],elements[j+1]);
                 }}}

        inline string name() { return "BubbleSort"; }
};

#endif