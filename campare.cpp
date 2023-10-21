    int countPrimes(int n) {
    if(n<=2)
    return 0;
    const vector<bool> isPrime = sieveEratosthenes(n);
    return count(isPrime.begin(), isPrime.end(), true);
    }
    private:
    vector<bool> sieveEratosthenes(int n){
        vector<bool> isPrime(n, true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2; i*i<n; i++)
        if(isPrime[i])
        for(int j=i*i; j<n; j+=i)
        isPrime[j]=false;
        return isPrime;
-----------------------------------------------------------------
  int countPrimes(int n) {
    if (n <= 2)
      return 0;
    const vector<bool> isPrime = sieveEratosthenes(n);
    return count(isPrime.begin(), isPrime.end(), true);
  }
 private:
  vector<bool> sieveEratosthenes(int n) {
    vector<bool> isPrime(n, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i < n; ++i)
      if (isPrime[i])
        for (int j = i * i; j < n; j += i)
          isPrime[j] = false;
    return isPrime;
------------------------------------------------------------------------------------------
    #include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        for(int k=2; k<=1e8; k++){
            int p=pow(2, k);
            --p;
            if(n%p==0){
                cout<<n/p<<endl;
                break;
            }}}
return 0;
}

 #include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n; // You need to read the value of n for each test case.
        cin >> n;
        for (int k = 2; k <= 1e8; k++) {
            int p = pow(2, k);
            --p;
            if (n % p == 0) {
                cout << n / p << endl;
                break;
            }
        }
    }
    return 0;
}




