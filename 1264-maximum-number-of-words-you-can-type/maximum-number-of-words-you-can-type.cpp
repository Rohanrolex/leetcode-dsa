class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broken(26, false);
        for (char c : brokenLetters) {
            broken[c - 'a'] = true;
        }

        int count = 0;
        bool ok = true;  // assume word can be typed

        for (int i = 0; i <= text.size(); i++) {
            if (i < text.size() && text[i] != ' ') {
                // inside a word
                if (broken[text[i] - 'a']) {
                    ok = false;  // word has broken letter
                }
            } else {
                // reached space or end of string
                if (ok) count++;  // word is typeable
                ok = true;        // reset for next word
            }
        }
        return count;
    }
};
