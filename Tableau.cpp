#include <cstdlib>
#include "Tableau.h"

Tableau::Tableau(int n) {
    taille = n;
    data = new float[taille];
}

Tableau::Tableau(const Tableau& t) {
    taille = t.taille;
    data = new float[taille];
    for (int i = 0; i < taille; i++)
        data[i] = t.data[i];
}

Tableau::~Tableau() {
    delete[] data;
}

Tableau& Tableau::operator=(const Tableau& t) {
    if (this != &t) {
        delete[] data;
        taille = t.taille;
        data = new float[taille];
        for (int i = 0; i < taille; i++)
            data[i] = t.data[i];
    }
    return *this;
}

float& Tableau::operator[](int i)const {
    if (i >= 0 && i < this->taille) {
        return this->data[i];
    }
    else {
        exit(-1);
    }
    
}