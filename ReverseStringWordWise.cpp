https://www.codingninjas.com/studio/problems/reverse-string-word-wise_1262348?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <iostream>
#include <vector>
using namespace std;

string reverseStringWordWise(string input)
{
    vector<string> arr;
    string h = "";
    int a = 0;
    for(int i = 0; i < input.size(); i++) {
        if(input[i] != ' ') {
            h += input[i];
        }
        else {
            arr.push_back(h);
            a++;
            h = "";
        }
    }
    arr.push_back(h);

    int c = 0;
    string ans = "";
    for(int i = arr.size() - 1; i >= 0; i--) {
        ans += arr[i] + " ";
        c++;
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
    return 0;
}
