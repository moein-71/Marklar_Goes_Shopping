#include "Program.hpp"

using namespace std;

void Program::run(){

    int choose;

    while(1){

        try{
            cout << "Please enter a number: 1.Personal  2.Organization  3.exit\n";

            cin >> choose;

            if(choose == 1){
                Personal() ;
            }

            else if(choose == 2){
                Organization() ;
            }

            else if(choose == 3)break;

            else cerr << "You enterd wrong number\n";
        }
        catch(invalid_argument &s) {
            cout<< s.what() << '\n' ;
        }
        catch(runtime_error &s) {
            cout<< s.what() << '\n' ;
        }
        catch(...){
            cout<< "you do somthing bad\n" ;
        }
    }
}

void Program::Personal() {

    while(1){
        
        int choose ;
        cout<< "1.Person balance 2.Shop balance 3.buy 4.see Shop 5.exit : " ;

        cin>> choose ;

        if(choose == 1) {
            cout<< Greatest_Shop.Get_Person_Balance() ;
        }
        else if(choose == 2) {
            cout<< Greatest_Shop.Get_balance() ;
        }
        else if(choose == 3) {
            Greatest_Shop.Remove_Shop() ;
        }
        else if(choose == 4) {
            Greatest_Shop.showitem() ;
        }
        else if(choose == 5) {
            break ;
        }
    }
}

void Program::Organization() {

    while(1){

        int choose ;
        cout<< "1.Shop balance 2.add 3.see Shop 4.exit : " ;

        cin>> choose ;

        if(choose == 1) {
            cout<< Greatest_Shop.Get_balance() ;
        }
        else if(choose == 2) {
            Greatest_Shop.Add_Shop() ;
        }
        else if(choose == 3) {
            Greatest_Shop.showitem() ;
        }
        else if(choose == 4) {
            break ;
        }
    }
}