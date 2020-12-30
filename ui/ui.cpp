#include"ui.h"

void Ui::MainInterface()
{
    bool Iscontinue = true;
    do{ 
        int Choice;
        cout<<"========================================"<<endl;
        cout<<"**Choose funtion that you want to use **"<<endl;
        cout<<"1. Display/..................."<<endl;
        cout<<"========================================"<<endl;
        cout<<"your Choice_"; cin >> Choice;
       
        switch (Choice) // choose sentence
        {
        case 1:
            ChooseTable();
            break;
        default:
            system("cls");
            cout<<"please Enter Again"<<endl;
            break;
        }
    }while (Iscontinue ==true); 
}


void Ui::ChooseTable()
{   bool Iscontinue = true;
    do 
    {   int SubChoice;
        cout<<"**************************************************************"<<endl;
        cout<<"#####         select the Table you want to use          ######"<<endl;
        cout<<"                     ******************                       "<<endl;
        cout<<"1. Employee table"<<endl;
        cout<<"2. Department table"<<endl;
        cout<<"3. Dept_Location table"<<endl;
        cout<<"4. Project table"<<endl;
        cout<<"5. Work_on table"<<endl;
        cout<<"6. Dependent table"<<endl;
        cout<<"0. Stop"<<endl;
        cout<<"***************************************************************"<<endl;
        cout<<"Your choice_"; cin >> SubChoice;
        switch (SubChoice)
        {
        case 1:
            ChooseFuntion(SubChoice);
        break;
        
        default:
            break;
        }
    }
    while(Iscontinue==true);
}

void Ui:: ChooseFuntion(int Subchoice) //
{   bool Iscontinue = true;
    do
    {
    
        int Subchoice2;
        cout<<"**************************************************************"<<endl;
        cout<<"#####          select the function you want to use      ######"<<endl;
        cout<<"                       ******************                     "<<endl;
        cout<<" 1. Display the Table"<<endl;
        cout<<" 2. Edit the content of the table"<<endl;
        cout<<" 3. Add elements to the table"<<endl;
        cout<<" 4. Delete elements from the table"<<endl;
        cout<<" 0. Stop"<<endl;
        cout<<"**************************************************************"<<endl;
        cout<<"Your choice__"; cin>> Subchoice2;
        switch (Subchoice2)
        {
        case 1:
            if(Subchoice ==1)
            {
            DisplayEmployee();
            }
            break;
        case 2:
            if(Subchoice = 1)
            {
            EmployeeData employeeData;
            employeeData.Edit_Table();
            }
            break;
        }
    }
    while(Iscontinue==true );
};



void Ui::DisplayEmployee()
{
    EmployeeData employeeData("Employee.data");
    for(int i =0;i<employeeData.GetSize();i++)
    {
        Employee employee = employeeData.Get(i);
        cout<< employee.ToString()<<endl;
    }
}

Employee EnterInformation()
{   string s;
    Employee employee;
    cout<<" Enter FName_" ;cin>> employee.FName;
    cout<<" Enter MInit_"; cin>> employee.MInit;
    cout<<" Enter LName_"; cin>> employee.LName;
    cout<<" Enter SSN_"; cin>> employee.SSN;
    cout<<" Enter BDate_"; cin>> employee.BDate;
    cout<<" Enter Address_"; cin>> employee.Address;
    cout<<" Enter Salary_"; cin>> employee.Salary;
    cout<<" Enter SuperSSN_"; cin>> employee.SuperSSN;
    cout<<" Enter DNO_"; cin>> employee.DNO;
    cout<< " Enter SEX_" ; cin >> employee.Sex ;
    return employee;
}

int Ui::ChooseToEdit()
{ 
    cout<<"|** Please enter the Id of the Employee in the table you want to edit **|" <<endl;
    cout<<" Your Choice _"; 
    int n;
    cin >> n;
    return n;
}





// }

// istream & operator >> (istream & input,int &variable)
// {
//     cout<<"Enter Employee" << endl;
//     string s ="ok";
//     input >> employee.;
//     return input;
    
// }



