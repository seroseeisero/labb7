#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
int main(){
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n";
    cout << name << ": ";
    int id;
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << (int)(id/pow(10,7))-12 << ". I have a free movie ticket for you." << "\n";
    cout << "Fahsai: Let's go to the cinema together!!!" << "\n";
    cout << "Fahsai: What movie do you want to watch?" << "\n";
    cout << name << ": ";
    string mname;
    getline(cin,mname);
    cout << "Fahsai: So....which day are you free to go with me?" << "\n";
    cout << name << ": ";
    string date;
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << mname << " with you." << "\n";
    string phrase;
    cout << name << ": ";
    cin >> phrase;
    cout <<"Fahsai: 555+ see you "<< date << ". Bye Bye "<< "\\(^ ^)/";
}