#ifndef Currency_hpp
#define Currency_hpp

#include <iostream>
#include <string> 

class Currency {

    public :

        Currency(std::string name , char symbol , unsigned int value) ;

        void print() const {
            std::cout<< "name : " << " | symbol : " << symbol << " | value : " << value << '\n' ;
        }

    private :

        std::string name ;
        const char symbol ;
        unsigned int value ;
} ;


#endif //Currency_hpp
