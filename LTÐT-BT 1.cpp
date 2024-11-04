#include<stdio.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
void timx(int a[],int x);
void max(int a[],int n);
void min(int a[],int n);
void tongle(int a[],int n);
void tong(int a[],int n);
int main()
{
	int a[10];
	int n;
	printf("nhap so luong phan tu trong mang:  ");
	scanf("%d",&n);
	nhapmang(a,n);
	printf("mang vua nhap la:\n ");
	xuatmang(a,n);
	timx(a,n);
	max(a,n);
	min(a,n);
	tongle(a,n);
	tong(a,n);
	}
	void nhapmang(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
	 printf("nhap so phan tu thu %d:   ",i);
	 scanf("%d", &a[i]);
     }
}
void xuatmang(int a[],int n)
{
		for(int i=1;i<=n;i++)
		{
			printf(" %d" ,a[i]);
		}
}
void timx(int a[],int x)
{
	printf("\n nhap phan tu x la: ");
	scanf("%d",&x);
	printf("gia tri phan tu thu %d la:  %d  ",x , a[x]);

}

void max(int a[],int n)
{
	int max=0;
	int tam=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
	    {
	    	max=a[i];
		   a[i]=max;
		   tam=i;
	    }
	}
	printf("\n vi tri max %d  ",tam);
	printf("\n gia tri max %d  ",max);
}
void min(int a[],int n)
{
	int min=a[1];
	int t=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<min)
	    {
	    	min=a[i];
		   a[i]=min;
		   t=i;
	    }
	}
	printf("\n vi tri min %d  ",t);
	printf("\n gia tri min %d  ",min);
}

void tongle(int a[],int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i] %2 !=0)
		s=s+a[i];
	}
	printf("\n tong phan tu le tromg mang %d  ",s);
}

void tong(int a[],int n)
{
	int T=0;
	for(int i=1;i<=n;i++)
	{
		T=T+a[i];
	}
	printf("\n tong cac phan tu trong mang %d   ",T);
}

