#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

string checkDuplicate(int N, vector<int>& numbers) {
    unordered_set<int> numSet;
    for (int num : numbers) {
        if (numSet.find(num) != numSet.end()) {
            return "Yes";
        }
        numSet.insert(num);
    }
    return "No";
}

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 10000) {
        return 1;
    }
    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
        if (numbers[i] < 1 || numbers[i] > N) {
            return 1;
        }
    }
    string result = checkDuplicate(N, numbers);
    cout << result << endl;
    return 0;
}

