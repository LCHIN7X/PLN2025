#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main (){
    int n,m;
    cin>>n>>m;

    vector<int>timeEpisode;
    for (int i=0;i<n;i++){
        int t;
        cin>>t;
        timeEpisode.push_back(t);
    }

    int left = *max_element(timeEpisode.begin(),timeEpisode.end()); //the longest episode(cannot short than this)
    int right = 0; //total time of all episode of all episodes (put them in one slot)
    for(int x : timeEpisode){ //loop
        right += x;
    }

    int answer = right;

    while(left<=right){
        int mid = left + (right - left)/2; //binary search
        int slots = 1; //use 1 slot first 
        int sum = 0; //how many time for this slot

        for(int i = 0;i<n;i++){
            if(sum+timeEpisode[i]>mid){ //if the sum of time episode will over the mid
                slots++; //open a new slot
                sum = 0;
            }
            sum += timeEpisode[i];  //add the episode time together
        }
        if (slots <= m){ //if the number of slot is same or smaller than input 
            answer = mid;
            right = mid -1; //try use the smaller time for 1 slot
        }
        else{
            left = mid +1; //if not enough,add back the time for slot
        }

    }
    cout<<answer<<endl;
    return 0;
}
        