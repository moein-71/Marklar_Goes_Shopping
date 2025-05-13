#include "USD.hpp"

using namespace std ;

USD::USD(float amount) : Currency("USD" , '$' , 1 , amount) {}

USD::USD(const EUR & change) : Currency("USD" , '$' , 1) {

    this ->Set_amount(change.Get_amount() / change.Get_value()) ;
}

USD::USD(const IRR & change) : Currency("USD" , '$' , 1) {

    this ->Set_amount(change.Get_amount() / change.Get_value()) ;
}

ostream & operator<<(ostream & output , const USD & out) {

    output<< "name : " << out.Get_name() << " | symbol : " << out.Get_symbol() << " | value : " << out.Get_value() << " | amount : " << out.Get_amount() << '\n' ;

    return output ;
}

const USD & USD::operator+=(const USD & other) {

    this->Set_amount(this->Get_amount() + (other.Get_amount() / other.Get_value())) ;
 
    return *this ;
}

const USD & USD::operator-=(const USD & other) {

    this->Set_amount(this->Get_amount() - (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

USD USD::operator+(const USD & other) {
    return USD(this ->Get_amount() + other.Get_amount()) ;
}

USD USD::operator-(const USD & other) {
    return USD(this ->Get_amount() - other.Get_amount()) ;
}

USD USD::operator*(const USD & other) {
    return USD(this ->Get_amount() * other.Get_amount()) ;
}

USD USD::operator/(const USD & other) {
    return USD(this ->Get_amount() / other.Get_amount()) ;
}

bool USD::operator==(const USD & other) {
    return (this -> Get_amount() == other.Get_amount()) ;
}

bool USD::operator!=(const USD & other) {
    return (this -> Get_amount() != other.Get_amount()) ;
}

bool USD::operator<(const USD & other) {
    return (this -> Get_amount() < other.Get_amount()) ;
}

bool USD::operator>(const USD & other) {
    return (this -> Get_amount() > other.Get_amount()) ;
}
