#include "USD.hpp"

using namespace std ;

USD::USD(float amount) : Currency("USD" , '$' , 1 , amount) {}

ostream & operator<<(ostream & output , const USD & out) {

    output<< "name : " << out.Get_name() << " | symbol : " << out.Get_symbol() << " | value : " << out.Get_value() << " | amount : " << out.Get_amount() << '\n' ;

    return output ;
}

const USD & USD::operator=(const EUR & other) {

    this->Set_amount(other.Get_amount() / other.Get_value()) ;

    return *this ;
}

const USD & USD::operator=(const IRR & other) {

    this->Set_amount(other.Get_amount() / other.Get_value()) ;

    return *this ;
}

const USD & USD::operator+=(const USD & other) {

    this->Set_amount(this->Get_amount() + (other.Get_amount() / other.Get_value())) ;
 
    return *this ;
}

const USD & USD::operator+=(const EUR & other) {

    this->Set_amount(this->Get_amount() + (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

const USD & USD::operator+=(const IRR & other) {

    this->Set_amount(this->Get_amount() + (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

const USD & USD::operator-=(const USD & other) {

    this->Set_amount(this->Get_amount() - (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

const USD & USD::operator-=(const EUR & other) {

    this->Set_amount(this->Get_amount() - (other.Get_amount() / other.Get_value())) ;

    return *this ;
}

const USD & USD::operator-=(const IRR & other) {

    this->Set_amount(this->Get_amount() - (other.Get_amount() / other.Get_value())) ;

    return *this ;
}


