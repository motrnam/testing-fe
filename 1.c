#include <stdio.h>

union naghavi{
double a;
long long int b;
};
int main(){
char memory1[17];
char memory2[17];
char memory3[17];
union naghavi na;
printf("%c",memory1[5]);
scanf("%lf",&na.a);
sprintf(memory1,"%p",na.b);
//printf("%s",memory1);
for(int i1=0;i1<16;i1++){
    memory2[(15-i1)]=memory1[i1];
}
//printf("\n%s\n",memory2);
for(int i3=0;i3<16;i3++){
    if(memory2[i3]=='A'){
        memory2[i3]='a';
    }
    if(memory2[i3]=='B'){
        memory2[i3]='b';
    }
    if(memory2[i3]=='C'){
        memory2[i3]='c';
    }
    if(memory2[i3]=='D'){
        memory2[i3]='d';
    }
    if(memory2[i3]=='E'){
        memory2[i3]='e';
    }
    if(memory2[i3]=='F'){
        memory2[i3]='f';
    }
}
for(int ii=0;ii<16;ii++){
    memory3[ii]=memory2[(ii+1)%16];
}
for(int t=0;t<16;t++){
    printf("%c",memory3[t]);
}
}
