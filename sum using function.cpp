#include<iostream>
using namespace std;

int sumN(int n) {
    int sum=0;
    for(int i=1;i<=n;i++) {
    sum+=i;
    }
    return sum;
}
int main() {
    cout<<"Sum of N numbers="<<sumN(100)<<endl;
    return 0;
}
