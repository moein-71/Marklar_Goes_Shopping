#include "Currency_base.hpp" 

using namespace std ;

Currency::Currency(std::string name , char symbol , unsigned int value , float amount = 0) : name(name) , symbol(symbol) , value(value) , amount(amount) {}

void Currency::print() const {
    std::cout<< "name : " << " | symbol : " << symbol << " | value : " << value << '\n' ;
}

string Currency::Get_name() const {
    return this->name ;
}

char Currency::Get_symbol() const {
    return this->symbol ;
}

unsigned int Currency::Get_value() const {
    return this->value ;
}

float Currency::Get_amount() const {
    return amount ;
}

float Currency::Set_amount(const float & other) {
    this->amount = other ;
}

void Currency::print() const {
    std::cout<< "name : " << " | symbol : " << symbol << " | value : " << value << '\n' ;
}





