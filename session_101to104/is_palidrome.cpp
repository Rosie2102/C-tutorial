#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string word){
    string reverse="";
    if (word.empty()){
        return false;
    }
    for (int i=word.length()-1; i>=0; i--){
        reverse = reverse + word[i];
    }
    if(reverse==word){
        return true;
    }else{
        return false;
    }
}

int main(){
    string word="assah";
    cout << is_palindrome(word);
}