#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char grade = 'A';
    string phrase = "Something Else";
    int age = 50;
    double result = 2.3;
    bool isSnail = false;
    float bigNumber = 4.5;
    
    cout << bigNumber << endl;
    cout << 'u' << endl;
    cout << phrase.length()<< endl;
    cout << phrase[0] << endl;
    
    cout << phrase.find("Else",0)<< endl;

    
    cout << pow(2,5) << endl;
    int age_again;
    cout << "Enter yuour age: ";
    cin >> age_again;
    
    cout << "You are " << age << " years old" << endl;
    

    
    string name;
    cout << "Enter your name " ;
    getline(cin, name);
    
    cout << "Hello " << name << endl;
    
    
    string colour, pluralNoun, celebrity;
    
    cout << "enter colour: ";
    getline(cin, colour);
    cout << "enter plural noun: ";
    getline(cin, pluralNoun);
    cout << "enter celebrity: ";
    getline(cin, celebrity);
    
    cout << "Roses are " << colour << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    
        string name;
    cout << "Enter your name " ;
    getline(cin, name);
    
    cout << "Hello " << name << endl;
    
    
    string colour, pluralNoun, celebrity;
    
    cout << "enter colour: ";
    getline(cin, colour);
    cout << "enter plural noun: ";
    getline(cin, pluralNoun);
    cout << "enter celebrity: ";
    getline(cin, celebrity);
    
    cout << "Roses are " << colour << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    
    return 0;
}
