#include <iostream>
#include <string>
using namespace std;

class UserAccount
{
public:
    string name;

    void getUser()
    {
        cout << "Enter User Name: ";
        cin >> name;
    }
};

class ActivityTracker : virtual public UserAccount
{
public:
    int steps;

    void getActivity()
    {
        cout << "Enter Steps: ";
        cin >> steps;
    }
};

class MedicalLog : virtual public UserAccount
{
public:
    float weight;

    void getMedical()
    {
        cout << "Enter Weight: ";
        cin >> weight;
    }
};

class HealthAssessment : public ActivityTracker, public MedicalLog
{
public:
    void display()
    {
        cout << "\\nName: " << name;
        cout << "\\nSteps: " << steps;
        cout << "\\nWeight: " << weight;
    }
};

int main()
{
    HealthAssessment h;

    h.getUser();
    h.getActivity();
    h.getMedical();
    h.display();

    return 0;
}
