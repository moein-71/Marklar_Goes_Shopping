#ifndef USD_HPP
#define USD_HPP

#include "../Currency_base.hpp"

class EUR ;
class IRR ;

class USD : public Currency {

    public :

        USD() ;

        const USD & operator=(const EUR & other) ;
        const USD & operator=(const IRR & other) ;
        const USD & operator+=(const USD & other) ;
        const USD & operator+=(const EUR & other) ;
        const USD & operator+=(const IRR & other) ;




    private :

} ;

#endif //USD_HPP