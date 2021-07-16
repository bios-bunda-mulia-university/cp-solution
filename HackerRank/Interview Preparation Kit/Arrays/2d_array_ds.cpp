#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
  int total, max_total = -1000;

  for(std::size_t i=1; i < arr.size()-1; ++i) {
      for(std::size_t j=1; j < arr[i].size()-1; ++j) {
        total = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j+1] + arr[i+1][j];
        if (total >= max_total) {
          max_total = total;
        }
      }
  }
  return max_total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
