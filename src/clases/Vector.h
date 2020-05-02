//
// Created by amaru on 5/1/20.
//

#ifndef TAREA1_VECTOR_H
#define TAREA1_VECTOR_H

#include "../tipos.h"

namespace utec{

    class Vector {
    private:
        int*data;
        int capacity = 100;
        int size;
    public:
        //Constructor & Destructor
        Vector();
        Vector(size_t size);
        Vector(const Vector& v);
        Vector operator =(const Vector& v);
        ~Vector();

        //Overloading of + operator
        Vector operator+(const Vector& v);

        //Vector methods
        void push_back(const int& value);
        void pop_back();
        void insert(int, int);
        void erase(int);

        int get_size(){
            return this->size;
        }

        void print_elements();
    };
}


#endif //TAREA1_VECTOR_H
