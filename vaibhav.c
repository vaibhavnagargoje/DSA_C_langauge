#include<stdio.h>


// int main()
// {
//     int  a,b,c;
//     a=5;

// printf("enter the num");
  
//   scanf("%d",&b);
//   c=b-a;
//   printf("%d - %d = %d",b,a,c);


// return 0;
// }





// //calculate two numbers addission 

// #include <stdio.h>


// int calculate(int a, int b)
// {

// int sum ; 
//  sum = a+b ;
//   return sum ;


// }

// int main ()
// {
// int a ;
// int b ;


// printf("inter the value value =");


// scanf("%d%d",&a,&b);

// int ans= calculate(a,b);
// printf("ans= %d",ans);

// return 0;

// }





// // if else statment 
// #include <stdio.h> 


// int main ()
// {
//  int a ;

//  printf("enter a value :");
//  scanf("%d",&a);

// if(a==0)
// {printf("a=0");
// }
// else if( a>=0)
// {
//   printf("a is positive number");

// }

// else{

//   printf("a is negative number");

// }
 

// return 0;

// }










// do while loop 

// #include<stdio.h>
// int main ()
// {
// int d=10,b=1;
// char a;
//   printf("press y for 1 to 10 & press b for 10 to 1:");

//   scanf("%c",&a);
  
//   if (a=='y')
//   {
      
//       do{
//           printf("%d\n",b);
//           b=b+1;
//         }while (b<=10);

//   }

//   else if ( a=='n')
//   {  
//     do {printf("%d",d);
//       d=d-1;
//     }while(d<10);
  
//       return 0;
  
//   }
// }



// // rasult printing using c langauge 

// #include<stdio.h>

// int main ()
// {
// int sub1,sub2,sub3;
// printf("enter your mark \n");
// printf("math\n");
// scanf("%d",&sub1);
// printf("physcis:\n");
// scanf("%d",&sub2);
// printf("chemestry:\n");
// scanf ("%d",&sub3);


// if((sub1+sub2+sub3)/3>=35)
//   printf ("your total mark is %d",sub1+sub2+sub3);
  
// else
// printf("you are fail");


// }



// #include <stdio.h>
// int fourmula(int a, int d, int n) {
//    // using formula to find the
//    // Nth term t(n) = a(1) + (n-1)*d
//    return (a + (n - 1) * d);
// }
// //main function
// int main() {
   
//    int a ,d ,n ;
//    scanf("%d",&a);
//    scanf("%d",&d);
//    scanf("%d",&n);

   
//    printf("The %dth term of AP :%d\n", n, fourmula(a,d,n));
//    return 0;
// }









// // write a program to find 1st 10  natural numbers 

// #include<stdio.h>

// int main ()
// {
// int a=10;
// do {

//   printf("%d\n",a);
//   if (a==5)
//     break;
//   a--;

// }while(a>=0);

// return 0 ;
// }




#include<stdio.h>
// int main()
// {
// printf("press f for female and m for male:");
// char sex;
// scanf("%c",&sex);
// int sal,bonus_1=0;
// printf("enter your selery");
// scanf("%d",&sal);

// if (sal<=10000)
//   {
//     bonus_1=sal*0.02;
//   }
// if (sex=='f')

// {
//   int bon;
//   bon=sal*0.10;
//   printf("total pay for felamle %d",bon+sal+bonus_1);
// }
// else if ( sex=='m')
// {
//   int bon;
//   bon=sal*0.05;
//   printf("total salery + bonus :%d",sal+bonus_1+bon);
// }
// }










// // function 

// #include<stdio.h>
// int two_number_sum(int a, int b)

//  {
// int c ;
// c= a+b;
// return c;


//  }

//  int main()
//  {
//     int a ,b, ans;
//    printf("enter  two number for addision:");
//    scanf("%d%d",&a,&b);
//   ans=two_number_sum(a,b);
//   printf("the sum of two numbers is %d",ans);
//    return 0;

//  }









// write a function for calculate a 3 number of average 

// # include<stdio.h>
// int average()

// {
// int a,b,c ; 
// float ans;
// printf("enter a 3 number for calculating the average:\n");
// printf("enter a 1st number:\n");
// scanf("%d",&a);
// printf("enter a 2nd number:\n");
// scanf("%d",&b);
// printf("enter a 3rd number:\n");
// scanf("%d",&c);
// ans=(float)(a+b+c)/3;
// printf("the given number of average is =%.2f",ans);
// return ans;
// }

// int main()
// {

// average();
// return 0;

// }



// #include<stdio.h>
// void  vowel(char a)
// {
//     if (a=='a' || a=='e' || a=='i'|| a=='o' || a=='u')
//     {

//         printf("this %c is in vowel",a);
//     }
//  else 
//  printf("not in vowel");
// }
// int main(){
//     char ch;

//     printf("enter a charecter for cheak for vowel");
//     scanf("%c",&ch);
//     vowel(ch);
// }


// // write a programe to check the number from devesibal by 3 & 5

// #include<stdio.h>
// int main()
// {
//     int num ;
//     int *a = &num;
//     printf("enter a number:");
//     scanf("%d",&*a);
//     if (num%3==0 && num%5==0)
// {
//     printf("this is dvisibal by 3 or 5");

// }
// else 
// printf("not divisibal by 3 or 5");

// return 0;

// }





// array 
/// programe to take from the user and store them in an array 
// print the element stored in the array
// #include<stdio.h>
// int main(){
//     int arr_1[5];
//     printf("enter 5 interger value \n");
//     for(int i = 0; i<5; i++){
//         scanf("%d",&arr_1[i]);
//     }
//     //printing element of an array 
//     for(int a = 0; a<5;a++)
//     {
//         printf("\n%d",arr_1[a]);
//     }

//     }








// // programe to find the average of a numbers using arrays
// #include<stdio.h>
// int main()
// {
//     int marks[10] , n , average ,sum;
//     printf("enter number of elements:");
//     scanf("%d",&n);
//     for(int i = 0; i<n;i++){
//         printf("enter a value:%d \n",i);
//         scanf("%d",&marks[i]);
//         sum+=marks[i];
//     }
//     average= sum/n;
//     printf("Agerage=%d",average);
//     return 0 ;
// }




// #include<stdio.h>
// int main()
// {
// int num1,num2,a;
// printf("enter a of num1 ,num2 respectively");
// scanf("%d%d",&num1,&num2);
// a = num1;
// num1=num2;
// num2=a;
// printf("after swaping a value\n");
// printf("num1=%d\nnum2=%d",num1,num2);
// return 0;

// }






// #include<stdio.h>
// int main (){
//  char ab ;
//  printf("Alfabates from a-z:\n");
//  for (ab='a';ab<='z'; ab++){
//      printf("%c ",ab);
     

//  }

// return 0 ;
// }



// write a c program to print ASCII value of all characters
// void
// int main (){
//  char ab ;
//  printf("Alfabates from a-z:\n");
//  for (ab='A';ab<='Z'; ab++){
//      printf("%c is %d \n ",ab,ab);
     

//  }

// return 0 ;
// }


// #include<stdio.h>

// void main()
// {
// int numbers[10],num,i,b,j;
// printf("enter a total value of num: ");
// scanf("%d",&num);
// printf("\n enter the numbers:");

// for (i=0; i<num; i++){
    
//     scanf("%d",&numbers[i]);

// }
// for ( i= 0; i<num;i++){
//     for( j = i+1 ; j<num; j++){
//         if(numbers[i]>numbers[j])
//         {
//             b=numbers[i];
//             numbers[i]=numbers[j];
//             numbers[j]=b;

//         }
//     }
// }
// for (i= 0; i<num; i++){
//     printf("%d\n",numbers[i]);
// }
// }

//string printing in c 

// #include<stdio.h>
//     int main()
//     {
//         char info[]= "hello vaibhav";
//         printf("%s\n",info);
//         return 0;

//     }





// // write a programe to find string length without function in C - using while loop 
// #include<stdio.h>
// int main()
// {
//     char string1[60] = "mai hu pagal";
//     int i= 1;
//     while(string1[i]!='\0'){
    
//         i++;
//     }
//     printf("the length of %s is %d",string1,i);

//     return 0;
// }

//// programe to count character occurrent in C 


// #include<stdio.h>

// int main(){
// char s1[]= "hello i am vaibhav & i love someone";
// char ch ;
// int count =0;

// printf(" inter any charecter for check for in apppear in string:");
// scanf("%c",&ch);

// for( int i ; s1[i]!='\0'; i++)
// {
// if (s1[i]==ch)
// {
//     count++;

// }
// }
// if (count>0){
//     printf("%c appers %d time in------%s", ch,count,s1);

// }
// else{
//     printf("%c in not appear------- in %s ", ch,s1);

// }
// return 0;
// }




// //count a vowels  in given string
// #include<stdio.h>
// int main(){
// char s1[]="mai";
// int vowels= 0, consonants=0;
// for(int i = 0 ;s1[i]!='\0'; i++){
//     if (s1[i]=='a'|| s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u' ){
//         vowels++;
// }
//     else {
//     consonants++;
//     }
// }
// printf("%s contains %d vowals and %d consonants.", s1,vowels, consonants);
// return 0 ;
// }











////// traversion and insersion array made  by vaibhav pro heheheheehheh


// #include<stdio.h> // do not copy this code 

// void dis( int arr[], int a)  // traversal array 
// {
// for ( int i = 0; i < a; i++)
// {
//     printf("%d ",arr[i]);
// } 

// printf(" \n");

// }
// int insersion( int array1[], int size, int element,int capecity, int index){ // for insersion  

//     if (size >= capecity)
//         {
//             return -1;
//         }
//     for (int x= size -1; x >= index; x--)
//     {
//         array1[x+1] = array1[x];
//     }
//     array1[index] = element;
//     return 1 ;
// }
// int main( ) 
// {   
//     int array1[100]= {1,3,5,2,4,9};
    
//     int size= 6, element=44, index = 3;
//     dis(array1,size);
//     printf("after insering a value\n");
//     insersion(array1,size,element,100,index);
//     size+=1;
//     dis(array1,size);

// return 0 ;
// }







// #include<stdio.h>

// void reverce_function( int * arr , int n){
//     int tempo;
//     for ( int i = 0 ; i <(n/2); i++)
//     {
//         tempo = arr[i];
//         arr[i]= arr[n-i-1];
//         arr[n-i-1]=tempo;

//     }
// }
// int main ()
// {
//     int array[]= {1,2,3,4,5,6,8,9};
//     int size = sizeof(array)/sizeof(int);
//     for (int i= 0; i < size;i++)
//     // before reversal array

//     {
//         printf(" %d ,",array[i]);
//     }
//     // after reversal
//     printf("\n");
//     reverce_function(array,size);
//     for (int i = 0; i<size;i++){
//         printf(" %d ,",array[i]);
//     }
//      // printf("size=%d",size);
// }






// #include<stdio.h>
// // #include<stdlib.h>
// #include<string.h>

// struct  nokar{
//     int id;
//     float selery;
//     char name[20];

// };
// int main ()
// {
// //     int a= 33323;
// //     struct nokar n1;
// //      n1.id= 4545;
// //     printf("%d",n1.id);
// struct nokar n1;
// n1.id= 4324;
// n1.selery= 64433.6;
// // n1.name = "vaibhav";// nothing work
// strcpy(n1.name, "vaibhav");

// printf("%s \n",n1.name);
// printf("%d \n",n1.id);
// printf("%0.2f \n",n1.selery);


// return 0;





// ///// pointer structure 
// #include<stdio.h>
// #include<string.h>

// struct room {
//     int no;
//     int tbed;
//     float rent;
// };
// int main (){
//     struct room r1 ;
//     struct room *a;
//     a=&r1;

//     a-> no = 399;
//     printf("%d",r1.no);

//     a-> tbed = 3;
//     printf("\n %d ",r1.tbed);
//     a-> rent = 7.3;
//     printf("\nand rent is %0.2fK for one day ",r1.rent);


//     return 0 ;

// }










// // linked list traversal 
// #include<stdio.h>
// #include <stdlib.h>
// struct block{
//     int value ;
//     struct block *next;

// };

// void traversallinkedlist( struct block *A){
//     while ( A != NULL)
//     {
//         printf(" value is in linked list : %d \n",A-> value );
//         A = A-> next;
//     }

// }
// int main (){
//     struct block *head;
//     struct block *second;
//     struct block *third;
//     struct block *fourth;
//     head =(struct block*) malloc(sizeof(struct block));
//     second=(struct block*) malloc(sizeof(struct block));
//     third=(struct block*) malloc (sizeof(struct block));
//     fourth=(struct block*) malloc (sizeof(struct block));

//     head -> value = 10 ;    //(*head).value = 10;
//     head -> next = second ;

//     second -> value = 20;
//     second -> next= third;

    
//     third ->  value = 30;
//     third -> next = fourth ;

//     fourth -> value = 40;
//     fourth -> next = NULL;

//     traversallinkedlist(head);
    
//     return 0;

// }


////////////   linked list insersion frist , index and last 

// #include<stdio.h>
// #include<stdlib.h>

// struct listnode {
//     int data;
//     struct listnode *nextpt;


// };

// void printlinkedlist(struct listnode *pt){
//     while (pt != NULL){
//         printf ("\nelement  %d ",pt-> data);
//         pt = pt -> nextpt ;

//     }
// }



// // insert node first:
// struct listnode  *insertfrist( struct listnode *head , int data ){
//     struct listnode *pt = (struct listnode *)malloc (sizeof (struct listnode));
//     pt -> data = data ;
//     pt -> nextpt = head ;
    
//     return pt ;

// }

// struct listnode * indexinsert(struct listnode *head , int data, int index){

// struct listnode *pt= (struct listnode *)malloc (sizeof(struct listnode));
// struct listnode *p = head;

// for (int i =0; i!= index ; i++){
//     p = p->nextpt;

// }
// pt-> data = data;
// pt -> nextpt = p-> nextpt;
// p->nextpt = pt;
// return head ;
// };



// int main(){
//     struct listnode *head;
//     struct listnode *second;
//     struct listnode *third;
//     struct listnode *fourth;

// // allcate memory for nodes in the linked list in heap 

// head = (struct listnode*) malloc (sizeof (struct listnode));
// second = (struct listnode *) malloc (sizeof(struct listnode));
// third = (struct listnode*)malloc (sizeof (struct listnode));
// fourth = (struct listnode * )malloc (sizeof (struct listnode));

// //linking 
// head -> data = 45;
// head -> nextpt = second;


// second -> data =  50;
// second -> nextpt = third;

// third -> data = 60 ;
// third -> nextpt = fourth;

// fourth -> data = 70 ;
// fourth -> nextpt = NULL;
// printf("linked list :");
// printlinkedlist(head);

// printf("linked list after insertion \n :");
// insertfrist( head , 10);
// head = insertfrist(head, 5);
// printlinkedlist(head);
// head = indexinsert(head, 433,2);
// printlinkedlist(head);

// return 0;
// }











// //////// deletion link list node 


// # include<stdio.h>     /// do not copy this code 
// #include<stdlib.h>                 // make your own programe 

// struct node{                      // define stucture 
//     int data ;
//     struct node * next;
// };
// void linkedlist (struct node * pt)   // void function for printing linled list 
// {
//     while(pt != NULL)    
//     {
//         printf("value is : %d \n", pt->data);
//         pt = pt->next;
//     }    
// }

// struct node * deletfristnode ( struct node *head)         // struct deletfristnode for function for deletiong 1st node 
// {
//     struct node *p = head;
//     head = head -> next;
//     free (p);
//     return head ;
// }
// int main ()                                               
// {
//     struct node * head;              // creating node 
//     struct node * second;
//     struct node * third;
//     struct node *four;

//     head = (struct node * )malloc(sizeof(struct node));   // locating dynamically  memory for linked list node 
//     second = (struct node*)malloc (sizeof(struct node));
//     third = (struct node*)malloc ( sizeof (struct node));
//     four= (struct node*)malloc ( sizeof (struct node));
   
//     head -> data =17;             //linking node each other            
//     head -> next= second;

//     second -> data= 24 ;
//     second -> next = third;

//     third -> data= 34;
//     third -> next = four;

//     four  -> data = 43;
//     four -> next = NULL;


//     printf("\n******linked list printing ********\n");
//     linkedlist(head);                                   // calling linkid linked function and passing only  head argument 

//     printf("\n****** deleting frist node ********\n");
//     head= deletfristnode(head);                         // pass head argument 
//     linkedlist(head);
// return 0;
// }











// # include<stdio.h>
// #include<stdlib.h>

// struct node 
// {
//     float data ;
//     struct node *next;

// };

// void printlinklist( struct node *head)
// {
//     while( head != NULL)
//     {
//         printf( "value is :%0.1f \n",head->data);
//         head = head -> next;
//     }

// }



// struct node *deletelast( struct node *head)
// {
//     struct node *pt1 = head;
//     struct node *pt2= head ->next;

//     while ( pt2 -> next !=NULL)
//     {
//         pt1 = pt1->next;
//         pt2 = pt2-> next;
//     }
//     pt1 -> next= NULL;
//     free (pt2);
//     return head;

// }

// struct node * insertfrist( struct node *head, int value)
// {
//     struct node *a= (struct node *)malloc(sizeof(struct node ));
//     a-> next = head;
//     a -> data= value;
//     return a;
// }



// struct node  *deletindex( struct node *head, int index)
// {
//     struct node *pt1 = head;
//     struct node *pt2 = head->next;
    
//     for( int i = 0 ;i < index ; i++)
//     {
//         pt2 = pt2-> next;
//         pt1 = pt1-> next;
//     }
//     pt1 -> next = pt2->next;
//     free(pt2);
//     return head;

// }
// int main ()
// {
//     struct node * head;
//     struct node * second;
//     struct node * third;
//     struct node * fourth ;
//     struct node * fifth;
    
    
//     head = (struct node *) malloc ( sizeof(struct node));
//     second= (struct node *) malloc (sizeof (struct node));
//     third= (struct node * ) malloc (sizeof (struct node));
//     fourth= (struct node * ) malloc ( sizeof(struct node));
//     fifth = (struct node* )malloc(sizeof(struct node));


//     head->data =5.5;
//     head -> next= second;

//     second -> data = 10.4 ;
//     second -> next = third;

//     third -> data = 30.6;
//     third -> next = fourth;

//     fourth -> data = 40.4;
//     fourth -> next = fifth;
    
//     fifth ->data = 50.6 ;
//     fifth -> next = NULL;


    
     
//         printf("********** printing linked list ********\n");

//         printlinklist(head);

//         printf("********** after delete last node  ********\n");
//         head= deletelast(head);
//         printlinklist(head);

//         printf("********** delet in beetween  node  ********\n");
//         head = deletindex(head,3);
//         printlinklist(head);

//         printf("********** insert frist node  ********\n");
//         head = insertfrist( head, 45.5);
//         printlinklist(head);

//         printf("********** deleting in node from index ********\n");

//         head =deletindex(head, 2);
//         printlinklist(head); 



//         return 0 ;
// }








// /// array sorting

// #include<stdio.h>


// void arrayprint( int arr[] , int num)  // normal array print 
// {
//     for (int i = 0 ; i<=num; i++)
//     {
//         printf("\n %d element is %d ",i , arr[i]);
//     }
// }


// void sortedarray( int *arr,int num)
// {
//     int temp;
//     for (int i = 0; i<num; i++)
//     {
//         for(int j= i+1; j<num;j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 temp= arr[i];
//                 arr[i]=arr[j];
//                 arr[j]= temp;

//             }
//         }
//     }
//     printf("\narray sorted sucssesfully\n");
// }
// int main()
// {
//     int num;
//     int arr[100]={};
//     printf("\n how many you want to add element to this array: ");
//     scanf("%d",&num);

//     for (int i=0;i<num; i++)
//     {
//         printf("\nenter %d index element:",i);
//         scanf("%d",&arr[i]);
//     }

    
//     printf("\narray lodded succesfully\n");
//     int A;
//     printf("\npress 1 for normal array print & press 2 for sorted array print:");
//     scanf("%d",&A);
//     arrayprint(arr,num);

//     sortedarray(arr,num);
//     arrayprint(arr,num);


//     return 0 ;
// }


// ////sum of all digit


// #include<stdio.h>
 
//  int main(){

//  int num ,sum ,digit;
//  printf("enter a number ;");

//  scanf("%d",&num);
//  while(num!=0)
//  {

//      digit=num%10;

//      sum= sum+digit;
//      num=num/10;
//  }
 
//  printf("the sum of total number is %d",sum);
//  return 0;
// }



// // max digit

// #include<stdio.h>
// int main ()
// {
//     int num,digit,max;
//     printf("enter a number ");
//     scanf("%d",&num);
    
//     while (num!=0)
//     {
//         digit = num%10;
//         if (digit > max)
//             {max= digit;
//             }
        
//         num=num/10;

//     }
// printf("maximaum number is %d",max);
// return 0;
// }




// //////////DIFFRENCE  between maximum and minimum

// #include<stdio.h>

// int main ()
// {
//     int num, max,digit ,min;
//     min=9;
//     printf("enter a number");
//     scanf("%d",&num);

//     while(num!=0)
//     {
//         digit = num%10;

//         if(digit > max)
//         {
//             max = digit;
//         }
//         if (digit<min)
//         {
//             min = digit;
//         }
//     num= num/10;
//     }


//     printf("the diffrence is %d",  min);
//     return 0;
// }








// ////////////linked list  insert node frist 


// #include<stdio.h>
// #include<stdlib.h>

// struct node 
// {
// int value ;
// struct node *next;



// };


// struct node *insertatfrist(struct node *head, int data )
// {
//  struct node *p1;
//  p1 = (struct node* )malloc ( sizeof(struct node ));

//  p1-> next =head;
//  p1 -> value = data;

//  return p1;


// }


// struct node * insertlast( struct node * head, int data)
// {

//     struct node * p1= (struct node*)malloc(sizeof(struct node));

//     p1-> value = data;

//      struct node *p2 = head;

//     while (p2-> next !=NULL)
//     {
//         p2= p2-> next ;

//     }
//     p2-> next = p1;
//     p1-> next = NULL;
//     return head;
    
    
// }


// void linkedlist(struct node * head)
// {
//     while(head != NULL)
//     {
//         printf("value is :%d\n",head->value);
//         head= head->next;
//     }

// }

// int main()
// {


//     struct node * head;
//     struct node * second ;
//     struct node * third;

//     head = (struct node*)malloc ( sizeof(struct node));
//     second = ( struct node*)malloc(sizeof (struct node));
//     third = (struct node *)malloc ( sizeof ( struct node));


//     head -> value = 15;
//     head -> next = second;

//     second -> value = 20;
//     second -> next = third;

//     third -> value = 30;
//     third -> next = NULL;


//     linkedlist(head);
//     int val,val2;

//     printf ( "press 1for inset frist  value in linked list ");
//     scanf("%d",&val);
//     int addval;
//     while (val==1)
//     {
//         printf("enter value;");
//         scanf("%d",&addval);
//         head= insertatfrist(head,addval);
//         printf("press 1 for continue adding node or press 2 for  stop this \n");
//         scanf("%d",&val);
//     }
// linkedlist(head);




// // scanf("%d",&val);
// // head= insertlast(head, val);

// linkedlist(head);



// }


















///////////////////////////////////////////////////////////                 stack           /////////////////////////////////////////////

// #include<stdio.h>
// #include<stdlib.h>


// struct stack
// {
//     int size;
//     int top;
//     int *arr;

// };




// //// isempty function creation

// int isempty(struct stack *ptr)
// {
//     if (ptr->top ==-1)
//     {
//         printf("stack is empty\n");
//         return 1;
//     }
//     else
//     {
//         printf("stack is not empty \n");
        
//     }
// }


// ///// is full function 

// int isfull(struct stack *ptr)
// {
//     if(ptr->top == ptr-> size -1)
//     {
        
//         return -1;

//     }

//     else
//     {
        
        
//         return 1;
//     }

// }

// //create push function 
// void push (struct stack *ptr , int val)
// {
//     if(isfull(ptr))
//     {
//         printf("stack overflow ......\n");
//     }


//     else
//     {
//         ptr-> top++;
//         ptr->arr[ptr->top] = val;
        
//     }
// }



// /// create pop function for retriving  value fron=m stack 

// int pop (struct stack *ptr) 
// {
//     if (isempty(ptr))
//     {
//         printf("stack is underflow ......\n");
//         return -1  ;    // -1 for int functon somthing is return 
//     }

//     else
//     {
//         int val = ptr-> arr[ptr->top];
//         ptr -> top--;
//         return val;
//     }



// }

// int main()
// {
//     struct stack *sp = (struct stack *) malloc ( sizeof(struct stack));

//     sp-> size = 100;
//     sp-> top = -1;
//     sp -> arr= (int*)malloc(sp->size * sizeof(int));
//     printf("\nstack create succesfully\n");

//     // isempty(sp);
//     // isfull(sp);


//     push(sp,41);
    
//     return 0 ;

// }


















// /////stack all operations 


// #include<stdio.h>
// #include<stdlib.h>


// // define a "struct stack"
// struct stack 
// {
//     int size ;
//     int top;
//     int *arr;

// };


// // create a isfull function 

// int isfull( struct stack * pointer)
// {
//     if (pointer-> top == pointer -> size -1)
//     {
//         // printf("stack is overflow\n");
//         return -1;

//     }

//     else
//     {
//         // printf(".................stack is not a overflow , you can add another value\n");
//         return 0;
        
//     }
// }

// // create  isempty function for cheack stack is empty or not 

// int isempty( struct stack *pointer)
// {
//     if ( pointer -> top ==-1)
//     {
//         // printf("stack is underflow\n");
//         return 1;
//     }
//     else 
//     {
//         // printf("stack is not underflow\n");
//         return 0;
//     }
// }


// // creating a void  push function for adding a value in stack

// int push( struct stack * pointer , int value)
// {
//     if (isfull(pointer))
//     {
//         isfull(pointer);
//     }

//     else 
//     {
//         pointer->top++;
//         pointer -> arr[pointer->top]= value;
//     }
// }



// // creating int pop function for  accesessing  stack value 
// int peek ( struct stack*stackpointer,int pointer)
// {
//     int arrayindex = stackpointer->top - pointer +1;
    
//     if (arrayindex<0)
//     {
//         printf("invalid position");
//         return -1;

//     }
//     else 
//     {
//         return stackpointer->arr[arrayindex];
//     }
// }



// // creating a pop fucntion for poping a value 
// int pop (struct stack* pointer)
// {
//     if (isempty(pointer))
//     {
//         printf("this struct is underflow! canoot pop ");
//         return -1;

//     }
//     else
//     {
//         int data = pointer-> arr[pointer->top];
//         pointer -> top--;
//         return data;
//     }
    
// }




// int main()
// {
//     struct stack *stackpointer= (struct stack *)malloc ( sizeof ( struct stack));
//     stackpointer -> size = 20;
//     stackpointer -> top = -1;
//     stackpointer -> arr= (int*) malloc (stackpointer-> size * sizeof(int));

//     printf("\n***************stact created successfully********* \n");



//     // calling is empty or is empty or is full function or passing stackpinter argument
//     isfull(stackpointer);
//     isempty(stackpointer);


//     // calling push function for pushing a value in stack 

//     push(stackpointer,10);
//     push(stackpointer,30);
//     push(stackpointer,40);
//     push(stackpointer,50);
//     push(stackpointer,60);
//     push(stackpointer,70);
//     push(stackpointer,80);
//     push(stackpointer,90); // please remember stack is working  in LIFO method // last in frist out ;



//     //calling pop fuction of poping a value 
//     // pop(stackpointer);
//     // pop(stackpointer);
//     // pop(stackpointer);
//     // pop(stackpointer);
//     // pop(stackpointer);        // pop poping top most element from stack 
    

//     // printf(" the value is %d",peek(stackpointer,3));


//     // printing value from stack
//     for ( int i = 1; i <=stackpointer->top +1 ; i++)
//     {
//         printf("the value at position %d  is %d \n",i, peek(stackpointer,i));
//     }


// return 0 ;
// }















// //// addision arry element


// #include<stdio.h>


// int main ()
// {   
//     int num;
//     printf("how many you want element-");
//     scanf("%d",&num);

//     int arr[num];

//     for(int a= 0; a<num; a++)
//     {
//         printf("\nenter %d element:",a+1);
//         scanf(" %d",&arr[a]);
//     }

//     printf("********array insersion seccesfully*******");
//     int sum=0;
//     for (int a = 0; a<num; a++)
//     {
//         sum= sum+arr[a];
//     }
//     printf("\nans = %d",sum);
// }

















// queue 


#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int size;
    int front;
    int rear;
    int *array;

};

int isempty(struct queue *q)
{
    if(q->rear==q->front)
    {
        return 1; // return 1 for this condision is true or queue is empty
    return 0; ///return 0 for this this queue is not empty
}
}


int isfull(struct queue *q)
{
    if(q->rear==q->size-1)
    {
        return 1 ;  // return 1 means  this queue is full 
    }
   
    return 0 ;  // return 0 means the  this queue is not full 
    
}






void enqueue(struct queue * q,int data)
{
    if(isfull(q))
    {
    printf("this queue is full \n");

    }
    else
    {
        q-> rear++;
        q->array[q->rear]=data;
        printf("element added: %d\n",data);
    }

}


int dequeue( struct queue*q,int el)
{
    int a = -1 ;
    if(isempty(q))
    {
        printf("this queue is empty\n");

    }
    else
    {
        q->front++;
        a=q->array[q->front];
        printf("element dequeue %d \n",el);
    }
    return a;
}

int main()
{
struct queue q;
q.size = 50;
q.front =q.rear= 0;
q.array=(int*)malloc(q.size*sizeof(int));


// inqueue element

enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
enqueue(&q,40);
enqueue(&q,50);


printf("dequeing element %d \n",dequeue(&q,q.rear));
printf("dequeing element %d \n",dequeue(&q,q.rear));
printf("dequeing element %d \n",dequeue(&q,q.rear));










}



























