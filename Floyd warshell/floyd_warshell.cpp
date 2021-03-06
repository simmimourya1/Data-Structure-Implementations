/* Code uploaded on GITHUB on Nov 29th, 2014
   Author Name: Saurabh Gupta
   Copyrights@saurabh gupta
*/ 

#include<iostream>
#define MAX 200000000; //for replacement of infinity
using namespace std;

//function to obtain minimum of two numbers
int min(int a, int b){
	if(a<=b){
		return a;
	}
	else
		return b;
}

int main(){
	
	int n,i,j;
	cout<<"Enter No. of nodes for the graph"<<endl;
	cin>>n;
	
	//Creating a 2D dynamic array
	int** G = new int*[n+1];
	for(i = 0; i < n; ++i)
    	G[i] = new int[n+1];
    
	//Taking input the graph, using adjacency matrix	
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
			cout<<"Enter weight between node"<<i<<" and node"<<j<<" ";
    		cin>>G[i][j];
    		if(i!=j && G[i][j]==0){
    			G[i][j]= MAX;
    		}
    		
    	}
    }
    
    //Floyd-warshell algorithm
    for(int k=1;k<=n;k++){
    	cout<<"\n\n\n\n";
    	for(i=1;i<=n;i++){
    		cout<<"\n";
    		for(j=1;j<=n;j++){
    			G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
    			cout<<G[i][j]<<" ";
    		}
    	}
    	
    }
	
	    
    
	
	return 0;
}

