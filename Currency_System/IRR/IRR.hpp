#ifndef IRR_HPP
#define IRR_HPP

#include "../Currency_base.hpp"

class USD ;

class IRR : public Currency {

    friend std::ostream & operator<<(std::ostream & output , const IRR & out) ;

    public :

        IRR(float amount = 0) ;

    private :

} ;

#endif //IRR_HPP