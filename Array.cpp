/*#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,3, 6, 7, 8};    //Declaration of an array.
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;        //accessing of an array.
	cout<<arr[2]<<endl;
	cout<<arr[3]<<endl;
	cout<<arr[4]<<endl;
	
	int third[15]={2,7};
	int n=15;
	cout<<"Printing the array"<<endl;          //print the array.
	for(int i=0; i<n; i++){                   // 2 7 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
		cout<<third[i]<<" ";
		
	}
	
	//intialising all location with zeroes.
	
	int forth[14]={0};
	n=10;
	cout<<"printing the array"<<endl;
	for(int i=0; i<n; i++){                      //0 0 0 0 0 0 0 0 0 0 
		cout<<forth[i]<<" ";
		
	}
	//intialising all location with 1 is not possible.
	int fifth[12]={1};
	n=10;
	cout<<"Printing the array"<<endl;            //1 0 0 0 0 0 0 0 0 0  
	for(int i=0; i<=n; i++){
		cout<<fifth[i]<<" ";
	
	}
	
	return 0;
}*/

//Let's do above code with the help of function 

/*#include<iostream>
using namespace std;

void printArray(int arr[], int size){    // here printing array done by using function.
	
	cout<<"printing the array"<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Printing Done"<<endl;
}
int main(){
	int n;
	
	int third[15]={2,7};
    n=10;
	printArray(third, 10);
	
	int fourth[14]={0};
	n=10;
	printArray(fourth, 10);
	
	int fifth[8]={1};
	n=10;
	printArray(fifth, 8);
	
	int fifthsize = sizeof(fifth)/sizeof(int);
	cout<<"Size of fifth: "<<fifthsize<<endl;
	return 0;
	
}*/


//1. MAXIMUM AND MINIMUM OF ARRAY.
/*
#include<iostream>
using namespace std;

int getMin(int num[],int n){
	 
	int min = INT_MAX;
	for(int i=0;i<n;i++){
		if(num[i] < min){
			min=num[i];
		}
	}
	//returning max value.
	return min;
}

int getMax(int num[],int n){
	 
	int max = INT_MIN;
	for(int i=0;i<n;i++){
		if(num[i]> max){
			max=num[i];
		}
	}
	//returning max value.
	return max;
}
int main(){
	int size;
	cin>>size;
	
	int num[size];
	//taking input in array.
	for(int i=0; i<size; i++){
		cin>>num[i];
	}
	
	cout<<"Minimum of an array :"<<getMin(num,size)<<endl;
	cout<<"Maximum of an array :"<<getMax(num,size)<<endl;

	return 0;
}


//2.second way of doing this code.

#include<iostream>
using namespace std; 

int getMin(int num[], int n){
	int mini = INT_MAX;
	
	for(int i=0; i<n; i++){
		mini= min(mini, num[i]);
	}
	return mini;
}

int getMax(int num[], int n){
	int maxi = INT_MIN;
	
	for(int i=0; i<n; i++){
		maxi= max(maxi, num[i]);
	}
	return maxi;
}

int main(){
	int size;
	cin>>size;
	
	int num[size];
	
	for(int i=0; i<size; i++){
		cin>>num[i];
	}
	
	cout<<"Minimum of array: "<<getMin(num, size)<<endl;
	cout<<"Maximum of array: "<<getMax(num, size)<<endl;
	
	return 0;
}*/


//Array Scopes.







