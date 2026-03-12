#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(const vector<string> &layers, int averageTime){
        return layers.size()*averageTime;
    }
    
    amount quantities(const vector<string> &ingredients){
        amount res{0,0};
        int n= ingredients.size();
        for(int i=0; i<n;i++){
            if(ingredients[i]=="noodles") res.noodles+=50;
            if(ingredients[i]=="sauce") res.sauce+=0.2;
        }
        return res;
    }

    void addSecretIngredient(vector<string> &ingredients, const vector<string> &newIngre){
        ingredients.back() = newIngre.back();
    }

    void addSecretIngredient(vector<string> &ingredients, string newIngre){
        ingredients.back()=newIngre;
    }

    vector<double> scaleRecipe(const vector<double> &amounts, int portions){
        vector<double> res;
        int n = amounts.size();
        for (int i=0; i<n;i++){
            res.push_back((amounts[i]/2)*portions);
        }
        return res;
    }
    
}
