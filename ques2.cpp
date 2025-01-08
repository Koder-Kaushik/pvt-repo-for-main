#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    vector<vector<int>> arr(a);
    vector<int> arr2;
    for(int i=0;i<a;i++){
        int n;
        cin>>n;
        arr[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<b;i++){
        int x,y;
        cin>>x>>y;
        arr2.push_back(arr[x][y]);
    }
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<endl;
    }
}
