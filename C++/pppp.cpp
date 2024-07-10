#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long double k;
    cin >> k;
    int i;
    long double ans = 0.0;
    
    // Increase precision
    cout << fixed << setprecision(6); // Set precision to 10 decimal places
    
    for(i = 1; i <= k; i++) {
        ans += i * (pow(i / k, n) - pow((i - 1) / k, n));
    }
    
    cout << ans << endl;
    return 0;
}