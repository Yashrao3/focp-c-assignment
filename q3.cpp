#include <iostream>
#include <string>
using namespace std;
int main() {
//1. accepting a string from user
    string x;
    int len,i,flag=0,j;
    cout << "Enter string: ";
    getline(cin, x);
    len=x.length(); //length
//2. Check for palindrome
    for (i=0; i<len/2; i++) {
        if (x[i]==x[len- i-1]) {
            flag =1;
            break;}}
    if (flag == 1){
        cout << "The string is a palindrome." << endl;}
    else{
        cout << "The string is not a palindrome." << endl;}
//3. count and display frequency of characters
    len = x.length();
    int freq[256]={0}; //to store all ascii values
    for (i=0;i<len; i++) {
        freq[(int)x[i]]++;
    }
    cout << "Character frequencies:\n";
    for (i=0;i<256;i++){
        if (freq[i] != 0) {
            cout<<(char)i <<" = "<< freq[i]<<endl;}
    }
//4. Replace vowels with "*"
    for (i=0;i<len;i++){
        if(x[i]=='a'||x[i]=='A'||x[i]=='e'||x[i]=='E'||x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'||x[i]=='u'||x[i]=='U'){
            x[i]='*';}}
        cout << "Modified string:"<<x<< endl;
    return 0;
    }