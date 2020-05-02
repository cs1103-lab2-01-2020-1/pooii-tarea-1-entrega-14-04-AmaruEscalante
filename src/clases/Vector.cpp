//
// Created by amaru on 5/1/20.
//

#include "Vector.h"

utec::Vector::Vector() {
    this->data = new int[capacity];
    this->size = 0;
}

utec::Vector::Vector(size_t size) {
    this->data = new int[capacity];
    this->size = size;

    for (unsigned long i = 0; i < size; ++i) {
        this->data[i] = 0;
    }
}

utec::Vector::Vector(const utec::Vector &v) {
    this->data = v.data;
    this->capacity = v.capacity;
    this->size = v.size;
}

utec::Vector utec::Vector::operator=(const utec::Vector &v) {
    data = v.data;
    return *this;
}


utec::Vector::~Vector() {
    delete[] data;
}

utec::Vector utec::Vector::operator+(const utec::Vector &v) {
  //  int * result = new int[this->size + v.size];
//    copy(arr1, arr1 + size1, result);
//    copy(arr2, arr2 + size2, result + size1);
    utec::Vector temp(this->size + v.size);
    for (int i = 0; i <= this->size; ++i) {
        temp.data[i] = this->data[i];
    }

    for (int j = 0; j <= this->size; ++j) {
        temp.data[j+v.size] = this->data[j];
    }

    return utec::Vector(temp);
}


void utec::Vector::push_back(const int &value) {
    this->data[this->size+1] = value;
    this->size++;
    //handle overflow.
}

void utec::Vector::pop_back() {
    this->size--;
}

void utec::Vector::insert(int position, int val) {
    this->data[position]=val;
}

void utec::Vector::erase(int pos) {
    for (int i = 0; i < this->size; ++i) {
        if (i == pos) {
            this->data[i] = this->data[i + 1];
            ++i;
        }
    }
    this->size--;
}

void utec::Vector::print_elements() {
    for (int i = 0; i <= this->size; ++i) {
        cout << this->data[i] << ", ";
    }
    cout << "\b\b"<< endl;
}
