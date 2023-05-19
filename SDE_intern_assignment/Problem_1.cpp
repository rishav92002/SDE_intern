#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// function to find new index

int findNewIndex(vector<char>& oldQueue, int currentIndex, vector<char>& newQueue) {
    int n = oldQueue.size();
    int m= newQueue.size();
    int i=0;// this index is for vector oldQueue
    int j=0;// this index is for vector newQueue
    while(i<n&&j<m){
        if(i==currentIndex-1){ //when i=currentIndex-1 for old queue then index j corresponding to newQueue will be the current index for newQueue
            return j+1;
        }else if(oldQueue[i]==newQueue[j]){  //if char at index i in oldqueue= char at j in new queue we will move forward in both queue
           i++;
           j++;
        }else{ ////if char at index i in oldqueue is not equal to  char at j in new queue, It means that char in oldqueue has been removed so we need to move forward only in oldQueue
            i++;
        }
    }
    return 0;
}

int main() {
    vector<char> oldQueue = {'A', 'B', 'C', 'D', 'E', 'F', 'A', 'B', 'C', 'D', 'A', 'B', 'C', 'A', 'B', 'A'};
    vector<char> newQueue = {'B', 'D', 'E', 'F', 'B', 'D', 'B', 'B'};
    int currentIndex = 9;
    int newIndex = findNewIndex(oldQueue, currentIndex, newQueue);
    cout << "New Index: " << newIndex <<'\n';

    return 0;
}







