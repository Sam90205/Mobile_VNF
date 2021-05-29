#ifndef VNF_H
#define VNF_H
class VNF{
    public :
        VNF();
        ~VNF();
        int location_MEC ; 
        int location_user ;
        int CPU_Resource ; 
        int link_capacity_service;
        int link_capacity_migrate;
        int VNF_dealy ;
        int get_VNF_Delay();
        

};
#endif