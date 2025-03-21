#include <iostream>
using namespace std;

const int max_N = 100000;

int n, m;
int arr[max_N];
int lower_bound(int x);
int upper_bound(int x);
int main() {
    // Please write your code here.
    // int m;
    // int x;
    // int ans=0;
    // int s,e; 

    int x;
    int lower;
    int upper;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int _ = 0; _ < m; _++) {
        cin >> x;
        lower = lower_bound(x);
        upper = upper_bound(x);
        cout << upper - lower << endl;
    }


    return 0;
}
int lower_bound(int x) {
    int mid;
    int s, e;
    int ans = 0;
    ans = n;
    s = 0;
    e = n - 1;
    while (s <= e) {
        mid = (s + e) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int upper_bound(int x) {
    int mid;
    int s, e;
    int ans = 0;
    ans = n;
    s = 0;
    e = n - 1;
    while (s <= e) {
        mid = (s + e) / 2;

        if (arr[mid] > x) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}