#ifndef Group_H
#define Group_H
#include "VNF.hpp"
#include <vector>
using namespace std ;
class Group{
    public :
        int Group_velocity;
        int Group_service_num;
        int Group_service_migrate;
        int Server_boundary_crossing_rate ;
        int Cluster_boundary_crossing_rate;
        int Migration_rate;
        int Server_num;
        

};
#endif