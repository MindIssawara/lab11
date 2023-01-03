#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    int count=0;
    float sum=0,x=0,std=0;
    string text;
    ifstream source("score.txt");
    while(getline(source,text)){
	    count++;
	    sum+=atof(text.c_str());
	}
	source.close();
	source.open("score.txt");
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    float mean;
    mean=sum/count;
    cout << "Mean = "<<mean<<endl;
    while(getline(source,text)){
	    x = x + pow(atof(text.c_str()),2);
	}
	std=(x/count)-pow(mean,2);
	std=sqrt(std);
    cout << "Standard deviation = "<<std;
    source.close();
    
    return 0;
}