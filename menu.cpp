#include<iostream>

using namespace std;
int main(){
		int menu = 1;
		int Maths = 1;
		int Physics =1;
		int Biology = 1;
		int Chemistry =1 ;
		int English = 1;
		bool check = false;
		 int new1;
    	int new2; 
    	int new3;
    	int new4;
    	int new5;
		int n;
		float avg;
		int num;
		cout<<"         ╭─━━━━━━━━━━━━─╮"<<endl;
		cout<<"                     MENU    "<<endl;
		cout<<"             1. Input marks   "<<endl;
		cout<<"             2. Show avarege   "<<endl;
		cout<<"             3. Edit marks   "<<endl;
		cout<<"             4. Display marks "<<endl;
		cout<<"             4.Exit"<<endl;
	    cout<<"         ╰─━━━━━━━━━━━━─╯"<<endl;
		
   do{
       cout<<"➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮➮"<<endl;
       cout<<"Enter  the number of selected menu :  ";        cin>>menu;
		
	    
	    switch(menu){
	        
	        case 1:
	        if(check==false){
	            cout<<"Enter marks of Maths : ";
	            cin>>Maths;
	            cout<<"Enter marks of Physics : ";
	            cin>>Physics;
	            cout<<"Enter marks of Chemistry : ";
	            cin>>Chemistry;
	            cout<<"Enter marks of Biology : ";
	            cin>>Biology;
	            cout<<"Enter marks of English : ";
	            cin>>English;
	            check =true;
	        }
	        else{
	            cout<<"You had already entered the marks"<<endl;
	            break;
	            
	
	        case 2:
	        
	         num=Maths+Physics+Chemistry+Biology+English;
	        avg=num/5;
	        cout<<"The average is : "<<avg<<endl;
	      
	         break;
	       case 3   : 
	         if(check==true){
	             while(true){
	                cout<<" subject mark do you want to edit "<<endl;
	                
	              cout<<"1.Maths : "<<endl;
	              cout<<"2.Physics: "<<endl;
	              cout<<"3.Chemistry: "<<endl;
	              cout<<"4.Biology: "<<endl;
	              cout<<"5.English : "<<endl;
	              cout<<"Enter the number of the subject : ";
	              
	          
	              
	             
	              cin>>n;
	              switch(n){
	                  case 1:
	                      cout<<"Enter new  new mark for maths : " ;
	                      
	                   cin>>new1;
	                   Maths = new1;
	                   break;
	                       
	                      case 2:
	                      cout<<"Enter new  new mark for Physics : " ;
	                     
	                   cin>>new2;
	                   Physics = new2;
	                   break;
	                     case 3:
	                      cout<<"Enter new  new mark for Chemistry : " ;
	                      
	                   cin>>new3; 
	                   Chemistry = new3; 
	                   break;
	                     case 4:
	                      cout<<"Enter new  new mark for Biology: " ;
	                      
	                   cin>>new4;
	                   Biology = new4;
	                   break;
	                  
	                     case 5:
	                      cout<<"Enter new  new mark for English : " ;
	                     
	                   cin>>new5;
	                   English =new5;
	                   break;
	              }
	                cout<<"Do you want to edit more"<<endl;
	              cout<<"if yes enter 1 else enter 2 :";
	              int n;
	              cin>>n;
	              if(n==2){
	                  break;
	              }
	              else{
	                  continue;
	              }
	                   
	              }
	            
	         
	         }else{
	        cout<<"You haven't entered any marks"<<endl;
	    }
	    break;
	    case 4:
   
	           cout<<"          YOUR MARKS ARE  "<<endl;
	           cout<<""<<endl;
	           cout<<"MATHS : "<<Maths<<endl;
	           cout<<"PHYSICS : "<<Physics<<endl;
	           cout<<"CHEMISTRY : "<<Chemistry<<endl;
	           cout<<"BIOLOGY : "<<Biology<<endl;
	           cout<<"ENGLISH : "<<English<<endl;
	               	   
	               	   
	             	           
	                  case 5 :
	                  cout<<"You are exited";
	                  exit(0);
	                
	              
	               }       
	               }          
	        
	  
   }
	
	while(menu);
	    
	    
	} 