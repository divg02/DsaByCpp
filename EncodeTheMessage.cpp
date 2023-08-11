https://www.codingninjas.com/studio/problems/encode-the-message_699836?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube

#include <bits/stdc++.h> 
string encode(string &message)
{
    int n = message.size();
    int count = 0;
    string s = "";
    for (int i = 0; i < n; i++) {
        if (message[i] == message[i + 1]) {
            count++;
        } else if (message[i] != message[i + 1]) {
            count++;
            s += message[i] + to_string(count);
            count = 0;
        } else if (i == n - 1 && message[n - 2] != message[n - 1]) {
            s += message[n - 1] + to_string(count);
        } else if (i == n - 1 && count > 0 && message[n - 2] == message[n - 1]) {
            count++;
            s += message[n - 1] + to_string(count);
        }
    }
    return s;
}




