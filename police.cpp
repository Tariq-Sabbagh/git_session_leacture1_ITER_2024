<<<<<<< HEAD
//tariq`s solved

#include<bits/stdc++.h>

typedef long long ll;


#define vi vector <int> 
#define pi pair <int,int> 
// #define ss set <string>
// #define si set <int> ::iterator 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define Fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;

void solve(){
   int n;cin>>n;
    int police=0,crimes=0,tread=0;
    int arr[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,0,n)
    {
        if(arr[i]==-1 && police<=0)
        {
            tread++;
        }
        else if(arr[i]>0)
        {
            police+=arr[i];
        }
        else
        {
           police--; 
        }
    }
    cout<<tread;
    


    
       
}
int main(){
    Fast;
    int t=1;
    // cin>>t;
    while(t--)
    solve();
    return 0;
}



/*
 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢦⢛⡿⠃⠉⠉⠉⠐⡂⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠊⢁⣿⠷⠶⠶⠶⠶⢶⣽⣦⡱⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⣠⣐⣌⣳⣼⣶⣶⣶⣤⣌⡱⢮⡷⠣⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢰⣿⣦⣤⣀⠄⢸⣯⢋⣹⣿⣿⠋⣿⠹⣿⣿⣿⣿⣷⣴⣌⣿⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣠⣿⢯⣟⡾⣿⢴⡿⠟⠨⣽⣿⡟⠀⠻⠀⠙⢿⡘⡟⣿⣿⣯⡤⢛⣧⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣠⣶⡿⣿⣽⣻⢾⣻⣽⣤⡱⣌⡼⢻⢿⡹⢢⣤⠀⠰⠊⡝⠇⢻⣟⣿⣟⠘⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢰⣿⣳⣟⣷⣻⣿⣿⡛⠛⠉⠁⠈⠛⠯⣘⢵⠒⠊⡀⠀⠑⢶⠇⡾⣿⢛⢠⣬⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠙⢷⣻⣟⣿⣻⣿⡿⣶⣤⣀⣀⣀⣀⠀⠈⠓⢕⢄⣂⠭⣋⣶⠛⠓⠊⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠈⠛⠾⣽⢯⣿⢿⣳⣿⣻⣟⣿⢷⣦⣀⣀⠝⠒⠬⠟⠉⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠉⠻⢿⣿⣻⣷⣯⣿⣿⡏⠙⠪⡀⣀⣜⣀⣀⠈⣿⣖⣤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣷⣿⡾⣟⣷⠀⠀⡠⠃⠀⣠⣴⣿⢿⡿⣟⡿⣟⡿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣽⢿⣿⠩⢴⢰⣄⢴⡾⣿⡽⣾⢯⡿⣽⣿⣻⡽⣯⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣸⣀⡈⡏⣶⣶⠰⣿⣹⣏⣿⣹⣷⣏⣷⣿⣹⢿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣜⣿⣇⣻⣉⣹⣏⢱⠲⡯⣿⢷⣻⣞⣷⣿⣿⣿⣻⣟⣯⣷⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⣿⡗⣼⢩⠟⢹⠙⢯⢷⠵⣿⣯⡷⣟⣾⣻⣿⡏⢻⡾⣽⢾⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣷⣿⣷⡱⣋⡠⢾⢀⠈⠈⢾⣻⡷⣿⣟⣷⣻⣞⣇⠀⢻⣯⡿⣞⣷⡀⢀⣀⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⡏⠆⠀⠀⡇⠀⠈⠀⠈⡳⢿⣯⢿⣾⣷⣻⣿⣴⣿⣿⣻⢿⣾⣻⣿⣟⣿⠄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⡇⠃⠒⠒⡉⠒⠄⠄⠀⠱⡌⡿⢯⢿⣿⣷⣯⢿⣻⣿⣿⢯⣷⣻⣷⣿⣞⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⢯⣿⣿⡇⢠⠀⠀⡇⠀⠀⠀⣘⠀⠈⠣⢤⣿⣿⣻⣿⣿⣳⣯⢿⣟⡾⣷⢿⣿⣟⣿⠷⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣿⡟⠻⡇⠘⠀⠀⠃⣀⣀⣀⣿⡠⡤⡠⣀⡝⠛⠋⠸⣿⣿⣽⣿⢿⣻⣽⣯⣿⡿⠟⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠓⠉⢉⣀⠀⢀⠐⠶⠒⡆⠘⡴⠡⡈⡑⠀⠀⠀⠀⠀⠻⣯⣿⡛⡿⢿⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣞⠩⠁⠒⠈⣀⣤⣀⠒⠘⢹⠀⢃⢆⢣⢁⢁⠀⠀⠀⠀⠀⠀⠀⠩⠒⠸⡄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠠⣔⣄⣒⣁⣀⣀⣉⣉⣉⡃⠀⠸⠈⠎⠞⡎⢆⠀⠀⠀⠀⠀⠀⠈⠀⠀⡣⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⣿⣟⢿⣻⣿⣿⣿⣿⢿⣟⣿⠀⠀⢣⠈⢣⠈⠢⠕⣶⡢⠤⠤⢄⠐⠀⠀⠈⡆⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣟⡾⣯⣿⣽⣷⣿⣯⣿⣾⣿⣧⡀⠀⡓⢄⠙⢤⢀⠀⠈⠈⠰⣧⡄⠀⠀⠀⠐⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⢯⣟⡽⣞⣳⣿⣿⣾⣷⣯⣟⢿⡿⣦⣌⡀⠐⠒⠓⠪⠤⢐⡠⢹⣯⣤⢤⣴⠞⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣻⠾⣽⣿⡿⣿⣿⣷⢯⣟⣿⣻⢾⣽⣻⢿⣿⣿⡇⠐⢆⠒⢫⡁⠒⠴⣤⡀⠈⠀⠤⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣽⣻⣽⡳⣟⣿⣿⣿⣿⢮⡷⢯⣟⡾⣭⢿⣽⣻⣧⠀⠀⢱⢸⠈⠢⡀⡈⢎⠲⡀⠀⡇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢾⣳⢯⣶⣻⣽⣿⣿⣿⣿⣯⡟⣟⡾⣽⣫⣟⣶⣻⢾⡄⠀⠀⠹⡀⢀⠜⠀⠈⠲⠏⠉⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⡿⣭⣟⡾⣳⢿⣿⣿⣿⣷⣯⠿⣝⣯⢷⣛⡾⣵⢯⣟⡇⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣳⢯⡽⣯⢿⣽⣿⣿⣿⣯⢿⡽⣞⣯⢿⣹⢯⣟⡾⣽⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡷⣯⠿⣽⣯⣟⣾⣽⣿⣿⠸⡿⣽⣻⡼⣯⣟⣿⣾⡽⣳⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠚⠛⠞⠿⠿⠷⡿⠿⠿⠟⠛⡀⢿⣷⣯⣷⠿⣾⡽⣿⠿⡿⠛⢢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⠀⢌⠤⠤⡠⢤⡤⠀⠓⠊⠀⠈⠦⣢⣀⣀⠤⠠⠤⠴⢍⠛⠚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠲⣁⠆⡡⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⡑⢌⠢⡹⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠈⠒⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠌⠈⠁⠀⠰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢁⠀⠀⠀⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⡀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢃⠀⠀⠀⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⣘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠃⠀⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⠃⠀⠀⢸⢢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣀⢠⣶⣘⣻⣶⣄⠀⠀⠉⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⠀⠀⠀⠅⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢠⢮⣻⣻⡊⠛⠋⠉⢙⣿⣷⡦⢆⢲⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣤⣦⣴⣼⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠓⠈⠽⠛⠿⡒⠻⠽⠉⠓⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢐⢿⣄⣠⡶⠛⠛⡆⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣘⠈⣿⠁⡄⢄⢠⠰⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢷⡶⠿⣵⡿⠽⠾⢿⠳⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⠂⠊⠌⠈⠁⠖⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
=======
#include <iostream>

using namespace std;

int main()
{
    int n,police=0,untreated = 0;
    cin>>n;
    int chro [100000];
    for(int i = 0; i < n; i++){
        cin>>chro[i];
        if(chro[i] != -1){
            police+=chro[i];
        }
        else{
            if(police == 0)
                untreated++;
            else
                police--;
        }
    }
    cout<<untreated;

    return 0;
}
>>>>>>> maher_Solve
