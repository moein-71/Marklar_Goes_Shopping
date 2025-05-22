#ifndef SHOP_HPP
#define SHOP_HPP

#include "../Currency_System/USD/USD.hpp"
#include "../Bank Management/Organization/Organization.hpp"
#include "../Bank Management/Personal/Personal.hpp"
#include "../Item Managment/Fruit/fruit.hpp"
#include "../Item Managment/Snack/snack.hpp"
#include "../Item Managment/Seasoning/seasoning.hpp"

class Shop : public Organization_Acc {

    public :

    Bank * Customer1 ;

        Shop(std::string shop = "SHOP" , int AC = 1111 , USD blc = USD(50000)) ;

        void Add_Shop() ;

        void Remove_Shop() ;

        void showitem() ;

    private :

        const unsigned int discount = 5 ;

} ;

#endif //SHOP_HPP