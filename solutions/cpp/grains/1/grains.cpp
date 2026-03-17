#include "grains.h"

namespace grains {
    unsigned long long square(int board){
        unsigned long long res = 1;
        for(int i=2;i<=board;i++){
            res*=2;
        }
        return res;
    }

    unsigned long long total(){
        unsigned long long sum = 0;
        for (int i = 1; i <= 64; i++) {
            sum += square(i);
        }
        return sum;
    }
}