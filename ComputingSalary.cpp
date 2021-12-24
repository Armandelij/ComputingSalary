
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{   
     int myPay;
     int hourlyWage;
     int weeklyHours;
     int overtimeHours;
     int code;
     int weeklyWage;
     int weeksWorked;
     int grossWklySales;
     std::cout << "What is the code?";
     std::cin >> code;
     switch(code)
     {
         case 1:
            cout << "What is the weekly wage?";
            cin >>  weeklyWage;
            cout << "How many weeks worked?";
            cin >>  weeksWorked;
            cout << weeklyWage * weeksWorked << std::endl;
            break;
        case 2:
            cout << "What is the hourly wage?";
            cin >> hourlyWage;
            cout << "How many hours a week worked?";
            cin >> weeklyHours;
            cout << "How many overtime hours worked?";
            cin >> overtimeHours;
            cout << hourlyWage * 1.5 * overtimeHours << std::endl;
            break;
        case 3: 
            cout << "What is the gross weekly sales";
            cin >> grossWklySales;
            cout << 250 + (grossWklySales * 5.7) << std::endl;
            break;
     }


            


            
    
}