//Author: Carter Fitzsimons 
//done without group
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
  //declare variables
  string first;
  string last;
  bool isFamous = false;
  bool foundLove = false;
  int lucky; //holds the # of letters in first + last 
  vector<char> vowel; //vector that will hold all vowels 
  char v[10] = {'a','e','i','o','u','A','E','I','O','U'}; //puts vowels in array to load into vowel vector
  vowel.insert(vowel.end(), v, v+10); //stores vowels in array in vector
  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>first;
  cout<<"What is your last name?"<<endl;
  cin>>last;
  //vowel check 
  sort (vowel.begin(), vowel.end()); 
  if(binary_search (vowel.begin(), vowel.end(), first[0]))
    isFamous = true;  
   
  if (binary_search (vowel.begin(), vowel.end(), first[last.size() - 1]) == false)
    foundLove = true; 
 

  
  //tell fortune
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;
  lucky = first.length();
  cout<<"your lucky number is "<<lucky<<endl;
  if (isFamous == true){
    cout<<"you are destined to be famous!"<<endl;}
  else{
    cout<<"you should keep a low profile."<<endl;}
 
  if (foundLove == true)
    cout<<"you have already met your true love."<<endl;

  cout<<"have a good day!"<<endl;

  return 0;
}
