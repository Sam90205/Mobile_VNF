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



VNF::VNF(){
    CPU_Resource = 1 ;
    VNF_dealy = 20;
}
VNF::~VNF(){}

int VNF ::  get_VNF_Delay (){
    return VNF_dealy ; 
}


