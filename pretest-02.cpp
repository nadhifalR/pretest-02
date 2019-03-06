/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Deskripsi :
 * Tahun : 2019
 */

 #include <iostream>
 using namespace std;

 void moveZeroToFront(int arr[], int n){
     int temp=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            for(int i=n-1;i>=0;i--){
                temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
            }
        }
    }
 }

 void input(int (&arr)[100], int& n){

    cout<<"Masukan Panjang data: ";cin>>n;
    cout<<"Masukan data cth[1 2 3 4 5] :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 }

 void output(int arr[], int n){
    cout<<"Hasil : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
 }

 int main(){
    int arr[100];
    int n;
    input(arr,n);
    moveZeroToFront(arr,n);
    output(arr, n);
 }
