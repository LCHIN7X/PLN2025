#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string>particles;
    vector<int>particlesLeft;

    for (int i =0;i<n;i++){
        string p;
        cin>>p;
        particles.push_back(p);
    }

    for(int i=0;i<particles.size();i++){
        vector<char> aliveParticles;
        string current =  particles[i];

        for(int j = 0;j<current.length();j++){
            char currentLetter = current[j];

            if (currentLetter == 'A') {
                aliveParticles.push_back('A');
            }
            else if(currentLetter == 'B'){
                
                if(!aliveParticles.empty() && aliveParticles.back()== 'A'){
                    aliveParticles.pop_back();
                }
                else if(!aliveParticles.empty() && aliveParticles.back()== 'B'){
                    aliveParticles.pop_back();
                }
                else{
                    aliveParticles.push_back('B');
                }
            }
        }
        particlesLeft.push_back(aliveParticles.size());
        
    }
    for (int i =0;i<particlesLeft.size();i++){
        cout<<particlesLeft[i]<<endl;
    }
    return 0;
}