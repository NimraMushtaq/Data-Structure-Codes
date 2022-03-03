#include <iostream>
using namespace std;

struct node
{
	string name;
	int age;
	double salary;
	node *prev;
	node *next;
}
*head=NULL, *tail=NULL;

void AddRecord()
{
	node *temp=new node;
	cout<<"\nEnter name: ";
	cin>>temp->name;
	cout<<"\nEnter age: ";
	cin>>temp->age;
	cout<<"\nEnter salary: ";
	cin>>temp->salary;
	cout<<endl;
	
	if(head==NULL)
	{
		temp->prev=NULL;
		temp->next=NULL;
		head=temp;
		tail=temp;
	}
	else
	{
		temp->prev=tail;
		tail->next=temp;
		temp->next=NULL;
		tail=temp;
	}
}

void display()
{
	if(head==NULL)
	{
		cout<<"\nNo Record\n";
		return;
	}
	else
	{
		int count=1;
	    node *temp=head	;
	    while(temp!=NULL)
	    {
	    	cout<<"Employee "<<count<<endl;
	    	cout<<temp->name<<endl;
	    	cout<<temp->age<<endl;
	    	cout<<temp->salary<<endl;
	    	cout<<"\n============================================\n";
	    	temp=temp->next;
	    	count++;
		}
	}

}

void SearchRecord()
{
	string n;
	int check=0;
	node *temp=head;
	cout<<"\nWhich record you want to search? ";
	cin>>n;
	while(temp!=NULL)
	{
		if(temp->name==n)
		{
			cout<<"\nName found\n";
			check=1;
			return;
		}
	}
	if(check==0)
	{
		cout<<"Not found";
		return;
	}	
}

void DeleteRecord()
{
	cout<<"\nDelete\n";
}

void Sort()
{
	if(head==NULL)
	{
		cout<<"\nNo Record\n";
		return;
	}
	else
	{
		node *temp=head;
		while(temp!=NULL)
		{
			node *small=temp;
			node *ptr=small->next;
			while(ptr)
			{
				if(small->name>ptr->name)
				   small=ptr;
				   
				ptr=ptr->next;
			}
			
			string store=temp->name;
			temp->name=small->name;
			small->name=store;
			temp=temp->next;
		}
	}
}

void UpdateRecord()
{
	if(head==NULL)
	{
		cout<<"\nNo record\n";
		return;
	}
	else
	{
		int pos;
		node *temp=head;
		cout<<"\nWhich employee to update? ";
		cin>>pos;
		for(int i=1;i<=pos;i++)
		{
			if(temp==NULL)
			{
				cout<<"\nNo such record\n";
				return;
			}
			if(i!=pos)
			temp=temp->next;
		}
		cout<<"\nEnter name: ";
	    cin>>temp->name;
	    cout<<"\nEnter age: ";
	    cin>>temp->age;
	    cout<<"\nEnter salary: ";
	    cin>>temp->salary;	
	}
}
int main()
{
	int choice;
	do
	{
		cout << "PRESS 1:  Enter Record\n";
		cout << "PRESS 2:  Display Records\n";
		cout << "PRESS 3:  Delete any record\n";
		cout << "PRESS 4:  Search any record\n";
		cout << "PRESS 5:  Sort the list in ascending order\n";
		cout << "PRESS 6:  Update Record\n";
		cout << "Enter choice: ";
		cin >> choice;
		switch (choice)
		{
		    case 1:
		    {
				     AddRecord();
				     break;
		    }
			case 2:
			{ 
					  display();
			          break;
			}
			case 3:
			{
					  DeleteRecord();
					  break;
			}
			case 4:
			{
					  SearchRecord();
					  break;
			}
			case 5:
			{
				    Sort();
				    break;
			}
			case 6:
			{
				    UpdateRecord();
				    break;
			}
	    }
	} 
	while (choice != 7);
}














