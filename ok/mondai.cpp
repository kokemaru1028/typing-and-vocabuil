#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
      vector<string> text;

      int N;
      cin >> N;

      for (int i = 0; i < N; i++) {
            string s;
            // getline(cin, s); 文を書きたいとき(空白ありにしたいとき)、改行を入れてつかってね
            cin >> s;
            text.push_back(s);
      }

      for (int i = 0; i < text.size(); i++) {
            cout << "\"" + text[i] + "\",";
            if (i % 30 == 0) cout << endl;
      }     
}