#ifndef Organization_HPP
#define Organization_HPP

#include "../Bank_Account.hpp"

class Organization_Acc : public Bank {

    public :

        Organization_Acc(std::string Holder_Name , int Acc_Number , USD balance , USD Daily_Limit = USD(10000)) ;

    private :

} ;

#endif //Organization_HPP