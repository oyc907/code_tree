#include <iostream>
#include <cstdlib>
using namespace std;

const int max_N = 100;
int main() {
    int arr[max_N][2];
    int n;
    int temp;
    int min_val = 1 << 30;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int skip_idx = 1; skip_idx < n - 1; skip_idx++) {
        temp = 0;
        for (int i = 1; i < n; i++) {
            if (i == skip_idx) {
                continue;
            }
            else if (i == skip_idx + 1) {
                temp += abs(arr[i][0] - arr[i - 2][0]) + abs(arr[i][1] - arr[i - 2][1]);
            }
            else {
                temp += abs(arr[i][0] - arr[i - 1][0]) + abs(arr[i][1] - arr[i - 1][1]);
            }
            //cout<<"temp:"<<temp<<" skip_idx:"<<skip_idx<<" i:"<<i<<endl;
        }

        if (min_val > temp) {
            min_val = temp;
        }
    }

    cout << min_val;
    return 0;
}