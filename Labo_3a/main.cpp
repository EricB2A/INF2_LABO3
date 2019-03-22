#include <iostream>
#include <vector>
#include <functional>
#include "vecteur_utils_g.h"

using namespace std;

int main(){
    // ordre trié: [1, 2, 3, 3, 4, 5, 6]
    vector<int> v_int {1, 5, 43, 3};

    cout << "Vecteur (entiers) avant tri : ";
    cout << v_int << endl;
    cout << "Vecteur (entiers) apres tri : ";
    vecteur_tri_bulle<int, less<int>>(v_int);
    cout << v_int << endl;

    return EXIT_SUCCESS;
}
