//#include <iostream>
//using namespace std;
//
//
//void function(){
//for(int i=1; i<11; i++){
//	cout<<i<<endl;
//}
//}
//int main(){
//	function();	
//}


//#include <iostream>
//using namespace std;
//
//void function(){
//	
//	int sum=0;
//	int number;
//	
//	while(true){
//		
//		cout<<"enter the number 0to10"<<endl;
//		cin>>number;
//		
//		if(number==0){
//			break;
//		}
//		sum +=number;
//			cout<<sum;
//
//	}
//	cout<<sum;
//
//	
//}
//int main(){
//	function();
//}

//#include <iostream>
//using namespace std;
//
//
//void function() {
//int num;
//cout<<"enter the number";
//cin>>num;	
//if(num%2==0){
//	cout<<"not prime";
//}else{
//	cout<<"prime";
//}
//}
//int main(){
//function();  // Prime check karne ke liye function call
//
//}




#include <iostream>
using namespace std;

int function(int a,int b){
int max;
if(a>b){
	max=a;
}else{
	max=b;
}
return max;

}

int main(){
	int num1,num2;
//	cout<<"enter the number1";
//	cin>>num1;
//	cout<<"enter the number2";
//	cin>>num2;
//int res=function(num1,num2);
	cout<<"max number is:"<<function(2,4);
}
