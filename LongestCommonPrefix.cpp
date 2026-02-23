#include <string>
#include <vector>
#include <iostream>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 1)
        return {};
    else {
        string comparison = strs[0];
        string result;
        for (size_t i = 0; i < strs[0].size(); i++) {
            for (size_t j = 0; j < strs.size(); j++) {
                if (comparison[i] != strs[j][i])
                    return result;
            }
            result += comparison[i];
        }
    return result;
    }
}

int main() {

    vector<string> words = {"flower","flow","flight"};
    cout << longestCommonPrefix(words) << endl;

    return 0;
}