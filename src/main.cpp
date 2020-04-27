//
// Created by amaru on 4/27/20.
//
#include <iostream>

class Integer {
    int value;
public:
    Integer();

    Integer(int value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int value);

    operator int();
    friend std::ostream& operator << (std::ostream& os, )

};


int main(){
    std::cout << "Hello" << std::endl;
    return 0;
}