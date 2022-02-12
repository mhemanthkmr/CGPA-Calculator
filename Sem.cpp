#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sem1()
{
    string BS8161,CY8151,GE8151,GE8152,GE8161,HS8151,MA8151,PH8151;
    cin>>BS8161>>CY8151>>GE8151>>GE8152>>GE8161>>HS8151>>MA8151>>PH8151;
    float total_credit = 25;
    float sum=0;
    if (BS8161 == "O") sum+=2*10;
    else if (BS8161 == "A+") sum+=2*9;
    else if (BS8161 == "A") sum+=2*8;
    else if (BS8161 == "B+") sum+=2*7;
    else if (BS8161 == "B") sum+=2*6;
    else sum+=0;
    if (CY8151 == "O") sum+=3*10;
    else if (CY8151 == "A+") sum+=3*9;
    else if (CY8151 == "A") sum+=3*8;
    else if (CY8151 == "B+") sum+=3*7;
    else if (CY8151 == "B") sum+=3*6;
    else sum+=0;
    if (GE8151 == "O") sum+=3*10;
    else if (GE8151 == "A+") sum+=3*9;
    else if (GE8151 == "A") sum+=3*8;
    else if (GE8151 == "B+") sum+=3*7;
    else if (GE8151 == "B") sum+=3*6;
    else sum+=0;
    if (GE8152 == "O") sum+=4*10;
    else if (GE8152 == "A+") sum+=4*9;
    else if (GE8152 == "A") sum+=4*8;
    else if (GE8152 == "B+") sum+=4*7;
    else if (GE8152 == "B") sum+=4*6;
    else sum+=0;
    if (GE8161 == "O") sum+=2*10;
    else if (GE8161 == "A+") sum+=2*9;
    else if (GE8161 == "A") sum+=2*8;
    else if (GE8161 == "B+") sum+=2*7;
    else if (GE8161 == "B") sum+=2*6;
    else sum+=0;
    if (HS8151 == "O") sum+=4*10;
    else if (HS8151 == "A+") sum+=4*9;
    else if (HS8151 == "A") sum+=4*8;
    else if (HS8151 == "B+") sum+=4*7;
    else if (HS8151 == "B") sum+=4*6;
    else sum+=0;
    if (MA8151 == "O") sum+=4*10;
    else if (MA8151 == "A+") sum+=4*9;
    else if (MA8151 == "A") sum+=4*8;
    else if (MA8151 == "B+") sum+=4*7;
    else if (MA8151 == "B") sum+=4*6;
    else sum+=0;
    if (PH8151 == "O") sum+=3*10;
    else if (PH8151 == "A+") sum+=3*9;
    else if (PH8151 == "A") sum+=3*8;
    else if (PH8151 == "B+") sum+=3*7;
    else if (PH8151 == "B") sum+=3*6; 
    float gpa = sum/total_credit;
    cout<<fixed<<setprecision(2)<<gpa<<endl;   
}
void sem2()
{
    string BE8255,CS8251,CS8261,GE8261,GE8291,HS8251,MA8251,PH8252;
    cin>>BE8255>>CS8251>>CS8261>>GE8261>>GE8291>>HS8251>>MA8251>>PH8252;
    float total_credit = 24;
    float sum=0;
    if (BE8255 == "O") sum+=3*10;
    else if (BE8255 == "A+") sum+=3*9;
    else if (BE8255 == "A") sum+=3*8;
    else if (BE8255 == "B+") sum+=3*7;
    else if (BE8255 == "B") sum+=3*6;
    else sum+=0;
    if (CS8251 == "O") sum+=3*10;
    else if (CS8251 == "A+") sum+=3*9;
    else if (CS8251 == "A") sum+=3*8;
    else if (CS8251 == "B+") sum+=3*7;
    else if (CS8251 == "B") sum+=3*6;
    else sum+=0;
    if (CS8261 == "O") sum+=2*10;
    else if (CS8261 == "A+") sum+=2*9;
    else if (CS8261 == "A") sum+=2*8;
    else if (CS8261 == "B+") sum+=2*7;
    else if (CS8261 == "B") sum+=2*6;
    else sum+=0;
    if (GE8261 == "O") sum+=2*10;
    else if (GE8261 == "A+") sum+=2*9;
    else if (GE8261 == "A") sum+=2*8;
    else if (GE8261 == "B+") sum+=2*7;
    else if (GE8261 == "B") sum+=2*6;
    else sum+=0;
    if (GE8291 == "O") sum+=3*10;
    else if (GE8291 == "A+") sum+=3*9;
    else if (GE8291 == "A") sum+=3*8;
    else if (GE8291 == "B+") sum+=3*7;
    else if (GE8291 == "B") sum+=3*6;
    else sum+=0;
    if (HS8251 == "O") sum+=4*10;
    else if (HS8251 == "A+") sum+=4*9;
    else if (HS8251 == "A") sum+=4*8;
    else if (HS8251 == "B+") sum+=4*7;
    else if (HS8251 == "B") sum+=4*6;
    else sum+=0;
    if (MA8251 == "O") sum+=4*10;
    else if (MA8251 == "A+") sum+=4*9;
    else if (MA8251 == "A") sum+=4*8;
    else if (MA8251 == "B+") sum+=4*7;
    else if (MA8251 == "B") sum+=4*6;
    else sum+=0;
    if (PH8252 == "O") sum+=3*10;
    else if (PH8252 == "A+") sum+=3*9;
    else if (PH8252 == "A") sum+=3*8;
    else if (PH8252 == "B+") sum+=3*7;
    else if (PH8252 == "B") sum+=3*6; 
    float gpa = sum/total_credit;
    cout<<fixed<<setprecision(2)<<gpa<<endl;   
}
void cgpa()
{
    float a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<(a+b)/2<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ll t = 1;
	cin >> t;
	while (t--)
	{
		cgpa();
	}
}
