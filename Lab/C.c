#include<stdio.h>
int main(){
    int t, n, x;

    scanf("%d",&t);

    while(t>0){
        x=0;

        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);

        if(n<4){
            printf("NO");
            continue;
        }

        for(int i=0; i<=n-3; i++){
            for(int j=i+2; j<n-1; j++){
                if((str[i]==str[j]) && (str[i+1]==str[j+1])){
                    x++;
                    break;
                }
                
            }
            if(x!=0){
                printf("YES\n");
                break;
            }
            else if(i==n-3){
                printf("NO\n");
            }
        }

        t--;
    }
}