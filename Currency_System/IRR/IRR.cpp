#include "IRR.hpp" 

using namespace std ;

IRR::IRR(float amount) : Currency("IRR" , '#' , 100 , amount) {}

ostream & operator<<(std::ostream & output , const IRR & out) {

    output<< "name : " << out.Get_name() << " | symbol : " << out.Get_symbol() << " | value : " << out.Get_value() << " | amount : " << out.Get_amount() << '\n' ;

    return output ;
}
