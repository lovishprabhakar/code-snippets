#include <iostream>
using namespace std;
int main(int agrc, char** argv) {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == i || j == n - 1 - i)
        cout << "* ";
      else if (i < n / 2)
        if (j > i && j < n - 1 - i)
          cout << "* ";
        else
          cout << "  ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}

// Output:

// 7
// * * * * * * * 
//   * * * * *
//     * * *
//       *
//     *   *
//   *       *
// * * * * * * *
