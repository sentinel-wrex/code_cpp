#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

// Function to generate the alpha set for a given string
void generateAlphaSet(const string& s, string current, int index, unordered_set<string>& alphaSet) {
    if (index == s.length()) {
        if (!current.empty()) {
            alphaSet.insert(current);
        }
        return;
    }

    // Include the current character
    generateAlphaSet(s, current + s[index], index + 1, alphaSet);

    // Exclude the current character
    generateAlphaSet(s, current, index + 1, alphaSet);
}

// Function to find the length of the longest common string among alpha sets of given strings
int lengthOfLongestCommonStringAlphaSet(const vector<string>& strings) {
    vector<unordered_set<string>> alphaSets;

    // Generate alpha sets for each string
    for (const string& s : strings) {
        unordered_set<string> alphaSet;
        generateAlphaSet(s, "", 0, alphaSet);
        alphaSets.push_back(alphaSet);
    }

    // Find common elements among alpha sets
    unordered_set<string> commonElements = alphaSets[0];
    for (int i = 1; i < alphaSets.size(); ++i) {
        unordered_set<string> currentSet = alphaSets[i];
        vector<string> intersectionResult;
        set_intersection(
            commonElements.begin(), commonElements.end(),
            currentSet.begin(), currentSet.end(),
            inserter(intersectionResult, intersectionResult.begin())
        );
        commonElements = unordered_set<string>(intersectionResult.begin(), intersectionResult.end());
    }

    // Find the length of the longest common string
    int lengthOfLongestCommon = 0;
    for (const string& s : commonElements) {
        lengthOfLongestCommon = max(lengthOfLongestCommon, static_cast<int>(s.length()));
    }

    return lengthOfLongestCommon;
}

int main() {
    int N;
    cin >> N;  // Number of strings

    vector<string> strings(N);
    for (int i = 0; i < N; ++i) {
        cin >> strings[i];  // Input each string
    }

    int result = lengthOfLongestCommonStringAlphaSet(strings);

    cout << result << endl;

    return 0;
}
