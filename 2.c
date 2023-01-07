#include <stdio.h>
#include <string.h>

long long int memory[20][20];
long long int temp[20][20];
long long int t2[20][20];
void input(int n,int m){//n satr m soton hast
for(int i1=0;i1<n;i1++){
    for(int i2=0;i2<m;i2++){
        scanf("%lld",&temp[i1][i2]);
    }
}
}
void print_array(int a,int b){
for(int ii1=0;ii1<a;ii1++){
    for(int ii2=0;ii2<b;ii2++){
            int mem=(int)(memory[ii1][ii2]%num);
            mem=(mem)%998244353;
        printf("%d ",mem);
    }
    printf("\n");
}
}
//v3 moshtarakate
void zarb(int v1,int v2,int v3){
    for(int i1=0;i1<v1;i1++){
        for(int i2=0;i2<v2;i2++){
                t2[i1][i2]=0;
            for(int i3=0;i3<v3;i3++){
                t2[i1][i2]=(t2[i1][i2]+(memory[i1][i3]%num)*(temp[i3][i2]%num)+num)%num;
            }
            t2[i1][i2]=t2[i1][i2]%num;
        }
    }
    for(int j1=0;j1<v1;j1++){
        for(int j2=0;j2<v2;j2++){
            memory[j1][j2]=t2[j1][j2];
        }
    }
}
int main(){
int number;
scanf("%d",&number);
int x,y;
int x_copy,y_copy;
scanf("%d",&x);
scanf("%d",&y);
int frist_x=x;
input(x,y);
for(int j1=0;j1<x;j1++){
        for(int j2=0;j2<y;j2++){
            memory[j1][j2]=temp[j1][j2];
        }
    }
//print_array(x,y);
for(int ii=0;ii<number-1;ii++){
    int x_copy=x;
    int y_copy=y;
    scanf("%i",&x);
    scanf("%i",&y);
    for(int i1=0;i1<x;i1++){
    for(int i2=0;i2<y;i2++){
        scanf("%lld",&temp[i1][i2]);
    }
}
    //zarb(x_copy,y,y_copy);
    for(int i1=0;i1<x_copy;i1++){
        for(int i2=0;i2<y;i2++){
                t2[i1][i2]=0;
            for(int i3=0;i3<y_copy;i3++){
                t2[i1][i2]=(t2[i1][i2]+(memory[i1][i3]%998244353)*(temp[i3][i2]%998244353)+998244353)%998244353;
            }
            t2[i1][i2]=t2[i1][i2]%998244353;
        }
    }
    for(int j1=0;j1<x_copy;j1++){
        for(int j2=0;j2<y;j2++){
            memory[j1][j2]=t2[j1][j2];
        }
    }
    //print_array(frist_x,y);
    //printf("salam %lld   hj",memory[0][0]);
    //printf("salam");
}

//print_array(frist_x,y);
for(int ii1=0;ii1<frist_x;ii1++){
    for(int ii2=0;ii2<y;ii2++){
            int mem=(int)(memory[ii1][ii2]%num);
            mem=(mem)%998244353;
        printf("%d ",mem);
    }
    printf("\n");
}
}
