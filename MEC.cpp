#include <stdio.h>
#include <iostream>
#include "Group.hpp"
#include "Service.hpp"
#include "User.hpp"
#include "MEC.hpp"
#include "VNF.hpp"
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
using namespace  std;



MEC::MEC(){
    srand( time(NULL) );
    location_x = rand() % 6 ;
    location_y = rand() % 6 ;
    cover_range = 50;  //entire region = 150 
    CPU_core = 16 ;
    transmission_rate_out = 300;
    transmission_rate_in = 3000; 
}

int MEC::get_location_x( ){
    return location_x ;
}

void MEC ::set_location(int a , int b ){
    location_x =a ;
    location_y =b ;
    // cout << location_x << " " << location_y <<endl ;
}

void MEC :: set_user_flow (int a, int b ) {
    User_source = 0 ; 
    User_destinaion = rand() % 10 ; 
}


MEC::~MEC() {}


