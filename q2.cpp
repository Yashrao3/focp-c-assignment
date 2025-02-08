#include <iostream>
#include <limits.h> // For INT_MIN and INT_MAX
using namespace std;
int main() {
    int n;
    //1. accepting int array with user defined size
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n < 2){
        cout << "Array must have a sixe of 2 or more" << endl;}
    else{
    int arr[n],i;
    cout << "Enter "<<n<<" elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];}
    cout<<"ARRAY LOOKS LIKE: ";
    for (i = 0; i<n; i++) {
        cout<<arr[i]<<" "<<endl;}

    //2. reversed array
    cout << "Reversed array: ";
    for (i=n-1; i>= 0;i--) {
        cout<<arr[i] <<" "<<endl;}

    //3. Find 2nd largest and smallest elements
    int largest = INT_MIN, seclargest = INT_MIN;
    int smallest = INT_MAX, secsmallest = INT_MAX;
    for (i = 0; i < n; i++) {
        // Finding second largest
        if (arr[i] > largest) {
            seclargest = largest;
            largest = arr[i];}
        else if (arr[i] > seclargest && arr[i] != largest) {
            seclargest = arr[i];}
        // Finding second smallest
        if (arr[i] < smallest) {
            secsmallest = smallest;
            smallest = arr[i];}
        else if (arr[i] < secsmallest && arr[i] != smallest) {
            secsmallest = arr[i];}}
    if (seclargest == INT_MIN ||secsmallest== INT_MAX) {
        cout << "No second largest or second smallest element found" << endl;}
    else {
        cout << "Second largest element: " << seclargest << endl;
        cout << "Second smallest element: " <<secsmallest << endl;
    }}
    return 0;
}
