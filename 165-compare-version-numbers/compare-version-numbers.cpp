class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> s1 = split(version1, '.');
  vector<int> s2 = split(version2, '.');

  int maxLength = max(s1.size(), s2.size());

  for (int i = 0; i < maxLength; i++) {
    int v1 = i < s1.size() ? s1[i] : 0;
    int v2 = i < s2.size() ? s2[i] : 0;

    if (v1 > v2) {
      return 1;
    } else if (v1 < v2) {
      return -1;
    }
  }
  return 0;
}

vector<int> split(string str, char delimiter) {
  vector<int> tokens;
  string token;
  istringstream stream(str);

  while (getline(stream, token, delimiter)) {
    tokens.push_back(stoi(token));
  }

  return tokens;
}
};