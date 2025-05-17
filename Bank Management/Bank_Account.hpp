#ifndef BANK_ACC_HPP
#define BANK_ACC_HPP

#include <iostream>
#include "../Currency_System/USD/USD.hpp"

class Bank {

    public :

        Bank(std::string Holder_Name , int Acc_Number , USD balance) ;

        virtual void deposit(const USD & amount) = 0 ; 

        virtual void withdraw(const USD & amount) = 0 ;

        std::string Get_HN() ;

        int Get_AC() ;

        void Set_balance(const USD other) ;
        USD Get_balance() ;

        virtual void Print() = 0 ;

    private :

        std::string Holder_Name ;
        int Acc_Number ;
        USD balance ;
        
} ;

#endif //BANK_ACC_HPP