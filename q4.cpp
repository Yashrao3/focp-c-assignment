#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter size of matrix: "; //n*n matrix
    cin>>n;
    int arr[n][n];
    int top=0, bottom=n-1,left=0,right=n-1;
    int num=1;
    while(num<= n*n){
        // Left to Right
        for (i=left;i<=right;i++)
            arr[top][i]=num++;
        top++;
        // Top to Bottom
        for (i=top; i<=bottom;i++)
            arr[i][right]=num++;
        right--;
         // Right to Left
        for (i=right;i>=left;i--)
            arr[bottom][i]=num++;
        bottom--;
        // Bottom to Top
        for (i =bottom;i>=top;i--)
            arr[i][left] = num++;
        left++;
    }
    cout<< "Spiral Matrix looks like:\n";
    for (i=0;i<n;i++) {
        for(j=0; j< n;j++) {
            cout<< arr[i][j]<<"\t";
        }
        cout << endl;}
    return 0;
}
