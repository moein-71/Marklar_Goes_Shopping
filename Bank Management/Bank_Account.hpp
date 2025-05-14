#ifndef BANK_ACC_HPP
#define BANK_ACC_HPP

#include <iostream>
#include "../Currency_System/USD/USD.hpp"

class Bank {

    public :

        Bank(std::string Holder_Name , int Acc_Number , USD balance , USD Daily_Limit) ;

        void deposit(const USD & amount) ;

        void withdraw(const USD & amount) ;

        std::string Get_HN() ;

        int Get_AC() ;

        USD Get_DL() ;

        void Set_balance(const USD & other) ;
        USD Get_balance() ;

        void Print() ;

    private :

        std::string Holder_Name ;
        int Acc_Number ;
        USD Daily_Limit ;
        USD balance ;
} ;

#endif //BANK_ACC_HPP