
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <map>
#include <algorithm>
#include <functional>
#include <queue>

using namespace std;

void codeforces_486_A(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    vector<int> b;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        int j;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(j==i){
            b.push_back(i+1);
        }
    }
    if(b.size()<k){
            printf("NO");
    }
    else{
        printf("YES\n");
        for(int i=0;i<k;i++){
            printf("%d ", b[i]);
        }
    }
}

struct pppair{
    char c[101];
    int len;
};

bool operator <(const pppair a, const pppair b){
    return a.len<b.len;
}

void codeforces_486_B(){
    int n;
    scanf("%d", &n);
    pppair p[n];
    for(int i=0;i<n;i++){
        scanf("%s", p[i].c);
        p[i].len=strlen(p[i].c);
    }
    sort(p, p+n);
    int i;
    for(i=0;i<n-1;i++){
            int yes=0;
        for(int j=0;j<=p[i+1].len-p[i].len;j++){
            int no=0;
            for(int k=0;k<p[i].len;k++){
                if(p[i].c[k]!=p[i+1].c[k+j]){
                    no=1;
                }
            }
            if(no==0){
                yes=1;
            }
        }
    if(yes==0){
        break;
    }
    }
    if(i==n-1){
        printf("YES\n");
        for(int ii=0;ii<n;ii++){
            printf("%s\n", p[ii].c);
        }
    }
    else{
        printf("NO");
    }
}

struct ttuple{
    long long a;
    int b;
    int c;
};

bool operator <(const ttuple aa, const ttuple bb){
    if(aa.a!=bb.a){
        return aa.a<bb.a;
    }
    else{
        return aa.b<bb.b;
    }
}

void codeforces_486_C(){
    int k;
    scanf("%d", &k);
    int len[k+1];
    vector<int> v[k+1];
    for(int i=1;i<=k;i++){
        scanf("%d", &len[i]);
        for(int j=0;j<len[i];j++){
            int a;
            scanf("%d", &a);
            v[i].push_back(a);
        }
    }
    long long sum[k+1];
    vector<ttuple> t;
    for(int i=1;i<=k;i++){
        sum[i]=0;
    }
    for(int i=1;i<=k;i++){
        for(int ii=0;ii<v[i].size();ii++){
            sum[i]+=v[i][ii];
        }
    }
    for(int i=1;i<=k;i++){
        for(int ii=0;ii<v[i].size();ii++){
            ttuple tt;
            tt.a=sum[i]-v[i][ii];
            tt.b=i;
            tt.c=ii+1;
            t.push_back(tt);
        }
    }
    sort(t.begin(), t.end());
    for(int i=0;i<t.size()-1;i++){
        if(t[i].a==t[i+1].a && t[i].b!=t[i+1].b){
            printf("YES\n");
            printf("%d %d\n", t[i].b, t[i].c);
            printf("%d %d\n", t[i+1].b, t[i+1].c);
            return;
        }
    }
    printf("NO\n");
}

long long pow2[31];

int ffind(long long* a, long long b, int st, int en){
    if(st==en){
        if(a[st]==b){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
            int mid=(st+en)/2;
        if(a[mid]<b){
            return ffind(a, b, mid+1, en);
        }
        else{
            return ffind(a, b, st, mid);
        }
    }
}

void codeforces_486_D(){
    pow2[0]=1;
    for(int i=1;i<=30;i++){
        pow2[i]=pow2[i-1]*2;
    }
    int n;
    scanf("%d", &n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld", &a[i]);
    }
    sort(a, a+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=30;j++){
            if(ffind(a, a[i]-pow2[j], 0, n-1)==1 && ffind(a, a[i]+pow2[j], 0, n-1)==1){
                printf("3\n");
                printf("%lld %lld %lld", a[i]-pow2[j], a[i], a[i]+pow2[j]);
                return;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=30;j++){
            if(ffind(a, a[i]-pow2[j], 0, n-1)==1){
                printf("2\n");
                printf("%lld %lld", a[i]-pow2[j], a[i]);
                return;
            }
            else if(ffind(a, a[i]+pow2[j], 0, n-1)==1){
                printf("2\n");
                printf("%lld %lld", a[i], a[i]+pow2[j]);
                return;
            }
        }
    }
    printf("1\n");
    printf("%lld", a[0]);
}

void codeforces_486_E(){
    char c[20];
    scanf("%s", c);
    int len=strlen(c);
    int a[len+1];
    a[len]=1000;
    for(int i=0;i<len;i++){
        a[i]=c[i]-'0';
    }
    int first0=-1;
    int second0=-1;
    int first2=-1;
    int first5=-1;
    int first7=-1;
    int first00=-1;
    int first25=-1;
    int first50=-1;
    int first75=-1;
    for(int i=len-1;i>=0;i--){
        if(a[i]==0){
            if(first0==-1){
                first0=i;
            }
            else if(second0==-1){
                second0=i;
            }
        }
        else if(a[i]==2){
            if(first2==-1){
                first2=i;
            }
        }
        else if(a[i]==5 && first5==-1){
            first5=i;
        }
        else if(a[i]==7 && first7==-1){
            first7=i;
        }
    }
    if(first0!=-1 && second0!=-1){
        first00=2*len-3-first0-second0;
    }
    if(first0!=-1 && first5!=-1){
        if(first0>first5){
            first50=2*len-3-first0-first5;
        }
        else{
            first50=2*len-2-first0-first5;
        }
        if(first5==0 && first0!=1){
            int iii=1;
            while(a[iii]==0){
                first50++;
                iii++;
            }
        }
    }
    if(first2!=-1 && first5!=-1){
        if(first5>first2){
            first25=2*len-3-first2-first5;
        }
        else first25=2*len-2-first2-first5;
        if(first2==0 || first5==0){
            int iii=1;
            while(a[iii]==0){
                first25++;
                iii++;
            }
        }
    }
    if(first7!=-1 && first5!=-1){
        if(first5>first7){
            first75=2*len-3-first5-first7;
        }
        else first75=2*len-2-first5-first7;
        if(first5==0 || first7==0){
            int iii=1;
            while(a[iii]==0){
                    first75++;
                    iii++;
            }
        }
    }
    if(first00==-1 && first25==-1 && first50==-1 && first75==-1){
        printf("-1");
        return;
    }
    else{
        if(first00==-1){
            first00=4*len+5;
        }
        if(first25==-1){
            first25=4*len+5;
        }
        if(first50==-1){
            first50=4*len+5;
        }
        if(first75==-1){
            first75=4*len+5;
        }
    }
    int ans=first00;
    if(ans>first25){
        ans=first25;
    }
    if(ans>first50){
        ans=first50;
    }
    if(ans>first75){
        ans=first75;
    }
    printf("%d", ans);
    map<int, int> mmap;
    mmap.insert(pair<int, int> (1, 2));
    mmap.insert(pair<int, int> (2, 3));
    mmap.insert(pair<int, int> (3, 5));
    mmap.insert(pair<int, int> (5, 8));
    map<int, int>::iterator it=mmap.lower_bound(4);
    printf("%p %p", it, mmap.end());
}

int main()
{
    codeforces_486_D();
    return 0;
}
