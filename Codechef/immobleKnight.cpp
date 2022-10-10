#include <bits/stdc++.h>



using namespace std;



string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
* Complete the 'hourglassSum' function below.
*
* The function is expected to return an INTEGER.
* The function accepts 2D_INTEGER_ARRAY arr as parameter.
*/



int hourglassSum(vector<vector<int>> arr) {
    vector<int>v2;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            int sum = arr[j][i] + arr[j][i + 1] + arr[j][i + 2] + arr[j + 1][i + 1] + arr[j + 2][i] + arr[j + 2][i + 1] + arr[j + 2][i + 2];
            v2.push_back(sum);
        }
    }
    sort(v2.begin(),v2.end());
    return v2[v2.size()-1];



}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));



   vector<vector<int>> arr(6);



   for (int i = 0; i < 6; i++) {
        arr[i].resize(6);



       string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);



       vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));



       for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);



           arr[i][j] = arr_row_item;
        }
    }



   int result = hourglassSum(arr);



   fout << result << "\n";



   fout.close();



   return 0;
}



string ltrim(const string &str) {
    string s(str);



   s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );



   return s;
}



string rtrim(const string &str) {
    string s(str);



   s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );



   return s;
}



vector<string> split(const string &str) {
    vector<string> tokens;



   string::size_type start = 0;
    string::size_type end = 0;



   while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));



       start = end + 1;
    }



   tokens.push_back(str.substr(start));



   return tokens;
}