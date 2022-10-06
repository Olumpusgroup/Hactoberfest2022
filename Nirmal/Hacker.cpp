#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>&v1){
  sort(v1.begin(),v1.end());
  bool hasDuplicates = adjacent_find(v1.begin(), v1.end())!= v1.end();
  return hasDuplicates;

}
void solve(vector<int>&v2){
  int N,K;
  cin>>N>>K;
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    int ele;
    cin>>ele;
    arr[i]=ele;

  }

  if(N==1 && K==1){

    v2.push_back(1);
  }else{
    if((2*K)<N){

      v2.push_back(0);
    }else{
      vector<int>dcase1;
      for (int i = 0; i < K; i++)
      {
        dcase1.push_back(arr[i]);

      }
      if(check(dcase1)){

        v2.push_back(0);
      }else{
        vector<int>dcase2;
        for (int i = K; i < N; i++)
        {
          dcase2.push_back(arr[i]);
        }
        if(check(dcase2)){

          v2.push_back(0);
        }else{

          v2.push_back(1);
        }

      }



    }
  }

}

int main()
{
  int t;
  cin >> t;
  vector<int>finalv;
  while (t--)
  {
    solve(finalv);

  }
  for (int i = 0; i < finalv.size(); i++)
  {
    if(finalv[i]==1){
      cout<<"Case #"<<i+1<<": "<<"YES"<<endl;}
     else{
      cout<<"Case #"<<i+1<<": "<<"NO"<<endl;}



  }


  return 0;
}