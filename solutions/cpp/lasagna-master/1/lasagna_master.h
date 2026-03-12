#pragma once
#include <vector>
#include <string>

using namespace std;

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
    int preparationTime(const std::vector<std::string> &layers, int averageTime=2);
    amount quantities(const vector<string> &ingredients);
    void addSecretIngredient(vector<string> &ingredients, const vector<string> &newIngre);
    void addSecretIngredient(vector<string> &ingredients, string newIngre);
    vector<double> scaleRecipe(const vector<double> &amounts, int portions);

}  
