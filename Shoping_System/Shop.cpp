#include "Shop.hpp"

using namespace std ;

Shop::Shop(std::string shop = "SHOP" , int AC = 1111 , USD blc = USD(50000)) : Organization_Acc(shop , AC , blc) {
    Customer1 = new Personal_Acc("mehrab" , 1385 , USD(2000)) ;
}


void Shop::Add_Shop() {

    int price, amount;
    string choose , fname, name, unit;
    Item  ptr;

    float cost = 0 ;

    cout<< "Enter your list : type(fruit , seasoning , snack) , name , price , amount '\n" ;

    while(1){

        cin >> choose;

        if(choose == "fruit"){fname = "fruit,txt"; unit = "kg";}

        else if(choose == "seasoning"){fname = "seasoning.txt"; unit = "g";}

        else if(choose == "snack"){fname = "snack.txt"; unit = "package";}

        else if(choose == "exit")break;

        else{
            
            cerr << "You enterd wrong thing\n";

            continue;
        }

        cin >> name;
        cin >> price;
        cin >> amount;
        
        ptr.set_name(name);
        ptr.set_price(price);
        ptr.set_amount(amount);
        ptr.set_unit(unit);
        ptr.set_file_name(fname);

        cost += (price * amount) ;

        if(this->Get_balance() - USD(cost) < USD(0)) {
            throw invalid_argument("you cant pay more than of your money") ;
        }

        ptr.Add_Pruduct();

    }

    this->Set_balance(this->Get_balance() - USD(cost)) ;

    // add an print vector 

}

void Shop::Remove_Shop() {

    int price, amount;
    string choose , fname, name, unit;
    Item  ptr;

    float cost = 0 ;

    cout<< "Enter your list : type(fruit , seasoning , snack) , name , price , amount '\n" ;

    while(1){

        cin >> choose;

        if(choose == "fruit"){fname = "fruit,txt"; unit = "kg";}

        else if(choose == "seasoning"){fname = "seasoning.txt"; unit = "g";}

        else if(choose == "snack"){fname = "snack.txt"; unit = "package";}

        else if(choose == "exit")break;

        else{
            
            cerr << "You enterd wrong thing\n";

            continue;
        }

        cin >> name;
        cin >> price;
        cin >> amount;
        
        ptr.set_name(name);
        ptr.set_price(price);
        ptr.set_amount(amount);
        ptr.set_unit(unit);
        ptr.set_file_name(fname);

        cost += (price * amount) ;

        if(Customer1->Get_balance() - USD(cost) < USD(0)) {
            throw invalid_argument("you cant pay more than of your money") ;
        }

        cost -= (ptr.Remove_Product(discount) * price);
    }

    Customer1->Set_balance(Customer1->Get_balance() - USD(cost)) ;   
    
    // add an print vector 
}