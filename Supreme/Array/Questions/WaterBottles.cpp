#include<bits/stdc++.h>
using namespace std;
int numWaterBottles(int numBottles, int numExchange) {
        long long TotalSum=numBottles;

        int emptyBottles=numBottles;

        while(emptyBottles>=numExchange){

            int FilledBottle= numBottles/numExchange;
            int RemainingBottles=numBottles%numExchange;
            TotalSum+=FilledBottle;
            emptyBottles=FilledBottle+RemainingBottles;
        }

    return TotalSum;
}
int main(){
    int numBottles=9;  
    int numExchange=3;
    numWaterBottles(numBottles,numExchange);
    return 0;
}