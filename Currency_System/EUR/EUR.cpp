#include "EUR.hpp"

using namespace std ;

EUR::EUR(float amount) : Currency("EUR" , '&' , 2 , amount) {}

ostream & operator<<(std::ostream & output , const EUR & out) {

    output<< "name : " << out.Get_name() << " | symbol : " << out.Get_symbol() << " | value : " << out.Get_value() << " | amount : " << out.Get_amount() << '\n' ;

    return output ;
}