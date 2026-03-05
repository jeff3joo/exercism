#include "leap.h"

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int num){
        if(num%4 == 0 && num%100!=0) return true;
        if(num%100 ==0 && num%400 == 0) return true;
        return false;
    }

}  // namespace leap
