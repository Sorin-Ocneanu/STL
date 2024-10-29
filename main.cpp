#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


struct Problema{
    string id_problem;
    string id_specialty;
};


struct Doctor{
 string name;
 string speciality;

};



int main()
{
    vector<Doctor> Doc;
    vector<Problema> Pro;

    ifstream inFile("input.txt");

    int no_problems, no_doctors;

    string name, speciality;
    inFile >> no_problems;

    for (int i = 0; i < no_problems; i++)
    {
        inFile >> Pro[i].id_problem;
        inFile >> Pro[i].id_specialty;
        cout << name << ' ' << speciality << '\n';
    }

    inFile >> no_doctors;

    for (int i = 0; i < no_doctors; i++)
    {
        inFile >> Doc[i].name;
        inFile >> Doc[i].speciality;
        cout << name << ' ' << speciality << '\n';
    }

    for(int i = 0; i < no_problems; i++)
    {
        for (int i = 0; i< no_doctors;i++)
        {

        }
    }


    return 0;
}