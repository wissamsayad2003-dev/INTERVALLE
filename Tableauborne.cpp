
#include "TableauBorne.h"

TableauBorne::TableauBorne(int n, float a, float b) : Tableau(n) {
    min = a;
    max = b;
}

void TableauBorne::set(int i, float v) {
    if (v >= min && v <= max)
        data[i] = v;
}

float TableauBorne::operator[](int i) const {
    return data[i];
}