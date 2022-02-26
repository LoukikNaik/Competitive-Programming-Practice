#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
#define MOD 1000000007
#define all(x) (x).begin(),(x).end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector < vector <T> > v){cerr<<"["<<endl; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<endl;}}cerr<<"]";}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,m,i,j,k,l;
    cin>>n>>m;
    map<string,vector<pair<string,ll>>> names;
    map<string,vector<ll>> projects;
    map<string,vector<pair<string,ll>>> skills_required_for_project;
    while(n--){
        string name;
        cin>>name;
        cin>>l;
        vector<pair<string,ll>> skills;
        while(l--){
            string skill;
            cin>>skill;
            ll skill_level;
            cin>>skill_level;
            skills.pb(mp(skill,skill_level));
        }
        names[name]=skills;
    }
    while(m--){
        string project;
        cin>>project;
        ll no_of_days,score_awarded,best_before,no_of_roles;
        vector<ll> v(4);
        cin>>v[0]>>v[1]>>v[2]>>v[3];
        l=v[3];
        projects[project]=v;
        vector<pair<string,ll>> skills;
        while(l--){
            string s;
            cin>>s;
            ll x;
            cin>>x;
            skills.pb(mp(s,x));
        }
        skills_required_for_project[project]=skills;
    }
    // debug(names)
    // debug(projects)
    // debug(skills_required_for_project)
    map<string,vector<pair<string,string>>> projects_completed;
    
    for(auto a:projects){
        // debug(a)
        ll no_of_skills_achieved=0;
        map<string,ll> names1;
        vector<pair<string,string>> nam;
        for(auto b:skills_required_for_project[a.first]){
            // debug(b)
            ll k=0;
            for(auto c:names){
                // debug(c)
                if(names1[c.first]==0)
                for(auto d:c.second){
                    if(d.first==b.first && d.second>=b.second){
                        names1[c.first]=1;
                        nam.push_back(mp(c.first,d.first));
                        k=1;
                        no_of_skills_achieved++;
                        break;
                    }
                }
                if(k==1)
                break;
            }
            if(k==1)
            break;
        }
        if(no_of_skills_achieved==a.second[3])
        {
            projects_completed[a.first]=nam;
            for(auto n:nam){
                string sk=n.second;
                for(auto v:names[n.first]){
                    if(v.first==sk)
                    v.second++;
                }
            }

        }

    }
    ll zmx=projects_completed.size();
    debug(zmx)
    cout<<zmx<<"\n";
    for(auto a:projects_completed){
        debug(a)
        cout<<a.first<<"\n";
        for(auto b:a.second){
            cout<<b.first<<" ";
        }
        cout<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
