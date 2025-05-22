#ifndef IRR_HPP
#define IRR_HPP

#include "../Currency_base.hpp"

class USD ;

class IRR : public Currency {

    friend std::ostream & operator<<(std::ostream & output , const IRR & out) ;

    public :

        IRR(float amount = 0) ;
        explicit IRR(const USD & change) ;

        const IRR & operator=(const IRR &other) ;

        const IRR & operator+=(const IRR & other) ;
        const IRR & operator-=(const IRR & other) ;

        IRR operator+(const IRR & other) ;
        IRR operator-(const IRR & other) ;
        IRR operator*(const IRR & other) ;
        IRR operator/(const IRR & other) ;

        bool operator==(const IRR & other) ;
        bool operator!=(const IRR & other) ;
        bool operator<(const IRR & other) ;
        bool operator>(const IRR & other) ;

    private :

} ;

#endif //IRR_HPP