//TWO SETS
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
  long long n,soma,media,somaux;
 
  cin >> n;
 
  soma = (n*(n+1)) /2;
 
  if((soma % 2) != 0){
    cout << "NO\n";
    return 0;
  }
 
  media = soma/2;
  vector<long long> set1,set2;
 
  somaux = 0;
  long long counter=1;
 
  while(somaux < media){
 
    set1.push_back(counter);
    somaux+=1+counter;
    set1.push_back((n+1)-counter);
    somaux+=n-counter;
    
    if(somaux >= media){
      break;
    }
    else{
      counter++;
    }
 
    
  }
 
 // cout << "aqui " << counter << ' ' << somaux <<  endl;
 
  if(somaux > media){
      set1.pop_back();
      set1.push_back((n/2)+1);
 
      somaux = 0;
 
      set2.push_back((n+1)-counter);
      somaux = (n+1)-counter;
 
      counter++;
      
      //cout << "start\n";
      while(somaux<media){
 
        //cout << counter << " " << somaux <<  endl;
        if(somaux==media){
          break;
        }        
 
        if(counter == ((n/2)+1)){
          
          counter++;
        }
        else{
          set2.push_back(counter);
          somaux+=counter;
          counter++; 
        }
            
      }  
  }
  else if(somaux==media){
    //cout << "start2" << endl;
    somaux = 0;
 
    counter++;
 
    while(somaux!=media){
      //cout << counter << " " << somaux << endl;
      set2.push_back(counter);
      somaux += counter;
      counter++;         
    }
 
  }
 
 
  cout << "YES\n";
  cout << set1.size() << endl;
  for(int i=0;i<set1.size()-1;i++){
    cout << set1[i] << ' ';
  }
  cout << set1[set1.size()-1] << endl;
 
  cout << set2.size() << endl;
  for(int i=0;i<set2.size()-1;i++){
    cout << set2[i] << ' ';
  }
  cout << set2[set2.size()-1] << endl;
 
  return 0;
}