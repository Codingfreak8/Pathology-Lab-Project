// This Project is solely and completly made by Me(Umesh)
//This is the code for the project 

#include<fstream.h>
#include<time.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int xx=0,u,v,qt=0,j[50],r=0,result[50],result2[50],jj=0,gg=0,ee=0,ff=0;
class diseases
{
 private:
 char name[50];
 float values[50];
 int age,i;
 int height;
 int weight;
 char sex;
 char s[20];
 public:
 int pat_id;
 void welcome_screen();
 void getvalue();
 void symptoms();
 void tests();
 int analyse_symptoms();
 void symptoms2();
 void showreport();
 void showreport2();
 void showreport3();
 int analyse2();
 diseases()
 {
  unsigned int seedpat_id;
  time_t x;
  seedpat_id=(unsigned)time(&x);
  srand(seedpat_id);
  pat_id=(rand()%100)+11;
 }
 char *retrname()
 {
 return name;
 }
};

class diseases2
{
 char name[50];
 int age,g;
 int height;
 int weight;
 char sex;
 int values2[50];
 char sym[50];
 char t[50];
 public:
 int pat_id2;
 void getsymptoms();
 void getvalue2();
 void tests2();
 void showr();
 void showr2();
 void showr3();
 diseases2()
 {
  unsigned int seedpat_id;
  time_t x;
  seedpat_id=(unsigned)time(&x);
  srand(seedpat_id);
  pat_id2=(rand()%100)+11;
 }
 char *retrname()
 {
 return name;
 }
};
void diseases::welcome_screen()
{
 clrscr();
 gotoxy(20,7);
 textcolor(YELLOW);
 cputs("******** W E L C O M E ******** " );
 gotoxy(16,9);
 cputs(" D E W A N    P U B L I C   S C H O O L " );
 gotoxy(9,12);
 cputs(" M E D I C A L    D I A G N O S I S    S O F T W A R E ");
 textcolor(GREEN+BLINK);
 //for(int x=50;x>=22;x--)
  {
   gotoxy(38,16);
   cputs("D O N E B Y : ");
   gotoxy(38,18);
   cputs("U M E S H");
   gotoxy(43,18);
  }
 for(int i=2;i>=0;i--)
 {
 gotoxy(56,21);
 cputs("LOADING ");
 cout<<i;
 textcolor(GREEN+BLINK);
 cputs(" ...");
 delay(1000);
 }
}

void diseases::getvalue()
{
 clrscr();
 textcolor(GREEN);
 gotoxy(20,2);
 cputs(" P E R S O N A L   I N F O R M A T I O N");
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,3);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(25,10);
 cputs("N A M E :");
 gotoxy(25,12);
 cputs("A G E :");
 gotoxy(25,14);
 cputs("W E I G H T :");
 gotoxy(25,16);
 cputs("H E I G H T :");
 gotoxy(25,18);
 cputs("S E X (M/F) :");
 textcolor(YELLOW);
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 gotoxy(42,10);
 gets(name);
 gotoxy(42,12);
 cin>>age;
 gotoxy(42,14);
 cin>>weight;
 gotoxy(42,16);
 cin>>height;
 gotoxy(42,18);
 cin>>sex;
 getch();
}

void diseases::symptoms()
{
 clrscr();
 i=0;
 gotoxy(23,3);
 textcolor(GREEN);
 cputs( " *** MEDICAL DIAGONOSIS FORM *** ");
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
  for( yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy( 3,6);
 cputs("APPETITE (H(HIGH),/N(NORMAL):") ;
 gotoxy(64,6);
 cin>>s[i];
 s[i]=toupper(s[i]);
 ++i;
 gotoxy(3,8);
 cputs("FREQUENCY OF THIRST (H(HIGH),/N(NORMAL):");
 gotoxy(64,8);
 cin>>s[i];
 s[i]=toupper(s[i]);
 ++i;
 gotoxy(3,10);
 cputs("FREQUENCY OF URINATION H(HIGH),/N(NORMAL):");
 gotoxy(64,10);
 cin>>s[i];
 s[i]=toupper(s[i]);
 ++i;
 gotoxy(3,12);
 cputs("VISION (I(IMPAIRMENT),/N(NORMAL):");
 gotoxy(64,12);
 cin>>s[i];
 s[i]=toupper(s[i]);
 ++i;
 gotoxy(3,14);
 cputs("FAMILY HISTORY OF DIABETES (P(PASSIVE)/A(ACTIVE):");
 gotoxy(64,14);
 cin>>s[i];
 s[i]=toupper(s[i]);
 getch();
}
void diseases::tests()
{
 u=0;
 unsigned int seedpat_id,seedpat,seedpatid,seedid;
 time_t x,y,z,xx;
 seedpat_id=(unsigned)time(&x);
 srand(seedpat_id);
 values[u]=(rand()%4)+1;
 u++;
 seedpat=(unsigned)time(&y);
 srand(seedpat);
 values[u]=(rand()%144)+90;
 u++;
 seedpatid=(unsigned)time(&z);
 srand(seedpatid);
 values[u]=(rand()%215)+80;
 u++;
 seedid=(unsigned)time(&xx);
 srand(seedid);
 values[u]=(rand()%220)+60;
}
void diseases::showreport()
{
 clrscr();
 gotoxy(23,3);
 textcolor(GREEN);
 cputs( " *** MEDICAL REPORT OF PAITIENT *** ");
  for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(25,7);
 cputs("N A M E :");
 cout<<'\t'<<'\t';
 puts(name);
 gotoxy(25,8);
 cputs("A G E :");
 cout<<'\t'<<'\t'<<'\t';
 cout<<age;
 gotoxy(25,9);
 cputs("W E I G H T :");
 cout<<'\t'<<'\t';
 cout<<weight;
 gotoxy(25,10);
 cputs("H E I G H T :");
 cout<<'\t'<<'\t';
 cout<<height;
 gotoxy(25,11);
 cputs("S E X (M/F) :");
 cout<<'\t'<<'\t';
 cout<<sex;
}
void diseases::showreport2()
{
 int a=0;
 gotoxy( 3,12);
 cputs("APPETITE (H(HIGH),/N(NORMAL) ::") ;
 if(s[a]=='H')
 {
  gotoxy(54,12);
  cputs("High");
 }
 if(s[a]=='N')
 {
  gotoxy(54,12);
  cputs("Normal");
 }
 a++;
 gotoxy(3,13);
 cputs("FREQUENCY OF THIRST (H(HIGH),/N(NORMAL):");
 if(s[a]=='H')
 {
  gotoxy(54,13);
  cputs("High");
 }
 if(s[a]=='N')
 {
  gotoxy(54,13);
  cputs("Normal");
 }
 a++;
 gotoxy(3,14);
 cputs("FREQUENCY OF URINATION(H(HIGH),/N(NORMAL):");
 if(s[a]=='H')
 {
 gotoxy(54,14);
 cputs("High");
 }
 if(s[a]=='N')
 {
 gotoxy(54,14);
 cputs("Normal");
 }
 a++;
 gotoxy(3,15);
 cputs("VISION (I(IMPAIRMENT),/N(NORMAL)");
 if(s[a]=='I')
 {
  gotoxy(54,15);
  cputs("Impairment");
 }
 if(s[a]=='N')
 {
  gotoxy(54,15);
  cputs("Normal");
 }
 a++;
 gotoxy(3,16);
 cputs("FAMILY HISTORY OF DIABETES(P(PASSIVE)/A(ACTIVE)");
 if(s[a]=='P')
 {
 gotoxy(54,16);
 cputs("Passive");
 }
 if(s[a]=='A')
 {
 gotoxy(54,16);
 cputs("Active");
 }
 a++;
 int t=0;
 gotoxy(3,17);
 cputs("KETONUREA");    //<2 n,2-3 m,>3 h m mmol/l
 gotoxy(54,17);
 cout<<values[t];
 cputs(" mmol/l");
 if(values[t]<2)
 {
  gotoxy(65,17);
  cputs("NORMAL");
 }
 else if(values[t]>=2 && values[t]<3)
 {
  gotoxy(65,17);
  cputs("MODERATELY HIGH");
 }
 else
 {
  gotoxy(65,17);
  cputs("HIGH");
 }
 t++;
 gotoxy(3,18);
 cputs("FASTING BLOOD SUGAR"); //<100 n,100< <126 prediabetes,>126 diabetes mg/dl
 gotoxy(54,18);
 cout<<values[t];
 cputs(" mg/dl");
 if(values[t]<100)
 {
  gotoxy(65,18);
  cputs("NORMAL");
 }
 else if(values[t]>=100 && values[t]<126)
 {
  gotoxy(65,18);
  cputs("MODERATELY HIGH");
 }
 else
 {
  gotoxy(65,18);
  cputs("HIGH");
 }
 t++;
 gotoxy(3,19);
 cputs("R B S (H(HIGH),/N(NORMAL)");  //79-160 n,160-200, pre,>200 diab mg/dl
 gotoxy(54,19);
 cout<<values[t];
 cputs(" mg/dl");
 if(values[t]<160)
 {
  gotoxy(65,19);
  cputs("NORMAL");
 }
 else if(values[t]>=160 && values[t]<200)
 {
  gotoxy(65,19);
  cputs("MODERATELY HIGH");
 }
 else
 {
  gotoxy(65,19);
  cputs("HIGH");
 }
 t++;
 gotoxy(3,20);
 cputs("OGTT(D/N)");  // 60-100 n,140-200 pre,>200 dia mg/dl
 gotoxy(54,20);
 cout<<values[t];
 cputs(" mg/dl");
 if(values[t]<100)
 {
  gotoxy(65,20);
  cputs("NORMAL");
 }
 else if(values[t]>=100 && values[t]<200)
 {
  gotoxy(65,20);
  cputs("MODERATELY HIGH");
 }
 else
 {
  gotoxy(65,20);
  cputs("HIGH");
 }
 t++;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
}
void diseases::showreport3()
{
 int q=0;gg=0,ee=0,ff=0,jj=0;
 for(int d=0;d<i;d++)
 {
  s[d]=toupper(s[d]);
  if(s[d]=='H'||s[d]=='P'||s[d]=='I')
  {
  ff++;
  }
 }
 if(values[q]>=2 && values[q]<3)
 {
  jj++;
 }
 else if(values[q]>=3)
 {
  gg++;
 }
 else
 {
  ee++;
 }
 q++;
 if(values[q]>=100 && values[q]<126)
 {
  jj++;
 }
 else if(values[q]>=126)
 {
  gg++;
 }
 else
 {
  ee++;
 }
 q++;
 if(values[q]>=160 && values[q]<200)
 {
  jj++;
 }
 else if(values[q]>=200)
 {
  gg++;
 }
 else
 {
  ee++;
 }
 q++;
 if(values[q]>=100 && values[q]<200)
 {
  jj++;
 }
 else if(values[q]>=200)
 {
  gg++;
 }
 else
 {
  ee++;
 }
 if(gg>=2)
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cputs(" The person is diabitic!!");
 }
 else if(gg<2 && jj>=2)
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cputs(" The person is prediabitic!!");
 }
 else if(jj<2 && ff>=3)
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cputs(" The person is prediabitic!!");
 }
 else
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cout<<" The person is not diabitic!!";
 }
}

void diseases2::getvalue2()
{
 clrscr();
 textcolor(GREEN);
 gotoxy(20,3);
 cputs(" P E R S O N A L   I N F O R M A T I O N");
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(25,10);
 cputs("N A M E :");
 gotoxy(25,12);
 cputs("A G E :");
 gotoxy(25,14);
 cputs("W E I G H T :");
 gotoxy(25,16);
 cputs("H E I G H T :");
 gotoxy(25,18);
 cputs("S E X (M/F) :");
 for( yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(42,10);
 gets(name);
 gotoxy(42,12);
 cin>>age;
 gotoxy(42,14);
 cin>>weight;
 gotoxy(42,16);
 cin>>height;
 gotoxy(42,18);
 cin>>sex;
 getch();
}

void diseases2::getsymptoms()//headache,vomiting,diarrhea,high fever,pani in
{                            //muscles
 clrscr();
 g=0;
 gotoxy(23,3);
 textcolor(WHITE);
 cputs( " *** MEDICAL DIAGONOSIS FORM *** ");
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
  for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy( 3,6);
 cputs("HEADACHE (Y(YES),/N(NO):") ;
 gotoxy(64,6);
 cin>>t[g];
 t[g]=toupper(t[g]);
 ++g;
 gotoxy(3,8);
 cputs("VOMITING (Y(YES),/N(NO):");
 gotoxy(64,8);
 cin>>t[g];
 t[g]=toupper(t[g]);
 ++g;
 gotoxy(3,10);
 cputs("DIARRHEA Y(YES),/N(NO):");
 gotoxy(64,10);
 cin>>t[g];
 t[g]=toupper(t[g]);
 ++g;
 gotoxy(3,12);
 cputs("HIGH FEVER (Y(YES),/N(NO):");
 gotoxy(64,12);
 cin>>t[g];
 t[g]=toupper(t[g]);
 ++g;			     //tests:thick and thin blood smears,
 gotoxy(3,14);
 cputs("PAIN IN MUSCLES (Y(YES),/N(NO):");
 gotoxy(64,14);
 cin>>t[g];
 t[g]=toupper(t[g]);     //rapid diagnostic test,molecular tests
}
void diseases2::tests2()
{
 v=0;
 int o=0;
 unsigned int seedpat_id,seedpat,seedpatid,seedid;
 time_t x,y,z;
 seedpat_id=(unsigned)time(&x);
 srand(seedpat_id);
 values2[o]=(rand()%10)+1;
 if(values2[o]<=5)
 {
  sym[v]='N';
 }
 else
 {
  sym[v]='Y';
 }
 o++;
 v++;
 seedpat=(unsigned)time(&y);
 srand(seedpat);
 values2[v]=(rand()%15)+5;
 if(values2[o]<=10)
 {
  sym[v]='N';
 }
 else
 {
  sym[v]='Y';
 }
 o++;
 v++;
 seedpatid=(unsigned)time(&z);
 srand(seedpatid);
 values2[v]=(rand()%20)+10;
 if(values2[o]<=15)
 {
  sym[v]='N';
 }
 else
 {
  sym[v]='Y';
 }
}

void diseases2::showr()
{
 clrscr();
 gotoxy(23,3);
 textcolor(YELLOW);
 cputs( " *** MEDICAL REPORT OF PAITIENT *** ");
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 textcolor(WHITE);
 gotoxy(25,7);
 cputs("N A M E :");
 cout<<'\t'<<'\t';
 puts(name);
 gotoxy(25,8);
 cputs("A G E :");
 cout<<'\t'<<'\t'<<'\t';
 cout<<age;
 gotoxy(25,9);
 cputs("W E I G H T :");
 cout<<'\t'<<'\t';
 cout<<weight;
 gotoxy(25,10);
 cputs("H E I G H T :");
 cout<<'\t'<<'\t';
 cout<<height;
 gotoxy(25,11);
 cputs("S E X (M/F) :");
 cout<<'\t'<<'\t';
 cout<<sex;
}

void diseases2::showr2()
{
 int a=0;
 gotoxy( 3,12);
 cputs("HEADACHE (Y(YES),/N(NO) ::") ;
 if(t[a]=='Y')
 {
  gotoxy(65,12);
  cputs("Yes");
 }
 if(t[a]=='N')
 {
  gotoxy(65,12);
  cputs("No");
 }
 a++;
 gotoxy(3,13);
 cputs("VOMITING (Y(YES),/N(NO):");
 if(t[a]=='Y')
 {
  gotoxy(65,13);
  cputs("Yes");
 }
 if(t[a]=='N')
 {
  gotoxy(65,13);
  cputs("No");
 }
 a++;
 gotoxy(3,14);
 cputs("DIARRHEA (Y(YES),/N(NO):");
 if(t[a]=='Y')
 {
 gotoxy(65,14);
 cputs("Yes");
 }
 if(t[a]=='N')
 {
 gotoxy(65,14);
 cputs("No");
 }
 a++;
 gotoxy(3,15);
 cputs("HIGH FEVER (Y(YES),/N(NO)");
 if(t[a]=='Y')
 {
  gotoxy(65,15);
  cputs("Yes");
 }
 if(t[a]=='N')
 {
  gotoxy(65,15);
  cputs("No");
 }
 a++;
 gotoxy(3,16);
 cputs("PAIN IN MUSCLES (Y(YES)/N(NO)");
 if(t[a]=='Y')
 {
 gotoxy(65,16);
 cputs("Yes");
 }
 if(t[a]=='N')
 {
 gotoxy(65,16);
 cputs("No");
 }
 a++;
 int t=0;
 gotoxy(3,17);
 cputs("THICK AND THIN BLOOD SMEARS");    //<2 n,2-3 m,>3 h m mmol/l
 gotoxy(65,17);
 if(sym[t]=='N')
 {
  gotoxy(65,17);
  cputs("NEGATIVE");
 }
 else if(sym[t]=='Y')
 {
  gotoxy(65,17);
  cputs("POSITUVE");
 }
 t++;
 gotoxy(3,18);
 cputs("RAPID DIAGNOSTIC TEST");
 gotoxy(54,18);
 if(sym[t]=='N')
 {
  gotoxy(65,18);
  cputs("NEGATIVE");
 }
 else if(sym[t]=='Y')
 {
  gotoxy(65,18);
  cputs("POSITIVE");
 }
 t++;
 gotoxy(3,19);
 cputs("MOLECULAR TESTS");
 gotoxy(54,19);
 if(sym[t]=='N')
 {
  gotoxy(65,19);
  cputs("NEGATIVE");
 }
 else if(sym[t]=='Y')
 {
  gotoxy(65,19);
  cputs("POSITIVE");
 }
 t++;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
}

void diseases2::showr3()
{
 ff=0,gg=0;
 for(int d=0;d<g;d++)
 {
  t[d]=toupper(t[d]);
  if(t[d]=='Y')
  {
  ff++;
  }
 }
 for(d=0;d<5;d++)
 {
  if(sym[d]=='Y')
   ff++;
  else
   gg++;
 }
 if(ff>=3)
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cputs(" The person is suffering from malaria!!");
 }
 else if(ff>=1 && ff<=2)
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cputs(" The person may be suffering from malaria!!");
 }
 else if(gg>4)
 {
  gotoxy(3,5);
  cputs("RESULT::");
  textcolor(GREEN);
  cputs(" The person is not suffering from malaria!!");
 }
}

void add()
{
 ofstream out("Project.dat",ios::binary|ios::app);
 diseases d;
 d.getvalue();
 d.symptoms();
 d.tests();
 out.write((char *)&d,sizeof(d));
 out.close();
 clrscr();
 ofstream txt("count.dat",ios::binary|ios::app);
 j[r]=0;
 j[r]++;
 txt<<j[r];
 txt.close();
 r++;
 int i,val;
 unsigned int seedval;
 time_t t;
 seedval=(unsigned)time(&t);
 srand(seedval);
 val=(rand()%35)+11;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(21,11);
 cout<<"Your patient id is==>"<<d.pat_id;
 gotoxy(21,12);
 cout<<"Your blood sample has been taken";
 gotoxy(21,13);
 cout<<"Kindly collect your report after "<<val<<" hours";
}

void add2()
{
 ofstream out("malaria.dat",ios::binary|ios::app);
 diseases2 d2;
 d2.getvalue2();
 d2.getsymptoms();
 d2.tests2();
 out.write((char *)&d2,sizeof(d2));
 out.close();
 clrscr();
 ofstream txt("count.dat",ios::binary|ios::app);
 j[r]=0;
 j[r]++;
 txt<<j[r];
 txt.close();
 r++;
 int i,val;
 unsigned int seedval;
 time_t t;
 seedval=(unsigned)time(&t);
 srand(seedval);
 val=(rand()%35)+11;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(21,11);
 cout<<"Your patient id is==>"<<d2.pat_id2;
 gotoxy(21,12);
 cout<<"Your blood sample has been taken";
 gotoxy(21,13);
 cout<<"Kindly collect your report after "<<val<<" hours";
}

void searchname()
{
 clrscr();
 ifstream in("Project.dat",ios::binary|ios::in);
 diseases d;
 char a[50];
 int ww,v=0;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,13);
 cout<<"Enter the name to be searched==>";
 gotoxy(45,13);
 gets(a);
 gotoxy(6,14);
 cout<<"Enter the patient id==>";
 gotoxy(45,14);
 cin>>ww;
 int found=0;
 while(in)
 {
  in.read((char *)&d,sizeof(d));
  if(in.eof())
   break;
   if(strcmpi(d.retrname(),a)==0 && ww==d.pat_id)
   {
     d.showreport();
     d.showreport2();
     d.showreport3();
     getch();
     ofstream on("admin.dat",ios::binary|ios::app);
     if(gg>=2)
     {
      result[v]=1;
      on<<result[v];
     }
     else if(gg<2 && jj>=2)
     {
      result[v]=2;
      on<<result[v];
     }
     else if(jj<2 && ff>=2)
     {
      result[v]=3;
      on<<result[v];
     }
     else
     {
      result[v]=4;
      on<<result[v];
     }
     on.close();
     textcolor(WHITE);
     found=1;
   }
 }
 if(found==0)
 {
  gotoxy(6,16);
  cputs("\n No record of patient to be searched found!!");
  delay(1500);
 }
 v++;
 in.close();
}

void searchname2()
{
 clrscr();
 ifstream in("malaria.dat",ios::binary|ios::in);
 diseases2 d2;
 char a[50];
 int ww,l=0;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,13);
 cout<<"Enter the name to be searched==>";
 gotoxy(45,13);
 gets(a);
 gotoxy(6,14);
 cout<<"Enter the patient id==>";
 gotoxy(45,14);
 cin>>ww;
 int found=0;
 while(in)
 {
  in.read((char *)&d2,sizeof(d2));
  if(in.eof())
   break;
   if(strcmpi(d2.retrname(),a)==0 && ww==d2.pat_id2)
   {
     d2.showr();
     d2.showr2();
     d2.showr3();
     getch();
     ofstream on("admin2.dat",ios::binary|ios::app);
      if(ff>=3)
      {
       result2[l]=1;
       on<<result2[l];
      }
      else if(ff>=1 && ff<=2)
      {
       result2[l]=2;
       on<<result2[l];
      }
      else if(gg>4)
      {
       result2[l]=3;
       on<<result2[l];
      }
     on.close();
     textcolor(WHITE);
     found=1;
   }
 }
 if(found==0)
 {
  gotoxy(6,16);
  cputs("\n No record of patient to be searched found!!");
  delay(1500);
 }
 l++;
 in.close();
}

void choice()
{
 clrscr();
 int d;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,8);
 cout<<"\Following are the diseases which can be tested";
 gotoxy(6,11);
 cout<<" 1. Diabetes ";
 gotoxy(6,12);
 cout<<" 2. Malaria ";
 cout<<"\n Enter the disease to be tested (1/2)..";
 cin>>d;
 switch(d)
 {
  case 1:  clrscr();
	   ifstream in("symptoms.txt",ios::in);
	   char line[100];
	   while(in.eof()==0)
	   {
	    in.getline(line,100,'\n');
	    cout<<line<<endl;
	   }
	   in.close();
	   for(int i=9;i>=0;i--)
	   {
	   gotoxy(6,20);
	   textcolor(GREEN+BLINK);
	   cputs("LOADING ");
	   cout<<i;
	   textcolor(GREEN+BLINK);
	   cputs(" ...");
	   delay(1000);
	   }
	   textcolor(WHITE);
	   add();
	   qt=1;
	   getch();
	   break;
  case 2:  clrscr();
	   ifstream in2("text.txt",ios::in);
	   char line2[100];
	   while(in2.eof()==0)
	   {
	    in2.getline(line2,100,'\n');
	    cout<<line2<<endl;
	   }
	   in2.close();
	   for(i=9;i>=0;i--)
	   {
	   gotoxy(6,20);
	   textcolor(GREEN+BLINK);
	   cputs("LOADING ");
	   cout<<i;
	   textcolor(GREEN+BLINK);
	   cputs(" ...");
	   delay(1000);
	   }
	   textcolor(WHITE);
	   add2();
	   qt=2;
	   getch();
	   break;
  default: gotoxy(6,18);
	   cputs("Invalid choice made");
	   delay(1000);
	   return;
 }
}
void count()
{
 clrscr();
 int sum=0,gg1=0,ff1=0,jj1=0;
 int gg2=0,ff2=0,jj2=0;
 float p1,p2,p3,h1,h2,h3;
 char c;
 ifstream in("count.dat",ios::binary|ios::in);
 while(in)
 {
  in.get(c);
  if(in.eof())
   break;
  int(c)=1;
  sum=sum+int(c);
 }
 in.close();
 ifstream in1("admin.dat",ios::binary|ios::in);
 char s;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,2);
  cputs("~");
 }
 textcolor(WHITE);
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,3);
 cout<<"The total number of patients in this weeek is==>";
 cout<<"  "<<sum;
 while(in1)
 {
  if(in1.eof())
   break;
  in1.get(s);
  if(int(s)==49)
   gg1++;
  else if(int(s)==50)
   ff1++;
  else if(int(s)==52)
   jj1++;
  else if(int(s)==51)
   ff1++;
 }
 in1.close();
 delay(1000);
 gotoxy(30,4);
 textcolor(GREEN);
 cputs("DIABETES");
 textcolor(WHITE);
 gotoxy(6,5);
 cout<<"The total number of diabitic patients in this weeek is==>";
 cout<<"  "<<gg1;
 gotoxy(6,6);
 cout<<"The total number of prediabitic patients in this weeek is==>";
 cout<<"  "<<ff1;
 gotoxy(6,7);
 cout<<"The total number ofnondiabitic patients in this weeek is==>";
 cout<<"  "<<jj1;
 p1=gg1*100;
 p1=p1/sum;
 p2=ff1*100;
 p2=p2/sum;
 p3=jj1*100;
 p3=p3/sum;
 delay(1000);
 gotoxy(6,9);
 cout<<"Percentage of diabitic patients in this weeek is==>";
 cout<<"  "<<p1;
 gotoxy(6,10);
 cout<<"Percentage of prediabitic patients in this weeek is==>";
 cout<<"  "<<p2;
 gotoxy(6,11);
 cout<<"Percentage ofnondiabitic patients in this weeek is==>";
 cout<<"  "<<p3;
 gotoxy(30,13);
 textcolor(GREEN);
 cputs("MALARIA");
 textcolor(WHITE);
 ifstream in2("admin2.dat",ios::binary|ios::in);
 char s1;
 while(in2)
 {
  if(in2.eof())
   break;
  in2.get(s1);
  if(int(s1)==49)
   gg2++;
  else if(int(s1)==50)
   ff2++;
  else if(int(s1)==51)
   jj2++;
 }
 in2.close();
 delay(1000);
 gotoxy(6,14);
 cout<<"The total number of malaria patients in this weeek is==>";
 cout<<"  "<<gg2;
 gotoxy(6,15);
 cout<<"Number of patients may be suffering from malaria in this weeek is==>";
 cout<<"  "<<ff2;
 gotoxy(6,16);
 cout<<"Number of patients not suffering from malaria in this weeek is==>";
 cout<<"  "<<jj2;
 h1=gg2*100;
 h1=h1/sum;
 h2=ff2*100;
 h2=h2/sum;
 h3=jj2*100;
 h3=h3/sum;
 delay(1000);
 gotoxy(6,18);
 cout<<"Percentage of diseased patients in this weeek is==>";
 cout<<"  "<<h1;
 gotoxy(6,19);
 cout<<"Percentage of may be diseased patients in this weeek is==>";
 cout<<"  "<<h2;
 gotoxy(6,20);
 cout<<"Percentage of not diseased patients in this weeek is==>";
 cout<<"  "<<h3;
 getch();
}
void searchadmin()
{
 clrscr();
 int z;
 char w;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,13);
 cout<<"Do yo want to see reports of...";
 gotoxy(6,14);
 cout<<"1. Diabitic Patients";
 gotoxy(6,15);
 cout<<"2. Malaria Patients";
 gotoxy(6,16);
 cout<<"Enter the number corresponding to your choice..";
 cin>>z;
 if(z==1)
 {
 ifstream in("Project.dat",ios::binary|ios::in);
 diseases d;
 if(in==NULL)
 {
  clrscr();
   gotoxy(25,13);
   cputs("No records found!!!");
   delay(1000);
 }
 while(in)
 {
  in.read((char *)&d,sizeof(d));
  if(in.eof())
   {
    clrscr();
    textcolor(GREEN);
    gotoxy(25,13);
    cputs("No more records found!!!");
    delay(1000);
    textcolor(WHITE);
    break;
   }
  d.showreport();
  d.showreport2();
  d.showreport3();
  gotoxy(55,5);
  cout<<"Patient ID==>";
  cout<<" "<<d.pat_id;
  textcolor(WHITE);
  gotoxy(6,24);
  cputs("Do you want to see more reports...(y/n)");
  gotoxy(60,24);
  cin>>w;
  w=toupper(w);
  if(w=='N')
  break;
 }
 in.close();
 }
 else if(z==2)
 {
 ifstream in("malaria.dat",ios::binary|ios::in);
 diseases2 d;
 if(in==NULL)
 {
  clrscr();
   gotoxy(25,13);
   cputs("No records found!!!");
   delay(1000);
 }
 while(in)
 {
  in.read((char *)&d,sizeof(d));
  if(in.eof())
   {
    clrscr();
    textcolor(GREEN);
    gotoxy(25,13);
    cputs("No more records found!!!");
    delay(1000);
    textcolor(WHITE);
    break;
   }
  d.showr();
  d.showr2();
  d.showr3();
  gotoxy(55,5);
  cout<<"Patient ID==>";
  cout<<" "<<d.pat_id2;
  textcolor(WHITE);
  gotoxy(6,24);
  cputs("Do you want to see more reports...(y/n)");
  gotoxy(60,24);
  cin>>w;
  w=toupper(w);
  if(w=='N')
  break;
 }
 in.close();
 }
}
void inside()
{
 clrscr();
 int z;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,9);
 textcolor(GREEN);
 cputs("What operation do you want to perform ??");
 textcolor(WHITE);
 gotoxy(6,11);
 cout<<"1.See the information of all of today's patient";
 gotoxy(6,12);
 cout<<"2.Check the stats of diseases";
 gotoxy(6,14);
 cout<<"Enter your choice from the above given options...";
 gotoxy(6,64);
 cin>>z;
 switch(z)
 {
 case 1:  searchadmin();
	  char g;
	  clrscr();
	  gotoxy(21,13);
	  cputs("Do you want to go back ???");
	  gotoxy(21,14);
	  cputs("Press Y for yes and N for no==>");
	  cin>>g;
	  while(g=='y'||g=='Y')
	 {
	  inside();
	  clrscr();
	  gotoxy(21,13);
	  cputs("Do you want to go to back ???");
	  gotoxy(21,14);
	  cputs("Press Y for yes and N for no==>");
	  cin>>g;
	 }
	  return;
 case 2:  count();
	  clrscr();
	  gotoxy(21,13);
	  cputs("Do you want to go back ???");
	  gotoxy(21,14);
	  cputs("Press Y for yes and N for no==>");
	  cin>>g;
	  while(g=='y'||g=='Y')
	 {
	  inside();
	  clrscr();
	  gotoxy(21,13);
	  cputs("Do you want to go to back ???");
	  gotoxy(21,14);
	  cputs("Press Y for yes and N for no==>");
	  cin>>g;
	 }
	 return;
 }
}
void admin()
{
 clrscr();
 char pass[100];
 if(xx==3)
 {
  for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
  for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
  gotoxy(13,12);
  textcolor(GREEN);
  cputs("SORRY YOU CANNOT ACCESS THE ADMINISTRATIVE PORTAL!!!!");
  textcolor(WHITE);
  getch();
  return;
 }
 gotoxy(21,12);
 cputs("WELCOME TO THE ADMINISTRATIVE PORTAL");
 gotoxy(21,14);
 cout<<"Enter the password==>";
 gotoxy(44,14);
 gets(pass);
 for(int i=0;i<strlen(pass);i++)
 {
  gotoxy(44+i,14);
  cout<<'*';
 }
 delay(1000);
 if(strcmpi(pass,"umesh")==0)
 {
  inside();
 }
 for(int j=3;j>0;j--)
 {
  if(strcmpi(pass,"umesh")!=0)
  {
   gotoxy(21,16);
   cputs("Incorrect password");
   gotoxy(21,17);
   cout<<"You have ";
   cout<<j;
   cout<<" attempts left";
   gotoxy(21,18);
   cputs("Please enter the correct password!!");
   gotoxy(44,14);
   for(int i=0;i<strlen(pass);i++)
   {
    gotoxy(44+i,14);
    cout<<' ';
   }
   gotoxy(44,14);
   gets(pass);
   for(i=0;i<strlen(pass);i++)
   {
    gotoxy(44+i,14);
    cout<<'*';
   }
   delay(1000);
   xx++;
   if(strcmpi(pass,"umesh")==0)
   {
    inside();
    xx--;
   }
  }
 }
}

void givereport()
{
 clrscr();
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(6,13);
 cout<<"Search report for...";
 gotoxy(6,14);
 cout<<"1. Diabitic Patient";
 gotoxy(6,15);
 cout<<"2. Malaria";
 gotoxy(6,16);
 cout<<"Enter the number corresponding to your choice...";
 cin>>qt;
 if(qt==1)
 searchname();
 else if(qt==2)
 searchname2();
}
void mainmenu()
{
 clrscr();
 int n;
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(8,7);
 textcolor(GREEN);
 cputs("WELCOME TO THE RECEPTION OF OUR PATHALOGY LAB!!");
 textcolor(WHITE);
 gotoxy(6,10);
 cout<<"1.ADMIN LOGIN ";
 gotoxy(6,11);
 cout<<"2.FETCH REPORT ";
 gotoxy(6,12);
 cout<<"3.GIVE TEST ";
 gotoxy(6,14);
 cout<<"Enter number corresponding  to your choice==>";
 cin>>n;
 switch(n)
 {
  case 1: admin();
	  break;
  case 2: givereport();
	  break;
  case 3: choice();
	  break;
  default:gotoxy(6,18);
	  cputs("Invalid choice made");
	  delay(1000);
	  return;
 }
}

void main()
{
 char g;
 diseases di;
 di.welcome_screen();
 textcolor(WHITE);
 mainmenu();
 clrscr();
 for(int yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,22);
  cputs("~");
 }
 for(yy=1;yy<80;yy++)
 {
  textcolor(YELLOW);
  gotoxy(yy,4);
  cputs("~");
 }
 textcolor(WHITE);
 gotoxy(21,13);
 cputs("Do you want to go to reception ???");
 gotoxy(21,14);
 cputs("Press Y for yes and N for no==>");
 cin>>g;
 while(g=='y'||g=='Y')
 {
  mainmenu();
  clrscr();
  gotoxy(21,13);
  cputs("Do you want to go to reception ???");
  gotoxy(21,14);
  cputs("Press Y for yes and N for no==>");
  cin>>g;
  if(g=='n'||g=='N')
  break;
 }
 clrscr();
 gotoxy(25,13);
 cputs("THANKS FOR YOUR VISIT !!!");
 getch();
}
