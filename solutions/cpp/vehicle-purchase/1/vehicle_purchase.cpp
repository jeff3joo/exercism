#include <algorithm>
#include "vehicle_purchase.h"

namespace vehicle_purchase {

bool needs_license(std::string kind) {
    if(kind == "car" || kind == "truck") return true;
    return false;
}

std::string choose_vehicle(std::string option1, std::string option2) {

    
    if (option1<option2){
        return (option1 + " is clearly the better choice.");
    }
    return (option2 + " is clearly the better choice.");
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    if(age<3) return original_price*80/100;
    if(age>=10) return original_price*50/100;
    return original_price*70/100;
}

}  // namespace vehicle_purchase
