#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;

    vector<pair<int,int>> rememberChest;

    for(int i=0;i<b;i++){
        int chestNum,chestlevel;
        cin>>chestNum>>chestlevel;
        rememberChest.push_back({chestNum,chestlevel}); //save pair into vector
    }

    set<int> validLevels; //possible value for a

    for(int x=1;x<=100;x++){
        bool valid = true;

        for(int i=0;i<rememberChest.size();i++){
            int chestNum = rememberChest[i].first;
            int chestlevel = rememberChest[i].second;

            int formula = ((chestNum-1)/x)+1;

            if(formula != chestlevel){
                valid = false;
                break;
            }
        }
        //if c is valid
        if(valid){
            int levelChest = ((a-1)/x)+1;
            validLevels.insert(levelChest); //store result to set
        }
    }

    //only one possible for the location chest
    if(validLevels.size()==1){
        cout<<*validLevels.begin()<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}