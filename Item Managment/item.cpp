#include "item.hpp"
using namespace std;

Item::Item(std::string name, int price, int amount, string unit): name(name), price(price), 
amount(amount), unit(unit) {};




string Item::get_name()const{return name;}

int Item::get_price()const{return price;}

int Item::get_amount()const{return amount;}

string Item::get_unit()const{return unit;}




void Item::set_name(string name){this -> name = name;}

void Item::set_price(int price){this -> price = price;}

void Item::set_amount(int amount){this -> amount = amount;}

void Item::set_unit(string unit){this -> unit = unit;}




void Item::Add_Pruduct(const Item& product)const{

    string add_name, unit, fname = this -> file_name;
    int price, amount;
    bool Hozoor = false;

    ifstream add(fname , ios::in);
    ofstream temp("temp.txt" , ios::out);

    if(!add || !temp){

        throw runtime_error("There is a problem. I can't open file.\n");
    }

    while(add >> add_name >> price >> amount >> unit){

        if(product.name == add_name && product.unit == unit){amount += product.amount; Hozoor = true;}

        temp << name << setw(4) << price << setw(4)
        << amount << setw(4) << unit << '\n';
    }

    if(!Hozoor){

        temp << product.name << setw(4) << product.price << setw(4)
        << product.amount << setw(4) << product.unit << '\n';
    }

    add.close();
    temp.close();

    remove(fname.c_str());
    rename("temp.txt", fname.c_str());

    Print();
}

void Item::Remove_Product(const std::string& name){

    string remove_name, unit, fname = this -> file_name;
    int price, amount;
    
    ifstream rmve(fname, ios::in);
    ofstream temp("temp.txt" , ios::out);

    if(!rmve || !temp){

        throw runtime_error("There is a problem. I can't open file.\n");
    }

    while(rmve >> remove_name >> price >> amount >> unit){

        if(remove_name != name){

            temp << remove_name << setw(4) << price << setw(4) 
            << amount << setw(4) << unit << '\n';
        }
    }

    rmve.close();
    temp.close();

    remove(fname.c_str());
    rename("temp.txt", fname.c_str());

    Print();
}

void Item::Print()const{

    string name, unit, fname = this -> file_name;
    int price, amount;
    
    ifstream print(fname , ios::in);

    while(print >> name >> price >> amount >> unit){

        cout << "name: " << name << '\n'
        << "price: " << price << '\n'
        << "amount: " << amount << '(' << unit << ')' << '\n'; 

        cout << "____________________________________________\n";
    }

    print.close();
}