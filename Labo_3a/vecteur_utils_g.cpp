#include <iostream>
#include <vector>
#include "vecteur_utils_g.h"

using namespace std;

ostream& operator<<(ostream& lhs, const vector<T>& rhs){
    lhs << "[";
    for (size_t i = 0; i < rhs.size(); ++i) {
        lhs << rhs[i];
        if(i < rhs.size() - 1) {
            lhs << ", ";
        }
    }
    return lhs << ']';
}