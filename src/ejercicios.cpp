//
// Created by amaru on 4/27/20.
//

#include "clases/Integer.h"
#include "clases/Number.h"
#include "clases/Number.cpp"
#include "clases/Vector.h"
#include "clases/Vector.cpp"

using namespace std;

void ejercicio5a() {
    cout<< "============Ejercicio 5a===========" << endl;

    Integer A;
    cout<< "Integer A value is: " << A << endl;
    A = 20;
    cout<< "Assignment of int 20 to A, now A is: " << A << endl;
    Integer B;
    B = A;
    cout<< "Assignment of A to B -> Integer B value is: " << B << endl;
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
    cout << "============Ejercicio 5b===========" << endl;
    Number<float> A;
    cout << "Number A value is: "<< A << endl;
    A = 3.5;
    cout << "Assignment of float 3.5 to A, now A is: " << endl;
    Number<float> B;
    float X = 8.2;
    cout << "-----------Math operations---------" << endl;
    cout << "A = " << A << " and X = " << X << endl;
    cout << "A + X value is: " << A + X << endl;
    cout << "if A = " << A << endl;
    A += X;
    cout << "A += "<< X <<" value is: " << A << endl;
    A -= X;
    cout << "A -= " << X <<endl;
    cout << "Now A value is: " << A << endl;
    cout << "A - 8.2 value is: " << A - X << endl;
    cout << "A / 8.2 value is: " << A / X << endl;
    cout << "A * 8.2 value is: " << A * X << endl;
    auto temp = A ^X;
    cout << "A ^ (8) value is: " << temp << endl;

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

void ejercicio6() {
    cout << "============Ejercicio 6===========" << endl;
    utec::Vector test(5);
    cout<< "Vector(5) size is: " <<test.get_size()<< endl;
    cout<< "Elements in vector are: "<< endl;
    test.print_elements();
    cout<< "Push back elements 5, 6 and 9"<< endl;
    test.push_back(5);
    test.push_back(6);
    test.push_back(9);
    cout<< "New elements in vector are: "<< endl;
    test.print_elements();
    cout<< "Pop back"<< endl;
    test.pop_back();
    cout<< "New elements in vector are: "<< endl;
    test.print_elements();
    test.insert(1,20);
    cout<< "Insert 20 in position 1 "<< endl;
    test.print_elements();
    test.erase(6);
    cout<< "Erase 5 from position 5 "<< endl;
    test.print_elements();
    cout<< "New vector with values (2, 1, 3)"<<endl;
    utec::Vector test2;
     test2.push_back(2);
     test2.push_back(1);
     test2.push_back(3);
     test2.print_elements();
    // cout<< "Sum of Vector 1 + Vector 2" << endl;
     //auto res = test2+test;
    /* res.print_elements();*/
}
