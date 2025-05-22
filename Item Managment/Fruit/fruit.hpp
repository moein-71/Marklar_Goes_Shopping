#ifndef FRUIT_H
#define FRUIT_H

#include "../item.hpp"

class Fruit: public Item{

    friend std::ostream& operator<<(std::ostream& , const Fruit& );//operator for format of cout
    
    friend std::istream& operator>>(std::istream& , const Fruit& );//operator for format of cin

    public:

        Fruit(std::string name, int price, int amount , int limit_amount);//Constructor
        Fruit(){};//Default Constructor
};

#endif //FRUIT_H