#include <iostream>
#include <string>
using namespace std;

// Класс Text
class Text {
    int words;
    string language;
protected:
    void showInfo() {
        cout << " words: " << words << ", language: " << language << endl;
    }
public:
    Text(int ws, string lg) : words(ws), language(lg) {
        cout << "\nConstructor of Text\n";
    }
    ~Text() {
        cout << " Destructor of Text\n";
    }
};

// Класс Book
class Book {
    int pages;
    string title;
protected:
    void showInfo() {
        cout << " title: " << title << ", pages: " << pages << endl;
    }
public:
    Book(int pg, string tl) : pages(pg), title(tl) {
        cout << "\nConstructor of Book\n";
    }
    ~Book() {
        cout << " Destructor of Book\n";
    }
};

// Класс Novel (наследует от Book и Text)
class Novel : protected Book, protected Text {
    string author;
public:
    Novel(string a, int p, string t, int w, string l) :
        author(a), Book(p, t), Text(w, l) {
        cout << "\nConstructor of Novel\n";
    }
    ~Novel() {
        cout << " Destructor of Novel\n";
    }
    void showInfo() {
        cout << " Novel:\n";
        cout << " author: " << author << endl;
        Book::showInfo();
        Text::showInfo();
    }
};

// Класс TechnicalText (наследует от Text)
class TechnicalText : protected Text {
    int terms;
    int charts;
protected:
    void showInfo() {
        cout << " terms: " << terms << ", charts: " << charts << endl;
        Text::showInfo();
    }
public:
    TechnicalText(int tr, int ch, int ws, string lg) :
        terms(tr), charts(ch), Text(ws, lg) {
        cout << "\nConstructor of TechnicalText\n";
    }
    ~TechnicalText() {
        cout << " Destructor of TechnicalText\n";
    }
};

// Класс ExerciseBook (наследует от Book)
class ExerciseBook : protected Book {
    string owner;
public:
    ExerciseBook(string o, int p, string t) : owner(o), Book(p, t) {
        cout << "\nConstructor of ExerciseBook\n";
    }
    ~ExerciseBook() {
        cout << " Destructor of ExerciseBook\n";
    }
    void showInfo() {
        cout << "\nExercise Book:\n";
        cout << " owner: " << owner << endl;
        Book::showInfo();
    }
};

// Класс Manual (наследует от Book и TechnicalText)
class Manual : protected Book, protected TechnicalText {
    int instructions;
public:
    Manual(int i, int p, string t, int tr, int ch, int ws, string lg) :
        instructions(i), Book(p, t), TechnicalText(tr, ch, ws, lg) {
        cout << "\nConstructor of Manual\n";
    }
    ~Manual() {
        cout << " Destructor of Manual\n";
    }
    void showInfo() {
        cout << " Manual:\n";
        Book::showInfo();
        cout << " instructions: " << instructions << endl;
        TechnicalText::showInfo();
    }
};

// Главная функция
int main() {
    // Создание объектов и вывод информации о них
    ExerciseBook eb("Ivan Student", 96, "C++");
    eb.showInfo();

    Novel nv("J. Barnes", 102, "Metroland", 51120, "en");
    nv.showInfo();

    Manual man(222, 22, "Phone", 45, 5, 1000, "en");
    man.showInfo();

    return 0;
}
