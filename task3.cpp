#include<iostream>
#include<fstream>
using namespace std;

string readline(){
    string line;
    fstream file;
    file.open("name.txt", ios :: in);
    getline(file, line);
    return line;
}

string getfield(string record, int field){
    int commaCount = 1;
    string item;
    for(int x = 0; x < record.length(); x++){
    if(record[x] == ','){
        commaCount = commaCount + 1;}
    else if (commaCount == field){
    item = item + record[x];
    }}
    return item;
}

bool iseven(int age){
    if(age%2 == 0){
        return true;
    }
    else if(age%2 != 0){
        return false;
    }
}


main(){
    string record;
    record = readline();
    string name = getfield(record, 1);
    string age = getfield(record, 2);
    bool even = iseven(stoi(age));

    if(even){
        cout << "###############" << endl;
        cout << "#" << age << " " << name << "!" << age << " #" <<endl;
        cout << "###############" << endl;
    }

    else if(!even){
        cout << "***************" << endl;
        cout << "*" << age << " " << name << "!" << age << " *" <<endl;
        cout << "***************" << endl;
    }
}