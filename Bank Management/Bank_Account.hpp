#ifndef BANK_ACC_HPP
#define BANK_ACC_HPP

#include <iostream>
#include "../Currency_System/USD/USD.hpp"

class Bank {

    public :

        Bank(std::string Holder_Name , int Acc_Number , USD Daily_Limit , USD balance) ;

        void deposit(const USD & amount) ;

        USD withdraw(const USD & amount) ;

        USD Get_balance() ;

    private :

        std::string Holder_Name ;
        int Acc_Number ;
        USD Daily_Limit ;
        USD balance ;
} ;

#endif //BANK_ACC_HPP