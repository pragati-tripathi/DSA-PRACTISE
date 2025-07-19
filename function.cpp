/*#include<iostream>                                //finding power of the number
using namespace std;

int pow(int a, int b ){
	int ans=1;
	for(int i=1; i<=b; i++){
		ans=ans * a;
	}
	return ans;
}
int main(){
	int a, b;
	cin>>a>>b;
	
	int answer = pow(a,b);
	
	cout<<"answer is: "<<answer <<endl;	
	
	return 0;
}*/


/*#include<iostream>
using namespace std;       //1 even , 0 odd

bool isEven(int a){                 //check number is even or odd using bitwise operator .
	if(a&1){
		return 0;
	}
	else{
		return 1;
	}	
}
int main(){
	int num;
	cin>>num;
	
	if(isEven(num)){
		cout<<"number is even"<<endl;
	}
	else{
	cout<<"number is odd"<<endl;
}
}*/

/*#include<iostream>
using namespace std;                 //nCr= n!/r!*(n-r)!

int factorial(int n){
	int fact=1;
	
	for(int i=1; i<=n; i++){
		fact=fact*i;
	}
	return fact;
}

int nCr(int n, int r){
	int num = factorial(n);
	int deno = factorial(r) * factorial(n-r);
	int ans= num/deno;
	return ans;
}

int main(){
	int n,r;
	cin>>n>>r;
	
	cout<<"answer is : "<< nCr(n,r);
	
	return 0;	
}*/

/*#include<iostream>
using namespace std;

//function signature
void printCounting(int num){
	\\function body
		for(int i=1; i<=num; i++){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	//function call
    printCounting(n);
    
    return 0;
	
}*/

/*#include<iostream>
using namespace std;   //1 - is prime ,  0 - not prime

bool isPrime(int n){          // check its prime or not
	
	for(int i=2; i<n; i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	
	if(isPrime(n)){
		cout<<"Is Prime no"<<endl;
	}
	else{
		cout<<"Not Prime no"<<endl;
	}
	
	return 0;
	
}*/


/*
#include<iostream>
using namespace std;

int AP(int n){
     	return  3 * n + 7;
}
	 
int main(){
	int n;
	cin>>n;
	
	int ans= AP(n);
	cout<<"Arthematic Progression  of nth term: "<<ans<<endl;

	return 0;
}
*/

#include<iostream>
using namespace std;

void dummy(int n){
	n++;
	cout<<"n is "<<n<<endl;
	
}

int main(){
	int n;
	cin>>n;
	
	dummy(n);
	
	cout<<"The number is: "<<n<<endl;
	
	return 0;
	
}