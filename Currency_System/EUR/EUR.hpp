#ifndef EUR_HPP
#define EUR_HPP

#include "../Currency_base.hpp"

class EUR : public Currency {

    friend std::ostream & operator<<(std::ostream & output , const EUR & out) ;

    public :

        EUR(float amount = 0) ;

    private :

} ;

#endif //EUR_HPP