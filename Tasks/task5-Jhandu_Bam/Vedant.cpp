#include <bits/stdc++.h>

using namespace std;

//This solution has a time complexity of O(n), as we explore at most n positions in the array. The space complexity is also O(n), as we store at most n positions in the queue and visited set.

int main() {
  int t;cin>>t;
  while(t--){

  int n,c=0;cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  // Queue to store the stages that need to be explored
  queue<int> queue;
  queue.push(0);
  // Set to store the stages that have already been visited
  unordered_set<int> visited;

  // BFS loop
  while (!queue.empty()) {
    int curr_stage = queue.front();
    queue.pop();
    // Mark the stage as visited
    visited.insert(curr_stage);
    // Get the power of the Jandu Bam at this stage
    int JanduBam_power = a[curr_stage];
    // Calculate the next stage after using the Jandu Bam
    int next_stage = curr_stage + JanduBam_power;
    // If the next position is the last index, we can reach it
    if (next_stage == n - 1) {
      c=1;
      break;
    }
    // If the next stage has not been visited yet, add it to the queue
    if (next_stage >= 0 && next_stage < n && visited.count(next_stage) == 0) {
      queue.push(next_stage);
    }
    // If the Jandu Bam power is not positive, we can also try going one step back
    if (JanduBam_power <= 0) {
      next_stage = curr_stage - 1;
      // If the next stage has not been visited yet, add it to the queue
      if (next_stage >= 0 && next_stage < n && visited.count(next_stage) == 0) {
        queue.push(next_stage);
      }
    }
  }

  if(c==1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  }
  return 0;
}
