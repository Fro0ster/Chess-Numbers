#include <stdio.h>
void qs(int a[], int ,int);
int part(int a[],int,int);
int main(){
	int a[10],i;
	for(i-0;i<10;i++){
		scanf("%d",&a[i]);
	}
	qs(a,0,9);
	for(i=0;i<10;i++){
		printf("%d   ",a[i]);	
	}
	return 0;	
}

void qs(int a[10],int b,int e){
	int p;
	if(b<e){
		p=part(a,b,e);
		qs(a,b,p-1);
		qs(a,p+1,e);
	}
}

int part(int a[10],int b,int e){
	int left,right,p,temp,flag=0;
	left=p=b;
	right=e;
	while(flag!=1){
		while(a[p]<=a[right] && p!=right)
			right--;
		if(p==right)
			flag=1;
		else if(a[p]>a[right]){
			temp=a[p];
			a[p]=a[right];
			a[right]=temp;
			p=right;
		}
		if(flag!=1){
			while(a[p]>=a[left] && p!=left)
				left++;			
		}
		if(p==left)
			flag=1;
		else if(a[p]<a[left]){
			temp=a[p];
			a[p]=a[left];
			a[left]=temp;
			p=left;
		}		
	}
	return p;
}
