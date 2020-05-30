#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int i,j,k,l,m,a=strlen(s);
    for(i=0;i<a;i++){
        if(s[i]=='h'){
            for(j=i+1;j<a;j++){
                if(s[j]=='e'){
                    for(k=j+1;k<a;k++){
                        if(s[k]=='l'){
                            for(l=k+1;l<a;l++){
                                if(s[l]=='l'){
                                    for(m=l+1;m<a;m++){
                                        if(s[m]=='o'){
                                            printf("YES\n");
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
