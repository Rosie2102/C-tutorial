#include<iostream>
using namespace std;

int main(){
    
string classes[] = {"Math" , "English", "Science", "Social Studies", "Spanish"};
classes[4] = "French";

for (int i = 0; i< sizeof(classes)/sizeof(classes[0]); i++){
    cout<< classes[i]<< endl;
}
}