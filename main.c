#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf("\t\t\tKaradeniz Teknik Universitesi\n");
	printf("\t\t\t\tNot Sistemi\n\n");
	printf("Vize ve final sinavlarinda alinan\n15 alti ve 85 uzeri notlar ortalamaya girmemektedir.\n");
	printf("Bu program 100 ogrencinin ortalamalarini hesaplayip harf notunu bulmaktadir.\n");
	printf("Final sinavindan 45 uzeri not alamayan ogrencinin harf notu FF olmaktadir.\n\n");
	printf("  Ogrenci   \tVize     Final    Ortalama    Harf\n");
	int vize[100],final[100],ortalama[100];
	char harf[100][2];
	int i,a=0,b=0,yen;
	double yeni=0;
	float finalort=0,vizeort=0,ortalamaort=0,can=0,genel=0; 
	for(i=0;i<100;i++)
	{
		vize[i]=rand()%101;
	}
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
		final[i]=rand()%101;
	}
	for(i=0;i<100;i++)
	{
		ortalama[i]=(vize[i]+final[i])/2;
	}
	for(i=0;i<100;i++)
	{
		if(vize[i]<85 && vize[i]>15)
		{
			vizeort=vizeort+vize[i];
			a++;
		}
	}vizeort=vizeort/a;a=0;
	for(i=0;i<100;i++)
	{
		if(final[i]<85 && final[i]>15)
		{
			finalort=finalort+vize[i];
			a++;
		}
    }finalort=finalort/a;a=0;
	ortalamaort=(vizeort+finalort)/2;   
    for(i=0;i<100;i++)
    {
    	can=pow((ortalama[i]-ortalamaort),2);
	}can/i-1;can=sqrt(can);
	for(i=0;i<100;i++)
	{
		if(ortalama[i]>ortalamaort-can)
		{
			a++;
		}
	}
	genel=ortalamaort-can;
	for(i=0;i<100;i++)
	{
		if(ortalama[i]>=ortalamaort-(can/2) && ortalama[i]<=ortalamaort+(can/2)){harf[i][0]='C';harf[i][1]='C';}
		else if(ortalama[i]>ortalamaort+(can/2) && ortalama[i]<=ortalamaort+can+(can/2)){harf[i][0]='C';harf[i][1]='B';}
		else if(ortalama[i]>ortalamaort+can+(can/2) && ortalama[i]<=ortalamaort+(can*2)+(can/2)){	harf[i][0]='B';harf[i][1]='B';	}
		else if(ortalama[i]>ortalamaort+(can*2)+(can/2) && ortalama[i]<=ortalamaort+(can*3)+(can/2) && ortalama[i]){	harf[i][0]='B';harf[i][1]='A';	}
		else if(ortalama[i]>genel && ortalama[i]<ortalamaort-(can/2)){	harf[i][0]='D';harf[i][1]='C';	}
		else if(ortalama[i]<genel && ortalama[i]>ortalamaort-(can*2)){ 	harf[i][0]='F';harf[i][1]='D';	}
		else if(ortalama[i]<ortalamaort-(can*2)) { 	harf[i][0]='F';harf[i][1]='F';	}
		else {	harf[i][0]='A';harf[i][1]='A';	}
 	}
 	for(i=0;i<100;i++)
 	{
 		if(final[i]<45)
 		{
 			harf[i][0]='F';harf[i][1]='F';
		}
	}
	for(i=0;i<100;i++)
	{
		printf("%3d.Ogrenci%7d%9d%9d%12c%c\n",i+1,vize[i],final[i],ortalama[i],harf[i][0],harf[i][1]);
	}
	printf("\nVize Ortalama=%.2f\t Final Ortalama=%.2f\nGenel Ortalama=%.2f\t Can=%.2f\n\n",vizeort,finalort,ortalamaort,can);
	printf("Sinifin Genel Basarisi=%%%d dir.\n\n",a);yen=a;a=0;
	for(i=0;i<100;i++)
	{
		if(vize[i]>vizeort)
		{
			a++;
		}
	}
	vizeort=a;yeni=a;
	yeni=yeni/10;
	if(a>100-a){
	a=ceil(yeni);}
	else if(a<100-a){
	a=floor(yeni);}
	b=10-a;
	for(i=10;i>a;i--)
	{
		printf("|\n");
	}
	for(i=a;i>b;i--)
	{
		printf("|\t|\n");
	}
	for(i=b;i>0;i--)
	{
		printf("|\t|\t|\n");
	}
	printf("____________________\nvize basari : %%%.f basarili ve %%%.f basarisiz  \n",vizeort,100-vizeort);a=0;
	for(i=0;i<100;i++)
	{
		if(final[i]>finalort)
		{
			a++;
		}
	}
	if(a>100-a){
	finalort=a;yeni=a;
	yeni=yeni/10;
	a=ceil(yeni);
	b=10-a;
	for(i=10;i>a;i--)
	{
		printf("|\n");
	}
	for(i=a;i>b;i--)
	{
		printf("|\t|\n");
	}
	for(i=b;i>0;i--)
	{
		printf("|\t|\t|\n");
	}}
	else {
	finalort=a;yeni=a;
	yeni=yeni/10;
	a=floor(yeni);
	b=10-a;
	for(i=10;i>b;i--)
	{
		printf("|\n");
	}
	for(i=b;i>a;i--)
	{
		printf("|\t\t|\n");
	}
	for(i=a;i>0;i--)
	{
		printf("|\t|\t|\n");
	}}
	printf("____________________\nfinal basari : %%%.f basarili ve %%%.f basarisiz  \n",finalort,100-finalort);
	yeni=yen;
	yeni=ceil(yeni);
	yeni=yeni/10;
	a=ceil(yeni);
	b=10-a;
	for(i=10;i>a;i--)
	{
		printf("|\n");
	}
	for(i=a;i>b;i--)
	{
		printf("|\t|\n");
	}
	for(i=b;i>0;i--)
	{
		printf("|\t|\t|\n");
	}
	printf("____________________\ngenel basari : %%%d basarili ve %%%d basarisiz  \n",yen,100-yen);
 	system("pause");
	return 0;
}
