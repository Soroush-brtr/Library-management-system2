#include<iostream>
#include<string>
#include<vector>
using namespace std;
class item
{
	public:
		string title;
		string author;
		string genre;
		bool availability;
		void update_availability()
		{
			if (availability==true)
			{
				availability=false;
			}
			if (availability==false)
			{
				availability=true;
			}
		}
		string display()
		{
		}
};
class book : public item
{
};
class refrence_book : public book
{
};
class non_refrence_book : public book
{
};
class userr
{
};
class library
{
	vector<book> v1;
	vector<refrence_book> v2;
	vector<non_refrence_book> v3;
	vector<userr> v4;
	string ramz;
	void add(book)
	{
	}
	void add(refrence_book b)
	{
	}
	void add(non_refrence_book b)
	{
	}
	void give(userr a,book b)
	{
	}
	string search(book b)
	{
	}
};
class librarian
{
};
int main()
{
	int x;
	bool flag=false;
	//cout menu
	while(true)
	{
		switch(x)
		{
			case 1:
			
			break;
			case 2:
			
			break;
			case 3:
			
			break;
			case 4:
			
			break;
			case 9:
			flag=true;
			default:
			break;
		}
		if(flag==true)
		{
			break;
		}
		else
		{
			//cout menu
		}
	}
}