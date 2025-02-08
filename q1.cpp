#include <iostream>
using namespace std;
int main() {
    int num,isPrime,i,j;
    //input intrger
    cout << "Enter a positive integer:";
    cin>> num;
    if(num>0){
        //1. check if prime or not
        if (num <= 1){
            isPrime = 0;}
        else{
            for (i = 2; i * i <= num; i++){
                if (num % i == 0) {
                    isPrime = 0;
                    break;
            }}}}
    if (isPrime){
        cout << num << " is a prime number." << endl;
        int nextPrime =num + 1;
        while (true){
            //2. no. is prime ,next prime num to be displayed
            int isNextPrime =1;
            for (j=2; j * j <= nextPrime; j++){
                if (nextPrime % j == 0) {
                    isNextPrime = false;
                    break;
                }}
            if (isNextPrime) {
                cout << "The next prime number greater than " << num << " is: " << nextPrime << endl;
                break;
            }
            nextPrime++;
        }}
    else{
        //3. num is not prime,output its factorial
        cout << num << " is not a prime number." << endl;
        cout << "Factors of " << num << " are: ";
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                cout << i << " ";
        }}
        if (num <= 1) {
            isPrime = false;}
            else {
                for (i = 2; i * i <= num; i++){
                    if (num % i == 0) {
                        isPrime =0;
                        break;}}}
        }
    return 0;
}