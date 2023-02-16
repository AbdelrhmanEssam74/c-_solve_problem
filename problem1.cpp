/* Task
Read 3 numbers from stdin and print their sum to stdout.  */

#include <iostream>
using namespace std;

int main() {


  int sum = 0;
  int num;
  for (int i = 0; i < 3; i++)
  {
    cin >> num;
    sum += num;
  }
  cout << sum;
    return 0;
}
