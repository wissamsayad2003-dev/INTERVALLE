#pragma once
class Tableau {
protected:
    int taille;
    float* data;

public:
    Tableau(int n);
    Tableau(const Tableau& t);
    ~Tableau();
    Tableau& operator=(const Tableau& t);
    float& operator[](int i)const;
};
