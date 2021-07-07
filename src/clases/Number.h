//
// Created by amaru on 4/28/20.
//

#ifndef TAREA1_NUMBER_H
#define TAREA1_NUMBER_H

#include "../tipos.h"

template<typename T>
class Number {
    T data;
public:
    Number();
    Number(T data);
    Number(const Number &other);
    explicit operator T();
    Number operator=(const Number &other);
    template <typename Tstream>
    friend std::ostream& operator << (std::ostream& out, const Number<Tstream>& other);
    template <typename Tstream>
    friend std::istream& operator >> (std::istream& in, Number<Tstream>& other);
    Number operator+ (T data);
    Number operator+=(T data);
    Number operator- (T data);
    Number operator-=(T data);
    Number operator/ (T data);
    Number operator^ (int data);
    Number operator* (T data);
    Number operator*=(T data);

    bool operator>(const Number &other);
    bool operator>=(const Number &other);
    bool operator<(const Number &other);
    bool operator<=(const Number &other);
    bool operator!=(const Number &other);
    bool operator==(const Number &other);


};

#endif //TAREA1_NUMBER_H