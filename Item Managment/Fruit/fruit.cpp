#include "fruit.hpp"

using namespace std;

Fruit::Fruit(string name, int price, int amout):Item(name, price, amout, "kg"){};





ostream& operator<<(std::ostream& output, const Fruit& myself){

    output << R"(
____________________
|         |         |
|  item   |  price  |
|_________|_________|             
)";

    output << "    " << myself.get_name()
    << "       (" << myself.get_unit() << ')' << myself.get_price() << '\n';    
}

istream& operator>>(std::istream& input, Fruit& myself){

    string name, unit;
    int price, amount;

    input >> name >> price 
    >> amount >> unit;

    myself.set_name(name);
    myself.set_unit(unit);
    myself.set_price(price);
    myself.set_amount(amount); 
}