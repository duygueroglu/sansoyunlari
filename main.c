#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int ilkmenu, secim, randint, p, r;
   int odul1=0, odul2=0, odul3=0, odul4=0;
   int totalodul=0;
   char cks;
   enbas:
   printf("\n -__-__-__- ANA MENU-__-__-__- \n1. Sans Oyunlari\n2. Cikis\n");
   scanf("%d",&ilkmenu);
   switch(ilkmenu){
   case 1:
       sansoyunlari:
       printf("^^^^SANS OYUNLARI ALT MENUSU^^^^\n1. Sayisal Loto\n2. Sans Topu\n3. On Numara\n4. Super Loto\n5. Ana Menu\n\n");
       printf(" Toplam puaniniz: %d\n",totalodul);
       printf("Lutfen seciminizi giriniz: ");
       scanf("%d",&secim);
     switch(secim){
     case 1:
      sayisal:
             printf("\nSayisal Loto Bolumu:\n");
             printf("Lutfen 1-49 arasi 6 sayi giriniz\n");
             int dizia[6],x,y,temp;
             sayisalgiris:
             for(x=0; x<6; x++){
                 printf(" %d. sayiyi giriniz:", x+1);
                 scanf("%d",&dizia[x]); }
           for(p=0; p<6; p++){
            if (dizia[p]<=0 || dizia[p]>=50) {printf("Lutfen 1-49 arasi deger giriniz\n"); goto sayisalgiris;}}
           for(p=0; p<6; p++){
           for(r=0; r<6; r++){
            if(dizia[p]==dizia[r]){
                if(p==r){ break; }
                else if(dizia[p]==dizia[r]){printf("Lutfen birbirinden farklý sayilar giriniz.\n"); goto sayisalgiris;}
               }}}
          for(x=0; x<5; x++){
            for(y=0; y<5-x; y++){
            if(dizia[y]>dizia[y+1]){
                temp=dizia[y];
                dizia[y]=dizia[y+1];
                dizia[y+1]=temp;
           }}}
         for(x=0; x<6; x++) {printf(" %d ",dizia[x]);}
         printf("\n Secimleriniz siralandi.\n ");

         int dizib[6];
         printf("Lotoda cikan numaralar: ");
         srand(time(NULL));
         for(x=0; x<6; x++){
            randint=1+rand()%49;
            dizib[x]=randint;}
         for(x=0; x<5; x++){
            for(y=0; y<5-x; y++){
            if(dizib[y]>dizib[y+1]){
                temp=dizib[y];
                dizib[y]=dizib[y+1];
                dizib[y+1]=temp;
            }}}
         for(x=0; x<6; x++){
            printf(" %d ",dizib[x]);}
        for(x=0; x<6; x++){
         for(y=0; y<6; y++){
            if(dizia[x]==dizib[y]) odul1+=1;}}
           printf("\n %d sayi tutturdunuz.\n",odul1);
           switch(odul1){
           case 0:
           case 1:
           case 2: printf(" Malesef puan alamadiniz"); break;
           case 3: totalodul+=32; printf("Aldiginiz puan 32 dir"); break;
           case 4: totalodul+=64; printf("Aldiginiz puan 64 dir"); break;
           case 5: totalodul+=128; printf("Aldiginiz puan 128 dir"); break;
           case 6: totalodul+=256; printf("Aldiginiz puan 256 dir"); break; }
        printf("\n Toplam puaniniz: %d\n",totalodul);
         odul1=0;
         printf("Tekrar sayisal loto oynamak icin E/e ye, cikmak icin H/h tusuna basiniz: ");
         sayisalcks:
         scanf("%s",&cks);
         switch(cks){
          case 'e':
          case 'E':goto sayisal; break;
          case 'h':
          case 'H':goto enbas ; break;
          default: printf("Lutfen E/e yada H/h harflerini giriniz.\n"); goto sayisalcks; }

     case 2:
        sanstopu:
         printf("\nSans Topu Bolumu:\n");
         printf("Lutfen 1-34 arasi 5 sayi giriniz:\n");
         int dizic[5],snstp,randomsans;
          sanstopugiris:
          for(x=0; x<5; x++){
            printf(" %d.sayiyi giriniz:",x+1);
            scanf("%d",&dizic[x]);}
           for(p=0; p<5; p++){
            if (dizic[p]<=0 || dizic[p]>=35) {printf("Lutfen 1-35 arasi deger giriniz\n"); goto sanstopugiris;}
            }
           for(p=0; p<5; p++){
           for(r=0; r<5; r++){
            if(dizic[p]==dizic[r]){
                if(p==r){ break; }
                else if(dizic[p]==dizic[r]){printf("Lutfen birbirinden farklý sayilar giriniz.\n"); goto sanstopugiris;}
               }}}
          sanstopugiris2:
          printf("1-14 arasi 1 tane sayi giriniz: ");
          scanf("%d",&snstp);
          if(snstp<=0 || snstp>=15) {printf("Lutfen 1-14 arasi bir sayi giriniz\n"); goto sanstopugiris2;}
         for(x=0; x<4; x++){
         for(y=0; y<4-x; y++){
          if(dizic[y]>dizic[y+1]){
            temp=dizic[y];
            dizic[y]=dizic[y+1];
            dizic[y+1]=temp;
            }}}
         for(x=0; x<5; x++){
            printf(" %d ",dizic[x]);}
      printf("\n Secimleriniz siralandi.\n");

     int dizid[5];
     printf("Sans topunda cikan numaralar: ");
     srand(time(NULL));
     for(x=0; x<5; x++){
        randint=1+rand()%34;
        dizid[x]=randint;}
     for(x=0; x<4; x++){
        for(y=0; y<4-x; y++){
        if(dizid[y]>dizid[y+1]){
          temp=dizid[y];
          dizid[y]=dizid[y+1];
          dizid[y+1]=temp;
         }}}
     for(x=0; x<5; x++){
      printf(" %d ",dizid[x]);}

     srand(time(NULL));
     randomsans=1+rand()%14;
     printf("\n1-14 arasi cikan sayi: %d ",randomsans);

      for(x=0; x<5; x++){
        for(y=0; y<5; y++){
         if(dizid[x]==dizic[y]) odul2+=1;
        }}
      printf("\n1 ile 34 arasinda %d sayi tutturdunuz.",odul2);
      if (randomsans==snstp) {printf("1-14 arasindaki sayiyi tutturdunuz.");}
      else if (randomsans!=snstp) {printf("1-14 arasindaki sayiyi tutturamadiniz.");}
      switch(odul2){
            case 0: printf("\nMalesef puan alamadiniz\n"); break;
            case 1: if(randomsans==snstp) {totalodul+=2; printf("\nAldiginiz puan 2");}
                    else if(randomsans!=snstp) printf("\nMalesef puan alamadiniz\n"); break;
            case 2: if(randomsans==snstp) {totalodul+=4; printf("\nAldiginiz puan 4");}
                    else if(randomsans!=snstp) printf("\nMalesef puan alamadiniz\n"); break;
            case 3: if(randomsans==snstp) {totalodul+=16; printf("\nAldiginiz puan 16");}
                    else if(randomsans!=snstp) totalodul+=8; printf("\nAldiginiz puan 8"); break;
            case 4: if(randomsans==snstp) {totalodul+=64; printf("\nAldiginiz puan 64");}
                    else if(randomsans!=snstp) totalodul+=32; printf("\nAldiginiz puan 32"); break;
            case 5: if(randomsans==snstp) {totalodul+=256; printf("\nAldiginiz puan 256");}
                    else if(randomsans!=snstp) totalodul+=128; printf("\nAldiginiz puan 128"); break; }
      printf("\n Toplam puaniniz:%d \n",totalodul);
      odul2=0;
      printf("Tekrar sans topu oynamak icin E/e ye, cikmak icin H/h tusuna basiniz: \n");
          sanstopucks:
          scanf("%s",&cks);
          switch(cks){
          case 'e':
          case 'E':goto sanstopu ; break;
          case 'h':
          case 'H':goto enbas; break;
          default: printf("Lutfen E/e yada H/h harfi giriniz.\n"); goto sanstopucks; }
       break;

     case 3:
        onnumara:
         printf("\nOn Numara Bolumu:\n");
         printf("Lutfen 1-80 arasi 10 sayi giriniz:\n");
         int dizie[10];
         onnumaragiris:
         for(x=0; x<10; x++){
            printf(" %d.sayiyi giriniz:",x+1);
            scanf("%d",&dizie[x]); }
          for(p=0; p<10; p++){
            if (dizie[p]<=0 || dizie[p]>=81) {printf("Lutfen 1-80 arasi deger giriniz\n"); goto onnumaragiris;}}
           for(p=0; p<10; p++){
           for(r=0; r<10; r++){
            if(dizie[p]==dizie[r]){
                if(p==r){ break; }
                else if(dizie[p]==dizie[r]){printf("Lutfen birbirinden farklý sayilar giriniz.\n"); goto onnumaragiris;}
               }}}
         for(x=0; x<9; x++){
            for(y=0; y<9-x; y++){
             if(dizie[y]>dizie[y+1]){
                temp=dizie[y];
                dizie[y]=dizie[y+1];
                dizie[y+1]=temp;
             }}}
          for(x=0; x<10; x++){
            printf(" %d ",dizie[x]);}

          printf("\n Secimleriniz siralandi.\n");
          int dizif[10];
          printf("On numarada cikan sayilar: \n");
          srand(time(NULL));
          for(x=0; x<10; x++){
            randint=1+rand()%80;
            dizif[x]=randint;}
         for(x=0; x<9; x++){
         for(y=0; y<9-x; y++){
          if(dizif[y]>dizif[y+1]){
            temp=dizif[y];
            dizif[y]=dizif[y+1];
            dizif[y+1]=temp;
          }}}
         for (x=0; x<10; x++){
            printf(" %d ",dizif[x]);}
         for(x=0; x<10; x++){
          for(y=0; y<10; y++){
            if(dizie[x]==dizif[y]) odul3+=1;
          }}
         printf("\n %d sayi tutturdunuz.\n",odul3);
         switch(odul3){
             case 0: totalodul+=8; printf("Aldiginiz puan 8 dir"); break;
             case 1:
             case 2:
             case 3:
             case 4:
             case 5: printf("Puan alamadiniz"); break;
             case 6: totalodul+=16; printf("Aldiginiz puan 16 dir"); break;
             case 7: totalodul+=32; printf("Aldiginiz puan 32 dir"); break;
             case 8: totalodul+=64; printf("Aldiginiz puan 64 dir"); break;
             case 9: totalodul+=128; printf("Aldiginiz puan 128 dir"); break;
             case 10: totalodul+=256; printf("Aldiginiz puan 256 dir"); break; }
          printf("\n Toplam puaniniz:%d \n",totalodul);
          odul3=0;
          printf("Tekrar on numara oynamak icin E/e ye, cikmak icin H/h tusuna basiniz: \n");
          onnumaracks:
          scanf("%s",&cks);
          switch(cks){
          case 'e':
          case 'E':goto onnumara; break;
          case 'h':
          case 'H':goto enbas; break;
          default: printf("Lutfen E/e yada H/h harfi giriniz.\n"); goto onnumaracks; }
       break;

     case 4:
        superloto:
         printf("\nSuper Loto Bolumu:\n");
         printf("Lutfen 1-54 arasi 6 sayi giriniz:\n");
         int dizig[6];
         superlotogiris:
         for(x=0; x<6; x++){
            printf(" %d. sayiyi giriniz: ",x+1);
            scanf("%d",&dizig[x]); }
          for(p=0; p<6; p++){
            if (dizig[p]<=0 || dizig[p]>=55) {printf("Lutfen 1-54 arasi deger giriniz\n"); goto superlotogiris;
            }}
           for(p=0; p<6; p++){
           for(r=0; r<6; r++){
            if(dizig[p]==dizig[r]){
                if(p==r){ break; }
                else if(dizig[p]==dizig[r]){printf("Lutfen birbirinden farklý sayilar giriniz.\n"); goto superlotogiris;}
               }}}
         for(x=0; x<5; x++){
           for(y=0; y<5-x; y++){
            if(dizig[y]>dizig[y+1]){
                temp=dizig[y];
                dizig[y]=dizig[y+1];
                dizig[y+1]=temp;
            }}}
            for(x=0; x<6; x++){
                printf(" %d ",dizig[x]);}

         printf("\n Secimleriniz siralandi.\n");
          int dizih[6];
          printf("\n Super Lotoda Cikan Sayilar\n");
          srand(time(NULL));
          for(x=0; x<6; x++){
            randint=1+rand()%54;
            dizih[x]=randint;}
         for(x=0; x<5; x++){
         for(y=0; y<5-x; y++){
            if(dizih[y]>dizih[y+1]){
                temp=dizih[y];
                dizih[y]=dizih[y+1];
                dizih[y+1]=temp;
            }}}
            for(x=0; x<6; x++){
                printf(" %d ",dizih[x]); }
            for(x=0; x<6; x++){
              for(y=0; y<6; y++){
                if(dizig[x]==dizih[y]) odul4+=1;
              }}
            printf("\n %d tane sayi tutturdunuz.\n",odul4);
            switch(odul4){
         case 0:
         case 1:
         case 2: printf("Malesef puan alamadiniz"); break;
         case 3: totalodul+=32; printf("Aldiginiz puan 32"); break;
         case 4: totalodul+=64; printf("Aldiginiz puan 64"); break;
         case 5: totalodul+=128; printf("Aldiginiz puan 128"); break;
         case 6: totalodul+=256; printf("Aldiginiz puan 256"); break; }
          printf("\n Toplam puaniniz:%d \n",totalodul);
          odul4=0;
          printf("Tekrar super loto oynamak icin E/e ye, cikmak icin H/h tusuna basiniz: \n");
          superlotocks:
          scanf("%s",&cks);
          switch(cks){
          case 'e':
          case 'E':goto superloto; break;
          case 'h':
          case 'H':goto enbas; break;
          default: printf("Lutfen E/e yada H/h harfi giriniz.\n"); goto superlotocks; }
       break;
      case 5: goto enbas; break;
      default: printf("Lutfen 1-5 arasi deger giriniz\n"); goto sansoyunlari;
    }


   case 2: printf("Cikmak icin E/e kalmak icin H/h ye basiniz: \n");
          cks:
          scanf("%s",&cks);
          switch(cks)
          {
          case 'e':
          case 'E': printf("Basarili bir sekilde cikis yaptiniz.."); break;
          case 'h':
          case 'H': printf("Kaldiginiz yerden devam ediyorsunuz.."); goto enbas; break;
          default: printf("E/e veya H/h giriniz...\n"); goto cks;
            }
       break;
    default: printf("Lutfen 1 veya 2 degerini giriniz:"); goto enbas;
   }
    return 0;
}
