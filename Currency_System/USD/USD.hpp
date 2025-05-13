#ifndef USD_HPP
#define USD_HPP

#include "../Currency_base.hpp"
#include "../EUR/EUR.hpp"
#include "../IRR/IRR.hpp"

class USD : public Currency {

    friend std::ostream & operator<<(std::ostream & output , const USD & out) ;

    public :

        USD(float amount = 0) ;

        const USD & operator=(const EUR & other) ;
        const USD & operator=(const IRR & other) ;

        const USD & operator+=(const USD & other) ;
        const USD & operator+=(const EUR & other) ;
        const USD & operator+=(const IRR & other) ;

        const USD & operator-=(const USD & other) ;
        const USD & operator-=(const EUR & other) ;
        const USD & operator-=(const IRR & other) ;

    private :

} ;

#endif //USD_HPP