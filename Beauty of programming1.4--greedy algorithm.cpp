//#include<stdio.h>
//#include<windows.h>
/*int leap(int year)
{
    if(year%4==0&&year%100!=0&&year%400==0)
    return 1;
    else
    return 0;
}int main()
{
    int sum,year=1970,month=1;
    printf("Please input day number:\n");
    scanf("%d",&sum);
    for(;;year++)
    {
        if(leap(year)&&sum>366)
            sum-=366;
        else if(!(leap(year))&&sum>365)
            sum-=365;
        else
        goto Label1;
    }
    Label1:for(;;month++)
    {
        switch(month)
        {
            case 1:case 3:case 5:case 7:
            case 8:case 10:case 12:
            if(sum<=31)
            goto Label2;
            sum-=31;
            break;
            case 4:case 6:case 9:case 11:
            if(sum<=30)
            goto Label2;
            sum-=30;
            break;
            default:
            if(leap(year)&&sum<=29||!(leap(year))&&sum<=28)
            goto Label2;
            if(leap(year))
            sum-=29;
            if(!(leap(year)))
            sum-=28;
        }
    }
    Label2:printf("%d- %d- %d",year,month,sum);
    return 0;
}*/
/*int main(){
    int i;
    for(;;){
        for(i=0; i<9600000; i++)
            ;
        Sleep(10);
    }
    return 0;
}*/






/*#include <stdio.h>

int main()
{
	int  i, j, k, l, m;
	char c=3;	//ASCII������ 3 ����һ���ַ�С����

	for (i=1; i<=5; i++)				printf("\n");	//��ͷ�ճ�5��

	for (i=1; i<=3; i++) {	//ǰ3���м��п�϶�ֿ���д
		for (j=1; j<=32-2*i; j++)		printf(" ");	//��ߵĿո�ÿ��һ����ߵĿո����һ����2�� //8*n-2*i
		for (k=1; k<=4*i+1; k++)		printf("%c", c);//�����벿���ַ�С����
		for (l=1; l<=13-4*i; l++)		printf(" ");	//�м�Ŀո�ÿ��һ�еĿո����һ����4��
		for (m=1; m<=4*i+1; m++)		printf("%c", c);//����Ұ벿���ַ�С����
		printf("\n");		//ÿһ�������ϻ���
	}

	for (i=1; i<=3; i++) {	//��3���м�û�пո�
		for (j=1; j<=24+1; j++)			printf(" ");	//��ߵĿո� //8*(n-1)+1
		for (k=1; k<=29; k++)			printf("%c", c);//����ַ�С����
		printf("\n");		//ÿһ�������ϻ���
	}

	for (i=7; i>=1; i--) {	//��7��
		for (j=1; j<=40-2*i; j++)		printf(" ");	//��ߵĿո�ÿ��һ����ߵĿո����һ����2��//8*(n+1)-2*i
		for (k=1; k<=4*i-1; k++)		printf("%c", c);//ÿ��һ�е��ַ�С���ı���һ����4�������ѭ����i--��
		printf("\n");		//ÿһ�������ϻ���
	}

	for (i=1; i<=39; i++)				printf(" ");	//���һ����ߵĿո�
	printf("%c\n", c);		//���һ���ַ�С����

	for (i=1; i<=5; i++)				printf("\n");	//���ճ�5��

	return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<WINDEF.H>
#include<windows.h>

const int SAMPLING_COUNT=200;
const double PI=3.1415926535;
const int TOTAL_AMPLITUDE=300;

int main(){
    DWORD busySpan[SAMPLING_COUNT];
    int amplitude=TOTAL_AMPLITUDE/2;
    double radian=0.0;
    double radianIncrement=2.0/(double)SAMPLING_COUNT;
    for(int i=0;i < SAMPLING_COUNT; i++){
        busySpan[i]=(DWORD)(amplitude+(sin(PI*radian)*amplitude));
        radian+=radianIncrement;
    }

    DWORD starttime=0;
    for(int j=0;;j=(j+1)%SAMPLING_COUNT){
        starttime=GetTickCount();
        while((GetTickCount()-starttime)<=busySpan[j])
            ;
        Sleep(TOTAL_AMPLITUDE-busySpan[j]);
    }
    return 0;
}*/

//�ṹλ������

/*#include<stdio.h>

int main(){
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    }bit,*pbit;
    bit.a=1;
    bit.b=7;
    bit.c=15;
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
    pbit=&bit;
    pbit->a=0;
    pbit->b&=3;
    pbit->c|=5;
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);
    //return 0;
    struct sf{
        unsigned a:4;
        unsigned b:4;

    }sw;
    for(sw.a=1;sw.a<=9;sw.a++){
        for(sw.b=1;sw.b<=9;sw.b++){
            if(sw.b%3!=sw.a%3){
                printf("A=%d,B=%d\n",sw.a,sw.b);
            }
        }
    }
    return 0;
}*/
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
bool compare(int a,int b)
{
      return a<b;   //�������У������Ϊreturn a>b����Ϊ����

}
int main(){
    int a[5]={5,5,5,3,3},i,j;//�洢ÿ�����������Ϣ
    int b[5];//�洢����־��ϵ��
    for(i=0;i<5;i++)
        cout<<a[i]<<endl;
    cout<<"\n";
    sort(a,a+5,compare);
    for(i=0;i<5;i++)
        cout<<a[i]<<endl;
    cout<<"\n";
    int k=0;
    for(i=0;i<5;i++){
        b[i]=0;
        b[i]=a[i];
        if(i==2){
            k=min(b[i],b[0]);
        }
        for(j=i+1;j<5;j++){
            a[j]-=a[i];
        }
        cout<<b[i]<<"   ";
    }
    cout<<"\n";
    cout<<"\n";
    double total;
    //int k=b[0]>(b[2]-b[1])?(b[2]-b[1]):b[0];
    cout<<k<<endl;
    total=(b[0]-k)*5*(1-0.25)+(b[1]+2*k)*4*(1-0.2)+(b[2]-k)*3*(1-0.15)+(b[3])*2*(1-0.1)+(b[4])*(1-0.05);
    total*=8;
    printf ("%f\n",total);
     return 0;
}
