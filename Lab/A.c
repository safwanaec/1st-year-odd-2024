#include<stdio.h>

int main(){
    int arr[6][2]={{1,2},{3,4},{5,6},{2,1},{4,3},{10,11}};

    for(int i=0; i<3; i++){
        for(int j=0; j<6; j++){
            if((arr[i][0] == arr[j][1]) && (arr[i][1]==arr[j][0])){
                printf("\n{%d, %d} and {%d, %d} are symetric\n", arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            }
        }
    }
    return 0;
}