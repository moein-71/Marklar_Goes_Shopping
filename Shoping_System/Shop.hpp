#ifndef SHOP_H
#define SHOP_H

#include "../Currency_System/USD/USD.hpp"
#include "../Bank Management/Organization/Organization.hpp"
#include "../Bank Management/Personal/Personal.hpp"
#include "../Item Managment/Fruit/fruit.hpp"
#include "../Item Managment/Snack/snack.hpp"
#include "../Item Managment/Seasoning/seasoning.hpp"

class Shop : public Organization_Acc {

    public :

    Bank * Customer1 ;

        Shop(std::string shop = "SHOP" , int AC = 1111 , USD blc = USD(50000));//Constructor

        void Add_Shop();//manage shopping (add_list, get_money) 
        void Remove_Shop();//remove list and get money from user and add money to the shop

        void showitem() ;

    private :

        Bank * Customer1;

        const unsigned int discount = 5;
} ;

#endif //SHOP_H