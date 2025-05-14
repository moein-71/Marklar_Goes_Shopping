#ifndef USD_HPP
#define USD_HPP

#include "../Currency_base.hpp"
#include "../EUR/EUR.hpp"
#include "../IRR/IRR.hpp"

class USD : public Currency {

    friend std::ostream & operator<<(std::ostream & output , const USD & out) ;

    public :

        explicit USD(float amount = 0) ;
        explicit USD(const EUR & change) ;
        explicit USD(const IRR & change) ;

        USD & operator=(const USD & other) ;

        const USD & operator+=(const USD & other) ;
        const USD & operator-=(const USD & other) ;

        USD operator+(const USD & other) ;
        USD operator-(const USD & other) ;
        USD operator*(const USD & other) ;
        USD operator/(const USD & other) ;

        bool operator==(const USD & other) ;
        bool operator!=(const USD & other) ;
        bool operator<(const USD & other) ;
        bool operator>(const USD & other) ;

        
    private :

} ;

#endif //USD_HPP