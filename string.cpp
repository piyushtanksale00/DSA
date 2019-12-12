#include<iostream>
using namespace std;
char str1[20],str2[20],*p1,*p2;
int l1=0,l2=0,i,cnt=0,len=0;

void stringcpy()
{
    cout<<"\n Enter string:";
			cin>>str1;
			p1=str1;
			p2=str2;
			while(*p1!='\0')
			{
				*p2=*p1;
				p1++;
				p2++;
			}
			*p2='\0';
			cout<<"\n Original String="<<str1<<endl;
			cout<<"\n Copied String="<<str2<<endl;
}
void stringcompare()
{
    cout<<"\n Enter string1:";
			cin>>str1;
			cout<<"\n Enter String2:";
			cin>>str2;
			p1=str1;
			p2=str2;
			while(*p1!='\0')
			{
				l1++;
				p1++;
			}
			while(*p2!='\0')
			{
				l2++;
				p2++;
			}
			if(l1!=l2)
			{
				cout<<"Strings are not equal"<<endl;
			}
			else
			{
				for(i=0;i<l2;i++)
				{
					if(*p1==*p2)
					cnt++;
				}
			}
				if(cnt==l1)
				cout<<"Strings are equal"<<endl;
}
void stringlength()
{
    cout<<"\n Enter String:";
			cin>>str1;
			p1=str1;
			 while(*p1!='\0')
			 {
				len++;
				p1++;
			 }
			 cout<<"Length of string:"<<len<<endl;
}
void stringconcate()
{
    cout<<"\n Enter string1:";
			cin>>str1;
			cout<<"\n Enter String2:";
			cin>>str2;
			p1=str1;
			p2=str2;
			while(*p1!='\0')
			{
				p1++;
			}
			while(*p2!='\0')
			{
				*p1=*p2;
				p1++;
				p2++;
			}
			*p1='\0';
			cout<<"\n Concatenated string: "<<str1<<endl;
}
void stringrev()
{
    int len=0;
            cout<<"\n Enter string:";
			cin>>str1;
			p1=str1;
    for (int i=0;str1[i]!='\0';i++)
   {
       len++;
       p1++;
   }

        p2=&str2[0];

    for(int i=0;i<=len;i++)
    {
        *p2=*p1;
       // cout<<*r;
        p2++;
        p1--;

    }
    *p2='\0';
    p2=str2;
    cout<<"The reverse string is: ";
    for(int i=0;i<=len;i++)
    {
        cout <<*p2;
        p2++;
    }
}
int main()
{
	int ch;
	do
	{
		cout<<"\n 1.Copy \n 2.Compare \n 3.Length \n 4.Concatenate \n 5.Reverse\n 6.Exit";
		cout<<"\n";
		cout<<"\n Enter choice:";
		cin>>ch;
	switch(ch)
	{
		case 1:
			stringcpy();
			break;
		case 2:
			stringcompare();
			break;
		case 3:
		    stringlength();
		    break;
		case 4:
			stringconcate();
			break;
		case 5:
			stringrev();
			break;
        case 6:
            return 0;
            break;
		default:
			cout<<"\n Enter Proper choice";
			break;
	}
	}while(ch<=6);
    return 0;

}


