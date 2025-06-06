#ifndef Currency_hpp
#define Currency_hpp

#include <iostream>
#include <string> 

class Currency {

    public :

        Currency(std::string name , char symbol , unsigned int value , float amount = 0) ;

        std::string Get_name() const ;

        char Get_symbol() const ;

        unsigned int Get_value() const ; 

        float Get_amount() const ;
        void Set_amount(const float & other) ;

    private :

        std::string name ;
        const char symbol ;
        unsigned int value ;
        float amount ;
} ;


#endif //Currency_hpp
