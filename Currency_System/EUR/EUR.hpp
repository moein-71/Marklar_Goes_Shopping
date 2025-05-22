#ifndef EUR_HPP
#define EUR_HPP

#include "../Currency_base.hpp"

class USD ;

class EUR : public Currency {

    friend std::ostream & operator<<(std::ostream & output , const EUR & out) ;

    public :

        EUR(float amount = 0) ;
        explicit EUR(const USD & change) ;

        const EUR & operator=(const EUR &other) ;

        const EUR & operator+=(const EUR & other) ;
        const EUR & operator-=(const EUR & other) ;

        EUR operator+(const EUR & other) ;
        EUR operator-(const EUR & other) ;
        EUR operator*(const EUR & other) ;
        EUR operator/(const EUR & other) ;

        bool operator==(const EUR & other) ;
        bool operator!=(const EUR & other) ;
        bool operator<(const EUR & other) ;
        bool operator>(const EUR & other) ;

    private :

} ;

#endif //EUR_HPP