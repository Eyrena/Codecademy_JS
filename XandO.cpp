#include <iostream>
using namespace std;

void afisare(int v[]){
 cout<<"\n_________\n";
 for (int i=1;i<10;i++){
    
      if (v[i-1]==0){
        if (i%3==0){
          cout<<"O\n_________\n";
        }
        else {
          cout<<"O | ";
        }
      }
      else if (v[i-1]==10){
        if (i%3==0){
          cout<<"X\n_________\n";
        }
        else {
          cout<<"X | ";
        }
      }
      else {
        if (i%3==0){
          cout<<"\n_________\n";
        }
        else {
          cout<<"  | ";
        }}}}


bool check_raw(int player, int v[]){
    if (player<=3)
    {
      if (v[0]==v[1]&&v[1]==v[2]){
        return true;
      }
      else {return false;}
    }
    else if (player<=6){
      if (v[3]==v[4]&&v[4]==v[5]) {
        return true;
      }
      else {return false;}
    }
    else if (v[6]==v[7]&&v[7]==v[8]){
      return true;
    }
    else {return false;}}

bool check_col(int player, int v[]){
  if (player%3==1)
    {
      if (v[0]==v[3]&&v[3]==v[6]){
        return true;
      }
      else {return false;}
    }
    else if (player%3==2){
      if (v[1]==v[4]&&v[4]==v[7]) {
        return true;
      }
      else {return false;}
    }
    else if (v[2]==v[5]&&v[5]==v[8]){
      return true;
    }
    else {return false;}}

bool check_diag(int player, int v[]){
  if (v[0]==v[4]&&v[4]==v[8]) {
    return true;
  } else if (v[2]==v[4]&&v[4]==v[6]){
    return true;
  } else { return false;}}



int main() {
  int player_o, player_x,nr=1;
  bool linie_x=false, linie_o=false,ok;
  int v[]={1,2,3,4,5,6,7,8,9};

  cout<<"============\nTic-Tac-Toe\n============\nPlease state a position from 1 to 9 to place your mark. Please see below the matrix\n 1 2 3\n 4 5 6\n 7 8 9\n============\n\n";

  while (nr<9&&!linie_x&&!linie_o){
    if (nr%2==0){
       ok=true;
       do
         {
           cout<<"Player 0 marks : ";
           cin>>player_o;
           if (v[player_o-1]!=player_o) {
             ok=false;
             cout<<"The seat is taken.\n";
           }
           else {
             v[player_o-1]=0;
             ok=true;
           }
         }while(!ok);
      
       linie_o=check_raw(player_o, v);
       if (!linie_o){
          linie_o=check_col(player_o,v);
       }
       if (!linie_o){
          linie_o=check_diag(player_o,v);
       }  
    }
    else 
    {
       ok=true;
       do
         {
           cout<<"Player X marks : ";
           cin>>player_x;
           if (v[player_x-1]!=player_x) {
             ok=false;
             cout<<"The seat is taken.\n";
           }
           else {
             v[player_x-1]=10;
             ok=true;
           }
         }while(!ok);
      
       linie_x=check_raw(player_x, v);
       if (!linie_x){
          linie_x=check_col(player_x,v);
       }
       if (!linie_x){
          linie_x=check_diag(player_x,v);
       } }

  afisare(v);
  nr++;
  }

  if (linie_x){
    cout<<"X line!!!";
  } else if (linie_o){
    cout<<"O line!!!";
  } else {cout<<"Nobody wins!";}

return 0;
}
