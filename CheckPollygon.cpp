//Program 1 : Check if the given point lies inside or outside a polygon?


#include<stdio.h>
#include<iostream>
using namespace std;

int polygon(int numvert, float *vertexX, float *vertexY, float testX, float testY)
{
  int i, j, c = 0;
  for (i = 0, j = numvert-1; i < numvert; j = i++) {
    if ( ((vertexY[i]>testY) != (vertexY[j]>testY)) &&
     (testX < (vertexX[j]-vertexX[i]) * (testY-vertexY[i]) / (vertexY[j]-vertexY[i]) + vertexX[i]) )
       c = !c;
  }
  return c;
}
int main(){
	int t;
		cout<<"Enter number of testcases:"<<endl;
		cin>>t;
	while(t--){
		int n;
			cout<<"Enter number of vertices"<<endl;
			cin>>n;
		float x[n],y[n];
		float px,py;
			cout<<"Enter vertices using space separation:"<<endl;
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
			cout<<"Enter test point:"<<endl;
			cin>>px>>py;
			int c=polygon(n,x,y,px,py);
		if(c==0)
			cout<<"False"<<endl;
		else
			cout<<"True"<<endl;
	}
}
