//
// Created by amaru on 4/27/20.
//

#include "clases/Integer.h"

using namespace std;

void ejercicio5a() {
    cout<< "============Ejercicio 5a===========" << endl;

    Integer A;
    cout<< "Integer A value is: " << A << endl;
    A = 20;
    cout<< "Assigment of int 20 to A, now A is: " << A << endl;
    Integer B;
    B = A;
    cout<< "Assigment of A to B -> Integer B value is: " << B << endl;
    cout<< "---------Cast test-----------" << endl;
    float float_num = 10.55;
    cout<< "float_num = " << float_num << endl;
    Integer C;
    C = float_num;
    cout<< "C = float_num, Integer C value is: " << C << endl;

    cout << "-----------Math operations---------"<< endl;
    int X = 2;
    cout<< "A = " << A << " and X = " << X << endl;
    cout<< "A + X value is: " << A + X << endl;
    cout<< "if A = " << A << endl;
    A+=X;
    cout<<"A += 10 value is: " << A << endl;
    A-=X;
    cout<<"A -= 10 value is: " << A << endl;
    cout<< "A - X value is: " << A - X << endl;
    cout<< "A / X value is: " << A / X << endl;
    cout<< "A * X value is: " << A * X << endl;
    auto temp = A ^ X;
    cout<< "A ^ X value is: " << temp << endl;

    cout << "-----------Boolean operations------"<< endl;
    auto btemp = A > X;
    cout<< "With A : "<< A << " and X : " << X << endl;
    cout<<"A > X is "<< btemp << endl;
    btemp = A < X;
    cout<<"A < X is "<< btemp << endl;
    btemp = A != X;
    cout<<"A != X is "<< btemp << endl;
    btemp = A == X;
    cout<<"A == X is "<< btemp << endl;
    btemp = A <= X;
    cout<<"A <= X is "<< btemp << endl;
    btemp = A >= X;
    cout<<"A >= X is "<< btemp << endl;
}

void ejercicio5b() {
    cout<< "============Ejercicio 5b===========" << endl;
}

void ejercicio6() {

}
