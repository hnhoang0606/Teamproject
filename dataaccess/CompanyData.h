#ifndef _dataaccess_Company_Data_H_
#define _dataaccess_Company_Data_H_
#include "../businessobject/Employee.h"
#include<vector>
using namespace std;


class CompanyData
{
     public:
     virtual void Read_From_File() = 0;
     virtual void EditTable()=0;
};

#endif