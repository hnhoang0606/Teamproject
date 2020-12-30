#include "../dataaccess/EmployeeData.h"
#include<iostream>
#include"../businessobject/Employee.h"
using namespace std;

class Ui 
{   private:
        EmployeeData employeeData;
        int Input;

    public:
        void MainInterface();
        void ChooseFuntion();
        void ChooseTable();
        void ChooseOption();
        void DisplayEmployee();
        Employee ChoseToEdit()
        //istream& operator >> (istream& input);
};
