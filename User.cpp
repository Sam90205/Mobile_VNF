#include <stdio.h>
#include <iostream>
#include "VNF.hpp"
#include "Group.hpp"
#include "Service.hpp"
#include "User.hpp"
#include "MEC.hpp"
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
using namespace  std;



User::User(){
    srand( time(NULL) );
    User_location_x = 5 ;
    User_location_y = 5 ;
    User_Nearest_MEC = 0 ; 
}

User::~User() {}

void User::set_User_Nearest_MEC(int i ){
    User_Nearest_MEC = i;
}

int User::get_User_Nearest_MEC(){
    return User_Nearest_MEC ;
}


