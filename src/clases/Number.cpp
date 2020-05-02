//
// Created by amaru on 4/28/20.
//

#include "Number.h"

template <typename T>
Number<T>::Number(){
    this->data = 0;
}

template <typename T>
Number<T>::Number(T value){
    this->data = value;
}

template <typename T>
Number<T>::Number(const Number& other){
    this->data = other.data;
}

template <typename T>
Number<T> Number<T>::operator=(const Number &other) {
    this->data = other.data;
    return *this;
}

template<typename T>
Number<T>::operator T() {
    return data;
}


template<typename Tstream>
std::ostream &operator<<(std::ostream &out, const Number<Tstream> &other) {
    out << other.data;
    return out;
}

template<typename Tstream>
std::istream &operator>>(std::istream &in, Number<Tstream> &other) {
    in >> other.data;
    return in;
}

template<typename T>
Number<T> Number<T>::operator+(T value) {
    return Number(this->data + value);
}

template<typename T>
Number<T> Number<T>::operator+=(T value) {
    this->data = this->data + value;
    return *this;
}

template<typename T>
Number<T> Number<T>::operator-(T value) {
    return Number(this->data - value);
}

template<typename T>
Number<T> Number<T>::operator-=(T value) {
    this->data = this->data - value;
    return *this;
}

template<typename T>
Number<T> Number<T>::operator/(T value) {
    return Number(this->data / value);
}

template<typename T>
Number<T> Number<T>::operator*(T value) {
    return Number(this->data * value);
}

template<typename T>
Number<T> Number<T>::operator*=(T value) {
    this->data = this->data * value;
    return *this;
}

template<typename T>
Number<T> Number<T>::operator^(int value) {
    this->data = pow(this->data, value);
    return *this;
}
// Todo:implement boolean operators
template<typename T>
bool Number<T>::operator>(const Number &other) {
    bool temp = this->data > other.data;
    return temp;
}

template<typename T>
bool Number<T>::operator>=(const Number &other) {
    bool temp = this->data >= other.data;
    return temp;
}

template<typename T>
bool Number<T>::operator<(const Number &other) {
    bool temp = this->data < other.data;
    return temp;
}

template<typename T>
bool Number<T>::operator<=(const Number &other) {
    bool temp = this->data <= other.data;
    return temp;
}

template<typename T>
bool Number<T>::operator!=(const Number &other) {
    bool temp = this->data != other.data;
    return temp;
}

template<typename T>
bool Number<T>::operator==(const Number &other) {
    bool temp = this->data == other.data;
    return temp;
}
