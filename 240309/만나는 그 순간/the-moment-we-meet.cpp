#include <iostream>
#include <stdio.h>

#define MAX_N 1000
#define MAX_M 1000

using namespace std;


int n, m;
int result=-1;
int arrb[1000000];
int arra[1000000];

int main() {
    scanf("%d %d", &n, &m);
    char rot;
    int temp;
    int ar=0;
    int br=0;
    int at=0;
    int bt=0;
    for(int i=0; i<n; i++){
        scanf("%s %d", &rot, &temp);
        for(int j=at; j<at+temp; j++){
            if(rot=='R'){
                ar+=1;
            }else{
                ar-=1;
            }
            arra[j]=ar;
        }
        at+=temp;
    }
    for(int i=0; i<m; i++){
        scanf("%s %d", &rot, &temp);
        for(int j=bt; j<bt+temp; j++){
            if(rot=='R'){
                br+=1;
            }else{
                br-=1;
            }
            arrb[j]=br;
        }
        bt+=temp;
    }
    for(int i=0; i<at;i++){
        if(arra[i]==arrb[i]){
            result=i+1;
            break;
        }
    }
    printf("%d",result);
    return 0;
}