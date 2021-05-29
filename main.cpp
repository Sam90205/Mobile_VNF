#include <stdio.h>
#include <iostream>
#include "VNF.hpp"
#include "Group.hpp"
#include "Service.hpp"
#include "User.hpp"
#include "MEC.hpp"
#include <math.h>
using namespace  std;

void setMEClocation(vector<MEC> &MEC_server );
void getUserServiceMEC(User &User );
int ComputeUserServicedelay(int Service_hop) ;
vector<MEC>MEC_server(10);
VNF *vnf   =  new VNF();
int main() {
  User *user =  new User();
  vector<int> short_dist(10);
  short_dist = {0,1,2,3,4,3,4,5,6,7};
  setMEClocation(MEC_server);
  getUserServiceMEC(*user);
  cout<<endl << "User Flow Source (Nearest MEC)   : " << user->get_User_Nearest_MEC()<<endl ;
  ComputeUserServicedelay (short_dist[user->User_Nearest_MEC]);
  
  // Set VNF is lcocate 1 

  cout <<endl ;
  return 0;
}

void setMEClocation(vector<MEC> &a ){
  for (int  i = 0; i < a.size() ; i++)
  {
    /* code */
    a[i].set_location(i,i);
  }
  
}
  
void   getUserServiceMEC(User &user){
  for (int i = 0; i < MEC_server.size(); i++)
  {
    /* code */
    int a = MEC_server[i].location_x - user.User_location_x ; 
    int b = MEC_server[i].location_y - user.User_location_y ;
    int dist = sqrt(a*a+b*b);
    user.User_dist_MEC.push_back(dist);
    cout << endl << "MEC "<< i  << " with USER ditance :   "  << dist ;
  }
  int min =999;
  for (int  i = 0; i <  user.User_dist_MEC.size(); i++)
  {
    if (min > user.User_dist_MEC[i]){
      min  = user.User_dist_MEC[i] ;
      // user.User_Nearest_MEC = i ; 
      user.set_User_Nearest_MEC(i);
    }
    /* code */
  }
}
int ComputeUserServicedelay(int htop) {
  int VNF_Delay = vnf->get_VNF_Delay() ; 
  cout << "Each VNF Node delay :  " << vnf->get_VNF_Delay()<< endl
       << "User Flow count  " << htop << endl 
       << "Total delay " << htop * VNF_Delay ; 
  return 0 ; 
}




