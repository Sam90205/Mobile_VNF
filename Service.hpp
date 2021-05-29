#ifndef Service_H
#define Service_H
#include "VNF.hpp"
#include <vector>
using namespace std ;
// Network Service in Network
class Service{
    public :
        int Service_number ;
        int Service_VNF_nubmer;
        int Service_request_rate ; 
        vector<VNF> SFC ;
};
#endif