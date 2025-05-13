#include "Currency_base.hpp" 

using namespace std ;

Currency::Currency(string name , char symbol , unsigned int value , float amount) : name(name) , symbol(symbol) , value(value) , amount(amount) {}

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

void Currency::Set_amount(const float & other) {
    this->amount = other ;
}





