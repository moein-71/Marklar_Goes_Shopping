#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <stdexcept>
#include <string>


class Item{

    friend ostream& operator<<(ostream& , Item&);
    friend istream& operator>>(istream& , Item&);

    public:

        Item(std::string name, int price, int amount, std::string unit, int limit_amount);//Constructor
        Item(){};//Default Constructor

        std::string get_name()const;//////get function
        int get_price()const;
        int get_amount()const;
        std::string get_unit()const;////////get function
        int get_limit_amount()const;

        
        void set_name(std::string);//////set function
        void set_price(int);
        void set_amount(int);
        void set_unit(std::string);
        void set_limit_amount(int) ;
        void set_file_name(std::string);////////set function


        void Add_Pruduct()const;//this function adds product to file on format(name, price, amount, unit)
        int Remove_Product(int dis , int *item_price);//this function remove a product in file
        void Print()const;//this function outes all product in Item.txt

    private:

        std::string name; 

        int price;

        int amount;

        std::string unit;//unit of measurement

        int limit_amount ;

        std::string file_name;
};

#endif //ITEM_H