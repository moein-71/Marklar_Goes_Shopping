#include "IRR.hpp" 
#include "../USD/USD.hpp" 

using namespace std ;

IRR::IRR(float amount) : Currency("IRR" , '#' , 100 , amount) {}

IRR::IRR(const USD & change) : Currency("IRR" , '#' , 100) {
    this->Set_amount(change.Get_amount() * this->Get_value()) ;
}

ostream & operator<<(std::ostream & output , const IRR & out) {

    output<< "name : " << out.Get_name() << " | symbol : " << out.Get_symbol() << " | value : " << out.Get_value() << " | amount : " << out.Get_amount() << '\n' ;

    return output ;
}

const IRR & IRR::operator=(const IRR & other) {

    this->Set_amount(other.Get_amount()) ;
    
    return *this ;
}

const IRR & IRR::operator+=(const IRR & other) {

    this->Set_amount(this->Get_amount() + (other.Get_amount() / other.Get_value())) ;
 
    return *this ;
}

const IRR & IRR::operator-=(const IRR & other) {

    this->Set_amount(this->Get_amount() - (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

IRR IRR::operator+(const IRR & other) {
    return IRR(this ->Get_amount() + other.Get_amount()) ;
}

IRR IRR::operator-(const IRR & other) {
    return IRR(this ->Get_amount() - other.Get_amount()) ;
}

IRR IRR::operator*(const IRR & other) {
    return IRR(this ->Get_amount() * other.Get_amount()) ;
}

IRR IRR::operator/(const IRR & other) {
    return IRR(this ->Get_amount() / other.Get_amount()) ;
}

bool IRR::operator==(const IRR & other) {
    return (this -> Get_amount() == other.Get_amount()) ;
}

bool IRR::operator!=(const IRR & other) {
    return (this -> Get_amount() != other.Get_amount()) ;
}

bool IRR::operator<(const IRR & other) {
    return (this -> Get_amount() < other.Get_amount()) ;
}

bool IRR::operator>(const IRR & other) {
    return (this -> Get_amount() > other.Get_amount()) ;
}

