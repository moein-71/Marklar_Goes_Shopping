#include "Shop.hpp"
#include <vector>

using namespace std ;

Shop::Shop(std::string shop , int AC , USD blc) : Organization_Acc(shop , AC , blc) {
    Customer1 = new Personal_Acc("mehrab" , 1385 , USD(2000)) ;
}


void Shop::Add_Shop() {

    int price, amount , limit_amount;
    string choose , fname, name, unit;
    Item  ptr;

    vector<Item> add_item ; 

    float cost = 0 ;

    cout<< "Enter your list : type(fruit , seasoning , snack) , name , price , amount , limit_amount \n" 
    << "if you want to exit \n";

    while(1){

        cin >> choose;

        if(choose == "fruit"){fname = "fruit.txt"; unit = "kg" ;}

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
        cin >> limit_amount ; 
        
        ptr.set_name(name);
        ptr.set_price(price);
        ptr.set_amount(amount);
        ptr.set_unit(unit);
        ptr.set_limit_amount(limit_amount) ;
        ptr.set_file_name(fname);

        cost += (price * amount) ;

        if(this->Get_balance() - USD(cost) < USD(0)) {
            cerr<< "you can't buy more than of these" ;
            break ;
        }

        ptr.Add_Pruduct();

        add_item.push_back(ptr) ;

    }

    this->Set_balance(this->Get_balance() - USD(cost)) ;

    // for(const Item &s : add_item)cout<< s << '\n' ; 
}

void Shop::Remove_Shop() {

    int price, amount ;
    string choose , fname, name, unit ;
    Item  ptr;

    vector<Item> remove_item ; 

    float cost = 0 ;

    cout<< "Enter your list : type(fruit , seasoning , snack) , name , amount \n" 
    << "if you want to exit \n";

    while(1){

        cin >> choose;

        if(choose == "fruit"){fname = "fruit.txt"; unit = "kg";}

        else if(choose == "seasoning"){fname = "seasoning.txt"; unit = "g";}

        else if(choose == "snack"){fname = "snack.txt"; unit = "package";}

        else if(choose == "exit")break;

        else{
            
            cerr << "You enterd wrong thing\n";

            continue;
        }

        cin >> name;
        // cin >> price;
        cin >> amount;
        
        ptr.set_name(name);
        ptr.set_amount(amount);
        ptr.set_unit(unit);
        ptr.set_file_name(fname);


        // if(Customer1->Get_balance() - USD(cost) < USD(0)) {
        //     cout<< "you can't buy more than of these" ;
        // }

        cost -= (ptr.Remove_Product(discount , &price) * price) ;

        ptr.set_price(price) ;

        cost += (price * amount) ;

        remove_item.push_back(ptr) ;

        if(Customer1->Get_balance() - USD(cost) < USD(0)) {

            ptr.Add_Pruduct() ;
            remove_item.pop_back() ;
            cerr<< "you can't buy more than of these" ;

            break ;
        }
    }

    cout<< " fasdf" << cost << '\n' ;

    Customer1->Set_balance((Customer1->Get_balance() - USD(cost))) ;

    cout<< Customer1->Get_balance() ;

    // for(const Item &s : remove_item)cout<< s << '\n' ; 
}

void Shop::showitem() {

    int price, amount , limit_amount;
    string choose , fname, name, unit;

    ifstream a ("fruit.txt") ;

    while(a >> name >> price >> amount >> unit >> limit_amount) {
        cout<< name << " " << price << " " << amount << " " << unit << " " << limit_amount << '\n' ;
    }

    a.open("seasoning.txt") ;


    cout<< '\n' ;

    while(a >> name >> price >> amount >> unit >> limit_amount) {
        cout<< name << " " << price << " " << amount << " " << unit << " " << limit_amount << '\n' ;
    }

    a.open("snack.txt") ;

    while(a >> name >> price >> amount >> unit >> limit_amount) {
        cout<< name << " " << price << " " << amount << " " << unit << " " << limit_amount << '\n' ;
    }

    cout<< '\n' ;

}