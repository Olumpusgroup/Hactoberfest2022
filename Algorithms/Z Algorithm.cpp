// Z Algorithm

/*
- Time Complexity : O(n + m)
- The naive computation of the z array will take $O(n^2)$ time therefore we optimize the process by use of ranged searching.
- Pre computation : Involves the creation of a Z array in which Z[i] denotes the longest substring starting 
at i which is also a prefix of the string from [0 -> n - 1] .

*/

#include <bits/stdc++.h>

using namespace std;

vector <int> zarraycreator(string s)
{
	int n = s.length();
	vector <int> zarray(n);
	int l = 0, r = 0;
	for(int i = 1; i < n; i++){
		if(i <= r)
			zarray[i] = min(r - i + 1, zarray[i - l]);
		while(i + zarray[i] < n && s[zarray[i]] == s[i + zarray[i]])
			zarray[i]++;
		if(zarray[i] + i - 1 > r)
			l = i, r = zarray[i] + i - 1;
	}
	return zarray;
}


// Evaluation : Evaluation involves the creation of a `string = pattern + '#' + string  // '#' can be any character not present in either string.` and then formation of its zarray. The length of the pattern is then compared with the elements of the zarray and if it matches when we can say that the pattern is present at index `index_found - pattern.length() -  1` .


void search(string s, string pat)
{
    string cat = pat + '#' + s;
    vector zarray = zarraycreator(cat);

    for(int i = 0; i < zarray.size(); i++)
    {
        if(pat.length() == i)
            cout << i - pat.length() - 1;
    }
}

