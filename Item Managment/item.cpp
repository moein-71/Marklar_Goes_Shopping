#include "item.hpp"
using namespace std;

Item::Item(std::string name, int price, int amount, string unit): name(name), price(price), 
amount(amount), unit(unit) {};





istream& operator>>(istream& input, Item& myself){

    input >> myself.name >> myself.price
    >> myself.amount >> myself.unit;
}

ostream& operator<<(ostream& output, Item& myself){

   output << "name: " << myself.name << '\n' << "price: " << myself.price << '\n'
   << "amount: " << myself.amount << '\n'<< myself.unit << '\n'
   << "_____________________________________________________\n";
}





string Item::get_name()const{return name;}

int Item::get_price()const{return price;}

int Item::get_amount()const{return amount;}

string Item::get_unit()const{return unit;}




void Item::set_name(string name){this -> name = name;}

void Item::set_price(int price){this -> price = price;}

void Item::set_amount(int amount){this -> amount = amount;}

void Item::set_unit(string unit){this -> unit = unit;}

void Item::set_file_name(string file_name){this -> file_name = file_name;}




void Item::Add_Pruduct()const{

    string add_name, unit, fname = this -> file_name;
    int price, amount;

    bool Hozoor = false;

    ifstream add(fname , ios::in);
    ofstream temp("temp.txt" , ios::out);

    if(!add || !temp){

        throw runtime_error("There is a problem. I can't open file.\n");
    }

    while(add >> add_name >> price >> amount >> unit){

        if(this -> name == add_name && this -> unit == unit) {

            amount += this -> amount; 
            price = this -> price; 
            Hozoor = true;
        }

        temp << name << setw(4) << price << setw(4)
        << amount << setw(4) << unit << '\n';
    }

    if(!Hozoor){

        temp << this -> name << setw(4) << this -> price << setw(4)
        << this -> amount << setw(4) << this -> unit << '\n';
    }

    add.close();
    temp.close();

    remove(fname.c_str());
    rename("temp.txt", fname.c_str());

    Print();
}

int Item::Remove_Product(int dis , int *item_price){

    string remove_name, unit, fname = this -> file_name;
    int price, amount;

    int amount_dis = (this->amount / dis) ;
    
    ifstream rmve(fname, ios::in);
    ofstream temp("temp.txt" , ios::out);

    if(!rmve || !temp){

        rmve.close();
        temp.close();
        
        remove("temp.txt");

        throw runtime_error("There is a problem. I can't open file.\n");
    }

    while(rmve >> remove_name >> price >> amount >> unit){

        if(remove_name != name){

            temp << remove_name << setw(4) << price << setw(4) 
            << amount << setw(4) << unit << '\n';
        }
        else {

            if((amount - this->amount) > 0) {

                *item_price = price ;

                if(amount - amount_dis < 0) {
                    amount_dis = amount_dis - amount ;
                    continue;
                }

                temp << name << setw(4) << price << setw(4) 
                << (amount - this->amount) << setw(4) << unit << '\n';
            }
            else {
                rmve.close();
                temp.close();

                remove("temp.txt") ;

                throw invalid_argument("We don't have enough thing") ;
            }
        }
    }

    rmve.close();
    temp.close();

    remove(fname.c_str());
    rename("temp.txt", fname.c_str());

    return amount_dis ;

    // Print();
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