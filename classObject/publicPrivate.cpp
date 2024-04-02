#include<iostream>
using namespace std;

class hero{

    //properties

     private: 
    int score;

    public:
    int health;
    char level;
    
   
// to acess private member you can acces using getter and setter function
   int getscore(){
    return score;
   };

   void setscore(int s){

    score = s;

   };


   
};

int main(){

    hero h2;

    h2.health = 89;
    h2.level = 'A';

    cout <<"Health : " << h2.health  <<endl;  // Health : 89
    cout <<"Level: " << h2.level  <<endl; // Level: A
    // cout <<"score: " << h2.score  <<endl;  // it show the error,coz its in private 
  
    h2.setscore(100);
    cout << "score : " <<h2.getscore() <<endl; // score : 100

    return 0;

};