#ifndef Personal_HPP
#define Personal_HPP

#include "../Bank_Account.hpp"

class Personal_Acc : public Bank {

    public :

    Personal_Acc(std::string Holder_Name , int Acc_Number , USD balance , USD Daily_Limit = USD(1000)) ;

    private :

} ;

#endif //Personal_hpp