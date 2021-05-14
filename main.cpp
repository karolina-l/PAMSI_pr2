#include <iostream>
#include "container.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void write(ofstream new_file, const Container& cont){
    new_file << cont.title << "   " << cont.note << endl;
}

int main() {

    ifstream file;
    Container list[100];
    string temp, line;
    stringstream s;
    int i=0;

    file.open("dane.csv");
    if(!(file.is_open())) cout<<"blad\n";



    getline(file, line);
    cout<<"while\n";
    while(i<100/*!file.eof()*/){
        getline(file,line);
        stringstream s(line);
        getline(s,temp, ';');
        getline(s,temp, ';');
        list[i].title=temp;
        getline(s,temp, ';');
        list[i].note=stof(temp);
        i++; 
        cout<<i<<endl;
    }
    cout<<" po while\n";
    ofstream result;
    result.open("result.txt");
    if(!(result.is_open())) cout<<"blad - result\n";
    cout<<"po res\n";
    for(int j=0; j<i; j++){
        //write(result, list[i]);
        result << list[j].title << "   " << list[j].note << endl;
    }
    cout<<"po for\n";
    file.close();
    result.close();

    return 0;
}
