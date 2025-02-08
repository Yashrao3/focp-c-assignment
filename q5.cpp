#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter size of matrix: "; //n*n
    cin>>n;
    int matrix[n][n];
    cout << "Enter "<<n*n<<" elements: ";
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>matrix[i][j];
            }}
    cout << "The entered matrix is:\n";
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout << endl;}
//tranpose the matrix
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]); //store transposed matrix as new
        }}
//reverse the rows
    for (i=0;i<n;i++){
        for (j=0;j<n/2;j++) {
            swap(matrix[i][j],matrix[i][n-j-1]);
        }}
//display the new 90degrees clockwise rotated matrix
    cout <<"Rotated Matrix(90degrees clockwise):\n";
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;}
    return 0;
}