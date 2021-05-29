#ifndef User_H
#define User_H
#include "VNF.hpp"
#include <vector>
using namespace std ;
class User{
    public :
        User();
        ~User();
        int User_location_x , User_location_y , User_Nearest_MEC ;
        int User_velocity;
        int User_group;
        int User_Belong_group_rate;
        vector<int> User_dist_MEC;
        void set_User_Nearest_MEC(int mec );
        int get_User_Nearest_MEC();

};
#endif