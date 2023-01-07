#include <stdio.h>

int main(){
int base1,base2;
scanf("%i%i",&base1,&base2);
printf("%i",base1);
getchar();
char ragham;
int my_number=0;
while(ragham!='\n'){
    scanf("%c",&ragham);
    if(ragham!='\n'){
    my_number=(my_number*base1)+(ragham-'0');
}
}
printf("%i\n",my_number);
int adad[32];
int i=31;
for(int i3=0;i3<32;i3++){
adad[i3]=0;}
while((my_number!=0)){
        if((my_number%base2)<base2){
    adad[i]=my_number%base2;}

    my_number=my_number/base2;
    i--;
}
int num1,num2;
int stop=0;
int first;
for(int i4=0;i4<32;i4++){
    if((stop==0)&&(adad[i4]!=0)){
            first=i4;
            stop=1;
    }

}
int p1[16];
int p2[16];
int p3[17];
int dahber1[17];
for(int h=0;h<16;h++){
    p1[h]=0;
    p2[h]=0;
    p3[h]=0;
    dahber1[h]=0;
dahber1[17]=0;
    }
p3[17]=0;
if((first%2)==0){
    int length1=(32-first)/2;
    for(int ii=0;ii<length1;ii++){
        p1[((first/2)+ii)]=adad[(first+ii)];
        p2[((first/2)+ii)]=adad[(first+ii+length1)];
        //printf("ju %i\n",((first/2)+ii));
    }
if((first%2)==1){
    int length=((32-first)/2)+1;
    for(int ii1=0;ii1<length;ii1++){
        p1[((first/2)+ii1+1)]=adad[(first+ii1)];
        //printf("jul %d\n",((first/2)+ii1+1));
    }
    for(int ii1=0;ii1<(length-1);ii1++){
        p2[((first/2)+ii1+1+length)]=adad[(first+ii1+length)];
    }
    p2[-1]=0;
}
int len;
if((first%2)==0){
    len=(32-first)/2;
}
if((first%2)==1){
    len=1+(32-first)/2;
}
for(int j=-1;j>=-16;j--){
    p3[j]=p3[j]+p2[j]+p1[j];
    if(p3[j]>=base2){
        p3[j]=p3[j]-base2;
        p3[j-1]+=1;
    }
}
}
for(int j1=0;j1<17;j1++){
    printf("%i",p3[j1]);
}
printf("\n");
for(int j1=0;j1<16;j1++){
    printf("%i %i\n",p1[j1],p2[j1]);
}
printf("%i",p3[16]);
}
