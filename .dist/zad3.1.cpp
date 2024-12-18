#include <iostream>
using namespace std;

class Abstract {
public:
    string name;
private:
    int phone;
protected:
    string e_mail;
public:
    Abstract() {
        cout << "constructor Abstract\n";
        cout << "Enter name: "; cin >> name;
        cout << "Enter phone: "; cin >> phone;
        cout << "Enter e-mail: "; cin >> e_mail;
    }

    ~Abstract() {
        cout << "destructor Abstract\n";
    }

    string getEMail() { return e_mail; }
    int getPhone() { return phone; }
};

class ResumeEU : protected Abstract {
protected:
    string experience;
    string education;
public:
    ResumeEU() {
        cout << "constructor ResumeEU\n";
        cout << "Enter experience: "; cin >> experience;
        cout << "Enter education: "; cin >> education;
    }

    ~ResumeEU() {
        cout << "destructor ResumeEU\n";
    }

    void printResume() {
        cout << "name\t\t" << name << endl;
        cout << "phone\t\t" << getPhone() << endl;
        cout << "e-mail\t\t" << e_mail << endl;
        cout << "experience\t" << experience << endl;
        cout << "education\t" << education << endl;
    }
};

class ResumeUSA : protected ResumeEU {
protected:
    string achievements;
    string specificSkills;
public:
    ResumeUSA() {
        cout << "constructor ResumeUSA\n";
        cout << "Enter your achievements: "; cin >> achievements;
        cout << "Enter your specificSkills: "; cin >> specificSkills;
    }

    ~ResumeUSA() {
        cout << "destructor ResumeUSA\n";
    }

    void printResume() {
        ResumeEU::printResume();
        cout << "achievements\t" << achievements << endl;
        cout << "specificSkills\t" << specificSkills << endl;
    }
};

int main() {
    cout << "\nInput ResumeEU:\n";
    ResumeEU myResumeEU;
    cout << "\nOutput ResumeEU:\n";
    myResumeEU.printResume();

    cout << "\nInput ResumeUSA:\n";
    ResumeUSA myResumeUSA;
    cout << "\nOutput ResumeUSA:\n";
    myResumeUSA.printResume();

    return 0;
}
