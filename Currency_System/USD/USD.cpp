#include "USD.hpp"
#include "../EUR/EUR.hpp"
#include "../IRR/IRR.hpp"

using namespace std ;

USD::USD() : Currency("USD" , '$' , 1) {}

const USD & USD::operator=(const EUR & other) {

    this->Set_amount(other.Get_amount() / other.Get_value()) ;

    return *this ;
}

const USD & USD::operator=(const IRR & other) {

    this->Set_amount(other.Get_amount() / other.Get_value()) ;

    return *this ;
}

const USD & USD::operator+=(const USD & other) {

    this->Set_amount((other.Get_amount() + other.Get_amount()) / other.Get_value()) ;
 
    return *this ;
}

const USD & USD::operator+=(const EUR & other) {

    this->Set_amount((other.Get_amount() + other.Get_amount()) / other.Get_value()) ;

    return *this ;
}

const USD & USD::operator+=(const IRR & other) {

    this->Set_amount((other.Get_amount() + other.Get_amount()) / other.Get_value()) ;

    return *this ;
}


