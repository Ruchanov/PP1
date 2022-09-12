#include<bits/stdc++.h>
using namespace std;
double gpa(string c){
    if(c=="A+") return 4.00;
    if(c=="A") return 3.75;
    if(c=="B+") return 3.50;
    if(c=="B") return 3.00;
    if(c=="C+") return 2.50;
    if(c=="C") return 2.00;
    if(c=="D+") return 1.50;
    if(c=="D") return 1.00;
    if(c=="F") return 0;
}
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    map<pair<string,string>,double> m;
    map<pair<string,string>,double> :: iterator it;
    //vector<pair<char,int>> v;
    int cnt=0;
    double sum=0;
    while(n--){
        string s,s2;
        int k;
        cin>>s>>s2>>k;
        //make_pair(s,s2);
        while(2*k--){
            int a;
            string c;
            cin>>a>>c;
            sum+=a*gpa(c);
            cnt+=a;
        }
        double g=sum/cnt;
        m[make_pair(s,s2)]=g;
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first.first<<" "<<(*it).first.second<<(*it).second<<endl;
    }
}