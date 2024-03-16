#include<iostream>
using namespace std;
int main(){
//    Faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=4;
        set<char>sc;
        map<char,int>freq;
        for(auto c:s){
            sc.insert(c);
            freq[c]++;
        }
        if(sc.size()==1){
            cout<<-1<<endl;
        }
        else if(sc.size()==2){
            int ans=4;
            for(auto[c,ox]:freq){
                if(ox==1){
                    ans=6;
                    break;
                }
            }
            cout<<ans<<endl;
        }
        else if(sc.size()==3){
            cout<<4<<endl;
        }
        else if(sc.size()==4){
            cout<<4<<endl;
        }
    }
return 0;
}

