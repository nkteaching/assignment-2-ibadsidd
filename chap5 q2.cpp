#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;	
};
class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void createnode(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
				tail->next=temp;
				tail=temp;
			}
		}
		node* gethead()
    	{
        	return head;
    	}

    
    	int count_nodes(node *head)
    	{
    		static int count=0;
        	if(head == NULL)
        	{
            	return count;
        	}
        	else
       		{
            	
            	count++;
            	count_nodes(head->next);
        	}
    	}
		
};
int main()
{
	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	cout<<obj.count_nodes(obj.gethead());
	
	return 0;
}
