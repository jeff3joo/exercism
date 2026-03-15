#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string (std::string input){
        std::string out;
        for(int i=input.size()-1; i>=0; i--){
            out.push_back(input[i]);
        }
        return out;
    }
}
