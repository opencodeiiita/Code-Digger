#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pbb emplace_back
#define m 1000000007

void multiplication(int mat[2][2], int mat2[2][2]);
void exponential(int mat[2][2], int n);

int fibonacci(int n)
{
    int mat[2][2] = {{1, 1}, {1, 0}};
    if (n == 1)
        return 0;
    exponential(mat, n - 1);

    return mat[1][0];
}

void exponential(int mat[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    int mat2[2][2] = {{1, 1},
                      {1, 0}};

    exponential(mat, n / 2);
    multiplication(mat, mat);

    if (n % 2 != 0)
        multiplication(mat, mat2);
}

void multiplication(int mat[2][2], int mat2[2][2])
{
    int a = (mat[0][0]%m * mat2[0][0]%m)%m + (mat[0][1]%m * mat2[1][0]%m)%m;
    a%=m;
    int b = ((mat[0][0]%m * mat2[0][1]%m)%m + (mat[0][1]%m  * mat2[1][1]%m)%m)%m;
    int c = ((mat[1][0]%m * mat2[0][0]%m)%m + (mat[1][1]%m * mat2[1][0]%m)%m)%m;
    int d = ((mat[1][0]%m * mat2[0][1]%m)%m + (mat[1][1]%m * mat2[1][1]%m)%m)%m;

    mat[0][0] = a;
    mat[0][1] = b;
    mat[1][0] = c;
    mat[1][1] = d;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--){

    int n;
    cin >> n;

    cout<<fibonacci(n)<<endl;;
    }
}
