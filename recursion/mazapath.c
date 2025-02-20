#include<stdio.h>
 int maza ( int cr, int cc, int er , int ec){
    int rightway = 0;
    int downway  = 0;
    if ( cr==er && cc ==ec) return 1;
    if ( cr == er ){  // only rightway call
            rightway += maza ( cr , cc+1, er , ec);
    }
    if ( cc == ec){
        downway +=  maza ( cr +1 ,cc ,er , ec );

    }
    if ( cr<er &&  cc<ec ){
         rightway += maza ( cr , cc+1, er , ec);
         downway +=  maza ( cr +1 ,cc ,er , ec );
    }
    int totalway = rightway + downway;
    return totalway;
}

int main(){
    int n;   // no of row 
    printf(" enter no a row of the maza  :");
    scanf("%d",&n);
    int m;
    printf(" enter no of coloum of the maza :");
    scanf(" %d",&m);
    int noofway  = maza ( 1,2,n,m);
    printf("  the number of way : %d",noofway);
    return 0;
}
