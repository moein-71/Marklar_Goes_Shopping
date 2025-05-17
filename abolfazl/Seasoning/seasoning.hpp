#ifndef SEASONING_H
#define SEASONING_H

#include "../item.hpp"

class Seasoning: public Item{

    friend std::ostream& operator<<(std::ostream& , const Seasoning& );//operator for format of cout
    
    friend std::istream& operator>>(std::istream& , const Seasoning& );//operator for format of cin

    public:

        Seasoning(std::string name, int price, int amout);//Constructor
        Seasoning(){};//Default Constructor
};

#endif //SEASONING_H