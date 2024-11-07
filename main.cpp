#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


struct Problem{
    string typeOfIllness;
    string medicalSpecialty;
};


struct Doctor {
    string name;
    string medicalSpecialty;
};


int main()
{

    vector<Doctor> doctor;
    vector<Problem> problem;

    Doctor new_doctor;
    Problem new_problem;

    int nrOfProblems, nrOfDoctors;

    ifstream inFile("input.txt");

    inFile >> nrOfProblems;


    for (int i = 0; i < nrOfProblems; i++)
    {

        inFile >> new_problem.typeOfIllness;
        inFile >> new_problem.medicalSpecialty;
        problem.push_back(new_problem);
        cout << problem[i].typeOfIllness << '\t' << problem[i].medicalSpecialty << '\n';
    }

    cout << "\n";
    inFile >> nrOfDoctors;

    for (int i = 0; i < nrOfDoctors; i++)
    {
        inFile >> new_doctor.name;
        inFile >> new_doctor.medicalSpecialty;
        doctor.push_back(new_doctor);
        cout << doctor[i].name << '\t' << doctor[i].medicalSpecialty << '\n';
    }

    cout << "\n";

    for (int i = 0; i < nrOfProblems; i++)
    {
        for (int j = 0; j < nrOfDoctors; j++)
        {
            if (problem[i].medicalSpecialty == doctor[j].medicalSpecialty) {
                cout << problem[i].typeOfIllness << '\t' << "Acceptat" << '\n';
                break;
            }

            if(j == nrOfDoctors - 1)
            {
                cout << problem[i].typeOfIllness << '\t' << "Respins" << '\n';
            }
        }
    }
    return 0;
}