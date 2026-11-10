#include <iostream>
#include "TableauBorne.h"
using namespace std;

int main() {
    Tableau t(3);
    t[0] = 1.5;
    t[1] = 2.5;
    t[2] = 3.5;

    Tableau t2 = t;  
    Tableau t3(3);
    t3 = t;           
    cout << t2[1] << " " << t3[2] << endl;

    TableauBorne tb(3, 0, 10);
    tb.set(0, 4);
    tb.set(1, 20);    
    cout << tb[0] << endl;
    // tb[0] = 5;     

    return 0;
}