#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int count=0;
    float sum,sum2=0,mean,mean2,sd,x=0;
    string textline;
    ifstream source;
    source.open("score.txt");
    while(getline(source,textline)){
        x=stof(textline);
        sum+=x;
        sum2+=pow(x,2);
        count++;
    }
    mean=sum/count;
    mean2=pow(mean,2);
    sd=sqrt((sum2/count)-mean2);
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<sd;
    source.close();
    return 0;
}
