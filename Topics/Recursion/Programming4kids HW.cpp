#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*
Recursion HW
 */

//HW 3
int arrMax(int arr[] ,int size){
    if(size == 2) return max(arr[0],arr[1]);
    return max(arr[size-1],arrMax(arr,size-1));
}
//HW 4
int arrSum(int arr[],int size){
    if(size == 1) return arr[0];
    return arr[size-1]  + arrSum(arr,size-1);
}
//HW 5
double arrAvg(int arr[],int size){
    if(size == 1) return arr[0];
    return (arr[size-1]  + arrAvg(arr,size-1)  * (size -1))/size;
}
//HW 6

void array_Increment(int arr[], int size){
    if(size == 1) return;
    arr[size - 1] +=(size-1);
    array_Increment(arr,size-1);
}
void array_Accumalate(int arr[],int size){
    if(size == 1)return;
    array_Accumalate(arr,size-1);
    arr[size-1] +=arr[size-2];
}
void printArr(int arr[],int size){
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void left_max(int arr[],int size){
    if(size == 1) return ;
    left_max(arr,size-1);
    if(arr[size-2]>arr[size-1]) arr[size-1] =arr[size-2];
}
void right_max(int arr[],int size){
    if(size == 1) return ;
    if(arr[size-2]<arr[size-1]) arr[size-2] =arr[size-1];
    right_max(arr,size-1);
}
int suffix_sum(int arr[],int size, int n){
    if(n == 0) return  0 ;
    return arr[size-1]  + suffix_sum(arr,size-1,n-1);
}
int prefix_sum(int arr[],int size, int n){
    if(n == 0) return  0 ;
    return arr[n-1]  + prefix_sum(arr,size,n-1);
}
template<typename T>
bool isPalindrome(T arr[],int size, int i= 0 ){
    if(i == size/2) return true;
    if(arr[size-i-1]!=arr[i]) return false;
    return isPalindrome(arr,size,i+1);
}
bool isPrefix(string main, string pre, int start = 0){
    if(start == pre.size()) return true;
    if(main[start] != pre[start]) return false;
    return isPrefix(main,pre,start+1);
}
bool vis[3][3] ={0};
bool isValid(int r, int c, int R, int C){
    if(r>=R||c>=C||r<0||c<0) return false;
    if(vis[r][c]==1) return false;
    return true;
}
int dx[] = {1,0,1};
int dy[] = {0,1,1};
int GridSum(int grid [3][3], int rows, int cols, int R, int C){
    if(rows == R-1 &&cols == C-1) return grid[R-1][C-1];
    vis[rows][cols] =1;
    int maxindex = -1;
    int maxdist = 0;
    for (int i = 0; i < 3; ++i) {
        if(isValid(rows+dx[i],cols+dy[i],R,C)){
            if(grid[rows+dx[i]][cols+dy[i]]>maxdist){
                maxindex = i;
                maxdist = grid[rows+dx[i]][cols+dy[i]];
            }
        }
    }
    return grid[rows][cols] + GridSum(grid,rows+dx[maxindex],cols+dy[maxindex],R,C);
}
int fibonacci(int x){
    if(x==1||x==0)return 1;
    return fibonacci(x-1)+ fibonacci(x-2);
}
void fibonacci2(int x,ll arr[54]){
if(x==1||x==0) {
    arr[x] =1;
    return;
}
    fibonacci2(x-1,arr);
    arr[x] = arr[x-1]+arr[x-2];
}
int main()
{
    int a[30] = {1,2,2,2,1};
    int grid[3][3]={1,7,8,2,10,11,20,5,9};
    cout<<arrMax(a,5)<<"\n";
    cout<<arrSum(a,5)<<"\n";
    cout<<arrAvg(a,5)<<"\n";
    // array_Increment(a,5);
    cout<< arrSum(a,5)<<"\n";
    //array_Accumalate(a,6);
    printArr(a,6);
    // right_max(a,6);
    printArr(a,6);
    cout<<prefix_sum(a,5,3);
    if(isPalindrome(a,5)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    string x = "abcdefghipi";
    string b = "abd";
    if(isPrefix(x,b)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
   // cout<<GridSum(grid,0,0,3,3);
   // cout<<endl<<fibonacci(50);
    ll arrr[54]={0};
    fibonacci2(51,arrr);
    cout<<arrr[50];
    system("pause");

    return 0;
}
