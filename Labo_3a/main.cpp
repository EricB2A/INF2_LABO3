/*
 -----------------------------------------------------------------------------------
 Laboratoire : 03
 Fichier     : Labo3a/main.cpp
 Auteur(s)   : Eric Bousbaa
 Date        : 25.03.2019

 But         : Ce programme a pour de trier - de manière croissante et décroissante -   
               différents vecteurs. Ces derniers sont affichés avant et après être triés.

 Remarque(s) : -

 Compilateur : Apple LLVM version 9.0.0 (clang-900.0.39.2)
 -----------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <functional>
#include "vecteur_utils_g.h"

using namespace std;

template <typename T>
void test_tri_bulle(vector<T>& v){
    cout << "Vecteur avant tri : " << v << endl;
    vecteur_tri_bulle<T, greater<T>>(v);
    cout << "Vecteur apres tri croissant: " << v << endl;
    vecteur_tri_bulle<T, less<T>>(v);
    cout << "Vecteur apres tri decroissant: " << v << endl;
}

int main(){
    vector<int> v_int {1, 5, 43, 3};
    test_tri_bulle(v_int);
    cout << endl;
    vector<string> v_string {"abc", "aaa", "aa", "ab"};
    test_tri_bulle(v_string);

    cout << "Appuyez sur une touche pour continuer... ";
    cin.get();
    return EXIT_SUCCESS;
}