#ifndef _ui_ui_H
#define _ui_ui_H

#include "../dataaccess/EmployeeData.h"
#include<iostream>
#include"../businessobject/Employee.h"
using namespace std;

class Ui 
{// {   private:
//         //EmployeeData employeeData;

    public:
        void getEmployee();
        void MainInterface();
        void ChooseFuntion(int a);
        void ChooseTable();
        void ChooseOption();
        void DisplayEmployee();
        int ChooseToEdit();
       

};
//istream & operator >> (istream & input,Employee &employee);
Employee EnterInformation();

#endif