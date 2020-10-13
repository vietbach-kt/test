#include <iostream>
#include <string>
using namespace std;
void inputArray(int &n, int a[]){
    do{
    cout<<" Enter size value off array: ";
    cin>>n;
    if(n<=0)
        cout<<"You need enter size array > 1! \n";
        }
    while(n<=0);
    
    for(int i=0; i<n; i++){
        cout<<"\n Enter value in array a["<< i << "]:";
        cin>>a[i];
        }
    
}
void outputArray(int n, int a[]){
    cout<<"Display this: ";
    for(int i=0; i<n; i++){
        cout<<"\n Enter value in array:"<<a[i];
    }
}
void arange(int n, int a[]){
    for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(a[i] < a[j])
                swap(a[i], a[j]);
        }
        
    }
}
int sumTotal(int n, int a[]){
    int sum;
    arange(n,a);
    sum =  a[0] + a[1]
    return sum;
}
int main()
{
    int n, a[100];
    cout<<"---------- Wellcome to my App ----------- \n";
    inputArray(n,a);
    outputArray(n,a);
    cout<<"Sum: "<<sumTotal(n,a);
	system ("pause");
	return 0;
}