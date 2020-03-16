#include<stdio.h>
#include<stdlib.h>


void para_ver( int ana_para)
{



  //int ana_para;
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,n=0,x=0,y=0,kalan=0;
  int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,m1=0,n1=0,x1=0,y1=0;


  if(ana_para>=200)
  {
    a=ana_para/200;
    a1=ana_para%200;
  }

   if(a1>=100 || ana_para>=100)
  {
      b=a1/100;
      b1=a1%100;



  }
   if(b1>=50 || a1>=50 || ana_para>=50 )
  {
      c=b1/50;
      c1=b1%50;

  }
   if(c1>=20 || b1>=20 || a1>=20 || ana_para>=20)
  {
      d=c1/20;
      d1=c1%20;
  }
   if(d1>=10 || c1>=10 || b1>=10 || a1>=10 || ana_para>=10)
  {
        e=d1/10;
        e1=d1%10;
  }
   if(e1>=5 || d1>=5 || c1>=5 || b1>=5 || a1>=5|| ana_para>=5)
   {
     f=e1/5;
     f1=e1%5;

   }
  if(f1>=1 || e1>=1 || d1>=1 || c1>=1 || b1>=1 || ana_para>=1 || a1>=1)
  {
      g=f1/1;
      g1=f1%1;
  }




  printf("%d Anapara \n",ana_para);
  printf("200 luk banklot=%d\n",a);
  printf("100 luk banklot=%d\n",b);
  printf("50 lik banklot=%d\n",c);
  printf("20 lik banklot=%d\n",d);
  printf("10 luk banklot=%d\n",e);
  printf("5 lik banklot=%d\n",f);
  printf("1 lik banklot=%d\n",g);
  printf("0.5 lik banklot=%d\n",h);
  printf("0.25 lik banklot=%d\n",m);
  printf("0.1 lik banklot=%d\n",n);
  printf("0.05 lik banklot=%d\n",x);
  printf("0.01 lik banklot=%d\n",y);
}



int main()
{
    int engellilik_yuzdesi=0;
    int cocuk_sayisi=0;
    int cocuk_kucuk=0;
    int cocuk_buyuk=0;
    float brut_ucreti=1777.50;
    float vergi[20];
    float maas[20];
    double TC_isci=0;
    char medeni_durum;
    char engellilik_durum;
    char es_calismadurumu;
    char secim;
    char isci_adi[100];
    char isci_soyadi[100];
    int sayac=1,i,toplam_maas=0,toplam_vergi=0;
    float vergi_maas;

    anamenu:
    printf("TC kimlik numarinizi giriniz:"); scanf("%lf" ,&TC_isci);
    printf("Adinizi  giriniz:"); scanf("%s" ,&isci_adi);
    printf("Soyadini giriniz:"); scanf("%s",&isci_soyadi);
    yanlis:
    printf("Medini durumunuz nedir(E/e veya H/h):"); scanf("%s",&medeni_durum);
    if(medeni_durum=='e' || medeni_durum=='E')
    {
        escalismadurumu:
        printf("Esiniz calisiyor mu?(E/e veya H/h):"); scanf("%s",&es_calismadurumu);
        if(es_calismadurumu=='H' || es_calismadurumu=='h')
        {
            brut_ucreti=brut_ucreti+220;
        }
        else if(es_calismadurumu=='E' || es_calismadurumu=='e' )
        {
            brut_ucreti=brut_ucreti;
        }
        else
        {
            printf("lutfen duzgun harf giriniz:\n");
            goto escalismadurumu;
        }
    }
    else if(medeni_durum=='H'|| medeni_durum=='h')
    {
        brut_ucreti=brut_ucreti;

    }
    else
    {
        printf("Lutfen duzugun harf giriniz:\n");
        goto yanlis;
    }
    printf("Bakmakla yukumlu cocuk sayisini giriniz:"); scanf("%d",&cocuk_sayisi);
    if(cocuk_sayisi!=0)
        {
            printf("6 yasindan buyuk alanlarin sayisini giriniz:"); scanf("%d",&cocuk_buyuk);
            printf("6 ve 6 yasindan kucuk olanalrin sayisini giriniz:"); scanf("%d",&cocuk_kucuk);
            brut_ucreti=(cocuk_kucuk*25)+brut_ucreti;
            brut_ucreti=(cocuk_buyuk*45)+brut_ucreti;
        }
        for(i=0;i<7;i++)
        {
            maas[i]=brut_ucreti;
        }


        if(brut_ucreti<2000)
        {
            for(i=0;i<7;i++)
            {
                vergi[i]=brut_ucreti*0.15;
            brut_ucreti=brut_ucreti-vergi[i];
            }



        }
        else if(brut_ucreti<=2000 || brut_ucreti<5000)
        {
             for(i=0;i<7;i++)
            {
                vergi[i]=brut_ucreti*0.2;
            brut_ucreti=brut_ucreti-vergi[i];
            }
        }
        else if(brut_ucreti<=5000 || brut_ucreti<10000)
        {
              for(i=0;i<7;i++)
            {
                vergi[i]=brut_ucreti*0.27;
            brut_ucreti=brut_ucreti-vergi[i];
            }
        }
        else if(brut_ucreti>=10000)
        {
              for(i=0;i<7;i++)
            {
                vergi[i]=brut_ucreti*0.35;
            brut_ucreti=brut_ucreti-vergi[i];
            }
        }
        engeldurum:
             for(i=0;i<7;i++)
            {
               maas[i]=brut_ucreti;
            }

    printf("Engelli durumunuz var mi?(E/e veya H/h)"); scanf("%s",&engellilik_durum);
    if(engellilik_durum=='E' || engellilik_durum=='e')
    {
        printf("Engellik yuzdesini giriniz:"); scanf("%d",&engellilik_yuzdesi);
        if(40<=engellilik_yuzdesi && engellilik_yuzdesi<60)
        {
          brut_ucreti=brut_ucreti+210;
        }

        else if(60<=engellilik_yuzdesi && engellilik_yuzdesi<80)
        {
            brut_ucreti=brut_ucreti+470;
        }
        else if(80<=engellilik_yuzdesi  && engellilik_yuzdesi<=100)
            brut_ucreti=brut_ucreti+900; // bu kod calýsmýyor sor*******************************************

        else
        {
            brut_ucreti=brut_ucreti;
        }
    }
    else if(engellilik_durum=='H'|| engellilik_durum=='h')
    {
        brut_ucreti=brut_ucreti;
    }
    else
    {
        printf("Lutfen duzgun harf giriniz:\n");
        goto engeldurum;
    }
    printf("TC:%0.lf\n",TC_isci);
    printf("%s %s \n",isci_adi,isci_soyadi);
    printf("Cocuk icin odenecek tutar:%d\n",(cocuk_buyuk*45)+(cocuk_kucuk*25));
    if(es_calismadurumu=='h' || es_calismadurumu=='H')
    {
        printf("Esi icin odencek tutar:%d\n",220);
       // printf("Aylik toplam brut ucreti:%.2f\n",brut_ucreti);// look at me*****************************
    }
    else
    {
        printf("Esi icin odencek tutar:%d\n",0);
        //printf("Aylik toplam brut ucreti:%.2f\n",brut_ucreti);
    }

 for(i=0;i<7;i++)
    {
        toplam_maas+=maas[i];
        toplam_vergi=vergi[i];
        vergi_maas=maas[i]+vergi[i];

    }
    printf("Gelir vergisi kesintisi:%.2f\n",vergi);
    printf("Toplam Ucret=%.2f\n",vergi_maas);/*****************/


 if(40<=engellilik_yuzdesi && engellilik_yuzdesi<60)
        {
          printf("Engellilik derecesi:%d.\n",3);
        }
        else if(60<=engellilik_yuzdesi && engellilik_yuzdesi<80)
        {
             printf("Engellilik derecesi:%d.\n",2);
        }
        else if(80<=engellilik_yuzdesi  && engellilik_yuzdesi<=100)
        {
             printf("Engellilik derecesi:%d.\n",1);
        }
        else
        {
            printf("Engellik dercesi yoktur:\n");
        }
          printf("Aylik NET ucreti:%.2f\n",brut_ucreti);

          para_ver(brut_ucreti);

          printf("Baska calisan var mi?(E/e veya H/h):"); scanf("%s",&secim);
          if(secim=='E' || secim=='e')
          {
              goto anamenu;
              sayac++;
          }
          else
          {
              //printf("Toplam Maas=%.2f",);
              //printf("Toplam Vergi=%.2f",);
              exit(1);

          }



}
