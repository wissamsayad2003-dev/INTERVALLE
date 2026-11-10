#pragma once
#include "Tableau.h"

class TableauBorne : public Tableau {
    float min, max;

public:
    TableauBorne(int n, float a, float b);
    void set(int i, float v);
    float operator[](int i) const;
};
