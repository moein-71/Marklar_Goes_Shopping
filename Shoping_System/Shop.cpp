#include "Shop.hpp"
#include "../Item Managment/item.hpp"
#include <vector>

using namespace std ;

Shop::Shop(std::string shop , int AC , USD blc) : Organization_Acc(shop , AC , blc) {
    Customer1 = new Personal_Acc("mehrab" , 1385 , USD(2000)) ;
}

Shop::~Shop() {

    delete Customer1 ;

    cout<< "See You Later" << '\n' ;
}


void Shop::Add_Shop(){

    int price, amount , limit_amount;
    string choose , fname, name, unit;
    Item  *ptr = nullptr ;

    vector<Item *> add_item ; 

    float cost = 0;

    cout<< "Enter your list : type(fruit , seasoning , snack) , name , price , amount , limit_amount \n" 
    << "if you want to exit \n";

    while(1){

        cin >> choose;

        if(choose == "exit")break ;

        cin >> name;
        cin >> price;
        cin >> amount;
        cin >> limit_amount ; 

        if(choose == "fruit"){fname = "fruit.txt"; ptr = new Fruit(name , price , amount , limit_amount);}

        else if(choose == "seasoning"){fname = "seasoning.txt"; ptr = new Seasoning(name , price , amount , limit_amount);}

        else if(choose == "snack"){fname = "snack.txt"; ptr = new Snack(name , price , amount , limit_amount);}

        else if(name == "exit")break;

        else{
            
            cerr << "You enterd wrong thing\n";

            continue;
        }
        
        ptr->set_file_name(fname);

        cost += (price * amount);

        if(this->Get_balance() - USD(cost) < USD(0)) {
            cerr<< "you can't buy more than of these" ;
            break ;
        }

        ptr->Add_Pruduct();

        add_item.push_back(ptr) ;

    }

    this->Set_balance(this->Get_balance() - USD(cost));

    if(!add_item.empty()){     
        for( Item *s : add_item){
            cout<< *s << '\n' ; 
            delete s ;
        }
    }
}

void Shop::Remove_Shop() {

    int price, amount ;
    string choose , fname, name, unit ;
    Item  *ptr;

    vector<Item*> remove_item ; 

    float cost = 0;

    cout<< "Enter your list : type(fruit , seasoning , snack) , name , amount \n" 
    << "if you want to exit \n";

    while(1){

        cin >> choose;

        if(choose == "exit")break ;

        cin >> name;

        if(name == "exit")break;

        cin >> amount;

        if(choose == "fruit"){fname = "fruit.txt"; ptr = new Fruit(name , price , amount , 0);}

        else if(choose == "seasoning"){fname = "seasoning.txt"; ptr = new Seasoning(name , price , amount , 0);}

        else if(choose == "snack"){fname = "snack.txt"; ptr = new Snack(name , price , amount , 0);}

        else{
            
            cerr << "You enterd wrong thing\n";

            continue;
        }

        ptr->set_file_name(fname);

        int dis_amount = ptr->Remove_Product(discount , &price) ;

        ptr->set_price(price) ;

        cost += (price * amount) ;
        cost -= (dis_amount * price) ;

        if(Customer1->Get_balance() - USD(cost) < USD(0)) {
            
            ptr->Add_Pruduct() ;
            cerr<< "you can't buy more than of these" ;

            break ;
        }
        remove_item.push_back(ptr) ;
    }

    Customer1->Set_balance((Customer1->Get_balance() - USD(cost))) ;

    this->Set_balance((this->Get_balance() + USD(cost))) ;

    if(!remove_item.empty()){
        for(Item *s : remove_item) {
        cout<< *s << '\n' ; 
        delete s ;
        }
    }
}

// void Shop::showitem() {

//     int price, amount , limit_amount;
//     string choose , fname, name, unit;

//     ifstream a ("fruit.txt") ;

//     while(a >> name >> price >> amount >> unit >> limit_amount) {
//         cout<< name << " " << price << " " << amount << " " << unit << " " << limit_amount << '\n' ;
//     }

//     a.open("seasoning.txt") ;


//     cout<< '\n' ;

//     while(a >> name >> price >> amount >> unit >> limit_amount) {
//         cout<< name << " " << price << " " << amount << " " << unit << " " << limit_amount << '\n' ;
//     }

//     a.open("snack.txt") ;

//     while(a >> name >> price >> amount >> unit >> limit_amount) {
//         cout<< name << " " << price << " " << amount << " " << unit << " " << limit_amount << '\n' ;
//     }

//     cout<< '\n' ;

// }