#include<iostream>
using namespace std;
void newdoctor(int day, int treat_patients, int untreat_patients, int &doctors) 
{
    if (day % 3 == 0 && untreat_patients > treat_patients) 
    {
        doctors++; 
    }
}
void treatpatients(int patient_arrive, int doctors, int &treat_patients, int &untreat_patients) {
    if (patient_arrive <= doctors) 
    {
        treat_patients += patient_arrive;
    } else
     {
        treat_patients += doctors; 
        untreat_patients += (patient_arrive - doctors); 
    }
}

int main() 
{
    int doctors = 7, days, treat_patients = 0, untreat_patients = 0, patient_arrive;

    cout << "Enter the number of days: ";
    cin >> days;

    for (int i = 1; i <= days; i++) 
    {
        cout << "Enter the number of patients for day " << i << ": ";
        cin >> patient_arrive;
         newdoctor(i, treat_patients, untreat_patients, doctors);
        treatpatients(patient_arrive, doctors, treat_patients, untreat_patients);
    }
    cout<< "Treated patients: " << treat_patients << endl;
    cout<< "Untreated patients: " << untreat_patients << endl;
}
