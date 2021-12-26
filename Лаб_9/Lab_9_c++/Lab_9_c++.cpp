#include <iostream>
#include <string>
using namespace std;

string clear(string);
string makeSentence(string);
int wordsCounter(string);
string* arrOfWords(string, string*);
void outputFinal(string*, int, int);

int main()
{
    string str;
    int k, w, n;
    cout << "Your string: ";
    getline(cin, str);
    cout << "Amount of letters in words: ";
    cin >> k;
    str = clear(str);
    str = makeSentence(str);
    w = wordsCounter(str);
    cout << "Your string: " << str;
    cout << "\nAmount of words in the sentence: " << w << endl;
    string* res = new string[w];
    arrOfWords(str, res);
    cout << k << " letter words:";
    outputFinal(res, w, k);
}
string clear(string str) {
    for (int i = 1; i < str.length(); i++) {//int i = 1; i < str.length()-1; i++
        if (!isalpha(str[i - 1]) && !isalpha(str[i])) {//isalpha(str[i - 1]) && !isalpha(str[i]) && !isalpha(str[i + 1])
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}
string makeSentence(string str) {
    if (!isalpha(str[0])) {
        str.erase(0, 1);
    }
    if (!isalpha(str[str.length() - 1])) {
        str.erase(str.length() - 1, 1);
    }
    for (int i = 0; i < str.length(); i++) {
        if (!isalpha(str[i])) {
            str.replace(i, 1, " ");
        }
    }
    return str;
}
int wordsCounter(string str) {
    int w = 0;
    for (int i = 0; i < str.length(); i++) {
        if (!isalpha(str[i])) {
            w++;
        }
    }
    w = w + 1;
    return w;
}
string* arrOfWords(string str, string* res) {
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isspace(str[i])) {
            j++;
        }
        else {
            res[j] += str[i];
        }
    }
    return res;
}
void outputFinal(string* res, int w, int k) {
    for (int i = 0; i < w; i++) {
        if (res[i].length() == k) {
            cout << endl << res[i];
        }
    }
}

/*gh!yt!!!!!,_jh+gs , sts+;h ?*/