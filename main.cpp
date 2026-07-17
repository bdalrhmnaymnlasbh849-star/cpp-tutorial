#include <iostream>
#include <cstdlib>

using namespace std;

float CalculateSalaryForDoctor(float HoursTime, float SalaryPerHour)
{
    float salary = HoursTime * SalaryPerHour * 1.25;
    return salary;
}

float CalculateSalaryForNurse(float HoursTime, float SalaryPerHour)
{
    float salary = HoursTime * SalaryPerHour * 1.15;
    return salary;
}

float SubstractFromDoctor(float HoursTime, float SalaryPerHour)
{
    float result = HoursTime * SalaryPerHour * 1.3; 
}

float SubstractFromNurse(float HoursTime, float SalaryPerHour)
{
    float result = HoursTime * SalaryPerHour * 1.5; 
}

int main()
{
    string doctorName = "Mansour";
    float salaryPerHour = 135.5;
    float hoursTime = 50.25;

    float result = CalculateSalaryForDoctor(hoursTime, salaryPerHour);
    cout << "Salary For Doctor " << doctorName << " is: " << result << endl;

    cout << "Bye";
}