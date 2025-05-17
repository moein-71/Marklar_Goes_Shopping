#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <stdexcept>
#include <string>


class Item{

    public:

        Item(std::string name, int price, int amount, std::string unit);//Constructor
        Item(){};//Default Constructor

        std::string get_name()const;//////get function
        int get_price()const;
        int get_amount()const;
        std::string get_unit()const;////////get function

        
        void set_name(std::string);//////set function
        void set_price(int);
        void set_amount(int);
        void set_unit(std::string);////////set function

        void Add_Pruduct(const Item& product)const;//this function adds product to file on format(name, price, amount, unit)
        void Remove_Product(const std::string& name);//this function remove a product in file
        void Print()const;//this function outes all product in Item.txt

    private:

        std::string name;

        int price;

        int amount;

        std::string unit;//unit of measurement

        std::string file_name;
};

#endif //ITEM_H