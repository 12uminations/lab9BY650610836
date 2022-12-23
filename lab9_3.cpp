#include <iostream>
#include <string>
using namespace std;

int main(){

int age;
int height;
int bounty;
string mugiwaracrew;
cout <<"Enter your age: ";
cin >> age;
if(age <=25){
    cout << "Enter your height: ";
    cin >> height;
    if(height<100){
        mugiwaracrew = "Chopper";
    }
    else if(height <180 and height >=100){
        mugiwaracrew = "Usopp";
    }
    else {
        cout <<"Enter your bounty: ";
        cin >> bounty;
        if(bounty>1100000000){
            mugiwaracrew = "Zoro";
        } 
        else{
            mugiwaracrew = "Sanji";
        }
    }
}
else if(age >25 and age <=60){
    cout <<"Enter your bounty: ";
    cin >> bounty;
    if(bounty>500000000){
        mugiwaracrew = "Jinbe";
    } 
    else{
        mugiwaracrew = "Franky";
    }
}
else{
    mugiwaracrew = "Brook";
}

cout <<"Your character = "<< "\""<<mugiwaracrew<< "\"";


}