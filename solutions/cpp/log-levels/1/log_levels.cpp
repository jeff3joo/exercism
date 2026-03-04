#include <string>

namespace log_line {
std::string message(std::string line) {
    // std::string qu = line.find(":");
    return(line.substr(line.find(":")+2));
}

std::string log_level(std::string line) {
    // std::string qu = ;
    return(line.substr(1,line.find(":")-2));
}

std::string reformat(std::string line) {
    // return the reformatted message
    return((line.substr(line.find(":")+2))+" ("+line.substr(1,line.find(":")-2)+")");
}
}  // namespace log_line
