#include "pangram.h"

namespace pangram {
    bool is_pangram( const std::string& text){
        std::vector<bool>mark(26,false);
        int index;
        for(size_t i=0; i<text.size(); i++){
            if('a'<=text[i] && 'z'>=text[i]){
                index = text[i]-'a';
            }
            if('A'<=text[i] && 'Z'>=text[i]){
                index = text[i]-'A';
            }
            mark[index]=true;
        }
        for(size_t j =0; j<mark.size();j++){
            if(!mark[j]) return false;
        }
        return true;
    }
}
