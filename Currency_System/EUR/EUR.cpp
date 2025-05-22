#include "EUR.hpp"
#include "../USD/USD.hpp" 

using namespace std ;

EUR::EUR(float amount) : Currency("EUR" , '&' , 2 , amount) {}

EUR::EUR(const USD & change) : Currency("EUR" , '&' , 100) {
    this->Set_amount(change.Get_amount() * this->Get_value()) ;
}

ostream & operator<<(std::ostream & output , const EUR & out) {

    output<< "name : " << out.Get_name() << " | symbol : " << out.Get_symbol() << " | value : " << out.Get_value() << " | amount : " << out.Get_amount() << '\n' ;

    return output ;
}

const EUR & EUR::operator=(const EUR & other) {

    this->Set_amount(other.Get_amount()) ;
    
    return *this ;
}

const EUR & EUR::operator+=(const EUR & other) {

    this->Set_amount(this->Get_amount() + (other.Get_amount() / other.Get_value())) ;
 
    return *this ;
}

const EUR & EUR::operator-=(const EUR & other) {

    this->Set_amount(this->Get_amount() - (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

EUR EUR::operator+(const EUR & other) {
    return EUR(this ->Get_amount() + other.Get_amount()) ;
}

EUR EUR::operator-(const EUR & other) {
    return EUR(this ->Get_amount() - other.Get_amount()) ;
}

EUR EUR::operator*(const EUR & other) {
    return EUR(this ->Get_amount() * other.Get_amount()) ;
}

EUR EUR::operator/(const EUR & other) {
    return EUR(this ->Get_amount() / other.Get_amount()) ;
}

bool EUR::operator==(const EUR & other) {
    return (this -> Get_amount() == other.Get_amount()) ;
}

bool EUR::operator!=(const EUR & other) {
    return (this -> Get_amount() != other.Get_amount()) ;
}

bool EUR::operator<(const EUR & other) {
    return (this -> Get_amount() < other.Get_amount()) ;
}

bool EUR::operator>(const EUR & other) {
    return (this -> Get_amount() > other.Get_amount()) ;
}
