#include"ui.h"

void Ui::MainInterface()
{   Ui ui;
    bool Iscontinue = true;
    do{ 
        int Choice;
        cout<<"========================================"<<endl;
        cout<<"**Choose funtion that you want to use **"<<endl;
        cout<<"1. Display/Edit/Insert/Delete..................."<<endl;
        cout<<"========================================"<<endl;
        cout<<"your Choice_";
        cin >> Choice;
        // cin >> ui;
        
        switch (Choice)
        {
        case 1:
            int SubChoice;
            ChooseFuntion();
            cin>> SubChoice;
            switch (SubChoice)
            {
            case 1:
                int SubChoice2;
                ChooseTable();
                cin>>SubChoice2;
                switch (SubChoice2)
                {
                case 1:
                    DisplayEmployee();
                    break;
                case 2:
                    cout<<"oke thoi"<<endl;
                default:
                    cout<<" Enter again"<<endl;
                    break;
                
                }
                break;
            break;
            }
            case 2:
                cout<<"truong hop 2"<<endl;
                break;
        default:
            system("cls");
            cout<<"please Enter Again"<<endl;
            break;
        }
    }while (Iscontinue = true);
    
}

void Ui:: ChooseFuntion()
{
    cout<<"**************************************************************"<<endl;
    cout<<"#####          select the function you want to use      ######"<<endl;
    cout<<"                       ******************                     "<<endl;
    cout<<" 1. Display the Table"<<endl;
    cout<<" 2. Add the element to the table"<<endl;
    cout<<" 3. Edit the contents of the table"<<endl;
    cout<<" 4. Delete elements from the table"<<endl;
    cout<<" 0. Stop"<<endl;
    cout<<"**************************************************************"<<endl;
    cout<<"Your choice__";
}

void Ui::ChooseTable()
    {   cout<<"**************************************************************"<<endl;
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
        cout<<"Your choice_";
}

void Ui::DisplayEmployee()
{
    EmployeeData employeeData("Employee.data");
    for(int i =0;i<employeeData.GetSize();i++)
    {
        Employee employee = employeeData.Get(i);
        cout<< employee.ToString()<<endl;
    }
}

// istream& operator >> (istream & input)
// {   Ui ui;
//     input >> ui.Input;
//     return input;
// }


E Ui::ChoseToEdit ()
{   EmployeeData employeeData("Employee.data");
    int n;
    cout<<"|** Please enter the Id of the Employee in the table you want to edit **|" <<endl;
    cout<<" Your Choice _"; cin >> n;
    Employee employee = employeeData.Get(n);
    cout<< employee.ToString()<<endl;
    cout<<endl;
    cout<<"|**Please choose the item you want to edit in the table **|"<<endl;
    cout<<"|** 1. FName **|"<<endl;
    cout<<"|** 2. MInit **|"<<endl;
    cout<<"|** 3. LName **|"<<endl;
    cout<<"|** 4. SSN **|"<<endl;
    cout<<"|** 5. BDate **|"<<endl;
    cout<<"|** 6. Address **|"<<endl;
    cout<<"|** 7. Sex **|"<<endl;
    cout<<"|** 8. Salary **|"<<endl;
    cout<<"|** 9. SuperSSN **|"<<endl;
    cout<<"|** 10. DNO **|"<<endl;
    return employee;
}


    


}