#include "seasoning.hpp"

using namespace std;

Seasoning::Seasoning(string name, int price, int amout):Item(name, price, amout, "g"){};





ostream& operator<<(std::ostream& output, const Seasoning& myself){

    output << R"(
____________________
|         |         |
|  item   |  price  |
|_________|_________|             
)";

    output << "    " << myself.get_name()
    << "       (" << myself.get_unit() << ')' << myself.get_price() << '\n';    
}

istream& operator>>(std::istream& input, Seasoning& myself){

    string name, unit;
    int price, amount;

    input >> name >> price 
    >> amount >> unit;

    myself.set_name(name);
    myself.set_unit(unit);
    myself.set_price(price);
    myself.set_amount(amount); 
}