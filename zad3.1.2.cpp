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

class CurriculumVitae : public ResumeEU {
protected:
    string certifications;
    string languages;
public:
    CurriculumVitae() {
        cout << "constructor CurriculumVitae\n";
        cout << "Enter certifications: "; cin >> certifications;
        cout << "Enter languages: "; cin >> languages;
    }

    ~CurriculumVitae() {
        cout << "destructor CurriculumVitae\n";
    }

    void printResume() {
        ResumeEU::printResume();
        cout << "certifications\t" << certifications << endl;
        cout << "languages\t" << languages << endl;
    }
};

class FranceCV : public CurriculumVitae {
protected:
    string frenchSkills;
public:
    FranceCV() {
        cout << "constructor FranceCV\n";
        cout << "Enter your French skills: "; cin >> frenchSkills;
    }

    ~FranceCV() {
        cout << "destructor FranceCV\n";
    }

    void printResume() {
        CurriculumVitae::printResume();
        cout << "frenchSkills\t" << frenchSkills << endl;
    }
};

int main() {
    cout << "\nInput CurriculumVitae:\n";
    CurriculumVitae myCV;
    cout << "\nOutput CurriculumVitae:\n";
    myCV.printResume();

    cout << "\nInput FranceCV:\n";
    FranceCV myFranceCV;
    cout << "\nOutput FranceCV:\n";
    myFranceCV.printResume();

    return 0;
}
