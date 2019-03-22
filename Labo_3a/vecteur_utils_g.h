#ifndef VECTEUR_UTILS_G_H
#define VECTEUR_UTILS_G_H

#include <iostream>
#include <vector>

template <typename T, typename U>
void vecteur_tri_bulle(std::vector<T>& v){
   U predicat;
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
std::ostream& operator<<(std::ostream& lhs, const std::vector<T>& rhs);

#endif //VECTEUR_UTILS_G_H
