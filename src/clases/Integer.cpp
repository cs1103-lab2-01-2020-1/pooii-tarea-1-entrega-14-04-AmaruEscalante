#include "Integer.h"

Integer::Integer(){
    this->value = 0;
};

Integer::Integer(int value) {
    this->value = value;
}

Integer::Integer(const Integer &other) {
    this->value = other.value;
}

Integer& Integer::operator=(int other){
    this->value = other;
    return *this;
}

Integer::operator int() {
    return this->value;
}

Integer Integer::operator+(const Integer& var) {
    int result = this->value+var.value;
    return Integer(result);
}

Integer Integer::operator+=(int value) {
    Integer temp;
    temp.value = this->value + value;
    this->value = temp.value;
    return *this;
}

Integer Integer::operator-(int value) {
    return Integer(this->value-value);
}

Integer Integer::operator-=(int value) {
    Integer temp;
    temp.value = this->value - value;
    this->value = temp.value;
    return *this;
}

std::ostream& operator <<(std::ostream& out, const Integer&X){
    out << X.value;
    return out;
}

std::istream& operator >>(std::istream& in, Integer&X){
    in >> X.value;
    return in;
}

Integer Integer::operator/(int value) {
    return Integer(this->value/value);
}

Integer Integer::operator^(int value) {
    Integer temp;
    temp.value = pow(this->value, value);
    this->value = temp.value;
    return *this;
}

Integer Integer::operator*(int value) {
    return Integer();
}

Integer Integer::operator*=(int value) {
    return Integer();
}

bool Integer::operator>(const Integer &other) {
    return false;
}

bool Integer::operator<(const Integer &other) {
    return false;
}

bool Integer::operator>=(const Integer &other) {
    return false;
}

bool Integer::operator<=(const Integer &other) {
    return false;
}

bool Integer::operator!=(const Integer &other) {
    return false;
}

bool Integer::operator==(const Integer &other) {
    return false;
}