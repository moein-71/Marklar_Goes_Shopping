#include "Currency_base.hpp" 

using namespace std ;

Currency::Currency(std::string name , char symbol , unsigned int value) : name(name) , symbol(symbol) , value(value) {}

void Currency::print() const {
    std::cout<< "name : " << " | symbol : " << symbol << " | value : " << value << '\n' ;
}
