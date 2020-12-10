/* Question 1
 [C Programming]
 [30 Marks]
In this question, you are required to implement a linked list in C
The question has four parts, answer all of them in this same file*/
 
/*(a) [5 Marks] write structure Node that holds an integer value as well as a pointer to the next node*/
//Answer:

struct Node{
	int data;
	struct Node*next;
}




/*(b) [5 Marks] Write structure SLL that represents the singly linked list and holds a pointer to the first node in the list.*/
//Answer:
struct Node{
	int data;
	struct Node*next;
}

struct node *head;








/*(c) [10 Marks] write function searchList, that takes as input two parameters: the head of a linked list "head" and the integer value to search for "target" and 
returns:
1 if the target was found in the list
0, otherwise*/
//Answer:
int searchList(int target)
{
struct node *ptr;
int i=0,indicator;
ptr = head;   
if(ptr == NULL)
{
return 0;
}
else
{   
while (ptr!=NULL)
{
if(ptr->data == target)
{
return 1;
indicator=0;
}   
else
{
flag=1;
}
i++;
ptr = ptr -> next;
}
if(indicator==1)
{
return 0;
}
}   
return 0;   
}



  
/*(d) [10 Marks] test your function in main by creating a list of 10 nodes and then call the searchList function to search for a certain value, make sure you check 
the correctness of the returned value from the function by comparing it against what you expect. */
//Answer:

void insert(int number)
{
struct node *ptr,*temp;
ptr = (struct node*)malloc(sizeof(struct node));
int main(){
	int target;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	insert(10);
	
int searchList(1);
int searchList(50);	
	
	
	
	
	
	
	
	
	
	
	
	

}
