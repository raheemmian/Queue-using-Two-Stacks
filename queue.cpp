#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  freopen("input.txt","r",stdin);//redirects standard input
  freopen("output.txt","w",stdout);//redirects standard output
  stack<int> s1;
  stack<int> s2;
  vector<int> deqAndPrintArray;
  int numberOfQueries = 0;
  cin >> numberOfQueries;
  int problem = 0;
  int value = 0;
  int queueCount = 0;
  // get all of the inputs
  while(cin >> problem){
    if (problem == 1) {
      cin >> value;
      s1.push(value);
      queueCount++;
      continue;
    }
    deqAndPrintArray.push_back(problem);
  }
  // put them into another stack so that it acts as a queue
  for (int i = 0; i < queueCount; i++) {
        s2.push(s1.top());
        s1.pop();
  }
  for (int i = 0; i < deqAndPrintArray.size(); ++i) {
    if (deqAndPrintArray[i] == 2) {
        s2.pop();
    } else if (deqAndPrintArray[i] == 3) {
        cout << s2.top() << endl;
    }
  }
  return 0;
}
