#ifndef SNACK_H
#define SNACK_H

#include "../item.hpp"

class Snack: public Item{

    friend std::ostream& operator<<(std::ostream& , const Snack& );//operator for format of cout
    
    friend std::istream& operator>>(std::istream& , const Snack& );//operator for format of cin

    public:

        Snack(std::string name, int price, int amount, int limit_amount);//Constructor
        Snack(){};//Default Constructor
};

#endif //SNACK_H