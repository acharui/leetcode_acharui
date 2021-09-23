#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        auto g_iter = g.begin();
        auto s_iter = s.begin();
        int output = 0;
        while(s_iter != s.end() && g_iter != g.end()){
            if(*g_iter <= *s_iter){
                output++;
                g_iter++; 
            }
            s_iter++;
        }
        return output;
    }
};

int main(){
    cout << "hello git" << endl;
    return 0;
}