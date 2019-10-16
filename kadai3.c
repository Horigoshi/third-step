#include<stdio.h>
#include<math.h>

int main(){

  double sci[20] = {65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
  double eng[20] = {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
int i,j; 
double sums,sume,aves,avee,ss,se;

for(i=0;i<20;i++){
 sums += sci[i];
}

for(j=0;j<20;j++){
 sume += eng[i];
}

aves = sums / 20;
avee = sume / 20;  


printf("理科の合計点は%lf点、平均点は%lf点でした。\n"sums,aves);
printf("英語の合計点は%lf点、平均点は%lf点でした。\n"sume,avee);

