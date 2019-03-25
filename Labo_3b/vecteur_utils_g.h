/*
 -----------------------------------------------------------------------------------
 Laboratoire : 03
 Fichier     : Labo3b/vecteur_utils_g.h
 Auteur(s)   : Eric Bousbaa
 Date        : 25.03.2019

 But         : Contient différentes fonctions s'appliquant sur des vecteurs, dont 
               notamment un tri à bulle.

 Remarque(s) : La fonction de tri à bulle a pour paramètre une fonction objet qui a 
               pour but de définir la comparaison de 2 éléments du vecteur. Celle-ci 
               utilise la notion de template template. 

 Compilateur : Apple LLVM version 9.0.0 (clang-900.0.39.2)
 -----------------------------------------------------------------------------------
*/

#ifndef VECTEUR_UTILS_G_H
#define VECTEUR_UTILS_G_H

#include <vector>
#include <iostream>

template <typename T, template <typename> class U>
void vecteur_tri_bulle(std::vector<T>& v){
   U<T> predicat = U<T>();
    for(size_t i = v.size(); i > 1; --i){
        for(size_t j = 0; j < i - 1; ++j){
            if(predicat(v.at(j), v.at(j+1))){
                T tmp = v.at(j);
                v.at(j) = v.at(j+1);
                v.at(j+1) = tmp;
            }
        }
    }
}

template <typename T> 
std::ostream& operator<<(std::ostream& lhs, const std::vector<T>& rhs){
    lhs << "[";
    for (size_t i = 0; i < rhs.size(); ++i) {
        lhs << rhs[i];
        if(i < rhs.size() - 1) {
            lhs << ", ";
        }
    }
    return lhs << ']';
}

#endif //VECTEUR_UTILS_G_H
