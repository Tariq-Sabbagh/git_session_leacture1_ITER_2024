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
