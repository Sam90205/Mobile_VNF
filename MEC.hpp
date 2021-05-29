#ifndef MEC_H
#define MEC_H
#include "VNF.hpp"
#include "Service.hpp"
#include <vector>
using namespace std ;
// Network Service in Network
class MEC{
    
    public :
    MEC();
    ~MEC();
        int location_x,location_y ;
        int cover_range , transmission_rate_out , transmission_rate_in ;
        int CPU_core ;
        // User source & destination need VNF location 
        int User_source , User_destinaion ; 
        VNF MEC_VNF ;
        void set_location(int  a , int b );
        int get_location_x() , get_location_y();
        void set_user_flow (int source , int destination);
        int get_User_source() , get_User_destination() ;  
};







#endif