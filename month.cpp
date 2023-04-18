#include<iostream>
using namespace std;

int main () {
    int month=0;
    cin>>month;
    switch (month){
        case 1:
            cout<<"January";
            break;
        case 2:
            cout<<"Feb";
            break;
        case 3:
            cout<<"Mar";
            break;
        case 4:
            cout<<"Apr";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"June";
            break;
        case 7:
            cout<<"July";
            break;
        case 8:
            cout<<"Aug";
            break;
        case 9:
            cout<<"sep";
            break;

        case 10:
            cout<<"Oct";
            break;
        case 11:
            cout<<"Nov";
            break;
        default:
            cout<<"Dec";
            break;
    }
}