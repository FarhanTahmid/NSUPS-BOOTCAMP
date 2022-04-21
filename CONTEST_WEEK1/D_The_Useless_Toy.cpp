 #include <iostream>
 using namespace std;
 
 int main()
 {
     char startChar,endChar;
     int spinNumber;
     cin>>startChar>>endChar;
     cin>>spinNumber;

     if(spinNumber%2==0){
         cout<<"undefined"<<endl;
     } 

     else if(startChar=='^'&& endChar=='>'){
         if(spinNumber%4==1){
             cout<<"cw"<<endl;
         } 
         else if(spinNumber%4==3){
             cout<<"ccw"<<endl;
         } 
     }

     else if(startChar=='^'&&endChar=='<'){
         if(spinNumber%4==1) {
             cout<<"ccw"<<endl;
         }
         else if(spinNumber%4==3){
             cout<<"cw"<<endl;
         } 
     }
     else if(startChar=='>'&&endChar=='^'){
         if(spinNumber%4==1) {
             cout<<"ccw"<<endl;
         } 
         else if(spinNumber%4==3) {
             cout<<"cw"<<endl;
         }
    }



     else if(startChar=='>'&&endChar=='v'){
        if(spinNumber%4==1) {
            cout<<"cw"<<endl;
        }
        else if(spinNumber%4==3) {
             cout<<"ccw"<<endl;
        }
     }

     else if(startChar=='v'&&endChar=='>'){
         if(spinNumber%4==1){
             cout<<"ccw"<<endl;
         }
         else if(spinNumber%4==3){
             cout<<"cw"<<endl;
         } 
     }


     else if(startChar=='v'&&endChar=='<'){
         if(spinNumber%4==1) {
              cout<<"cw"<<endl;
         } 
         else if(spinNumber%4==3){
            cout<<"ccw"<<endl;
         } 
     }

     else if(startChar=='<'&&endChar=='^'){
         if(spinNumber%4==1){
            cout<<"cw"<<endl;
         } 
         else if(spinNumber%4==3){
             cout<<"ccw"<<endl;
         } 
     }
     else if(startChar=='<'&&endChar=='v'){
         if(spinNumber%4==1){
             cout<<"ccw"<<endl;
         } 
         else if(spinNumber%4==3){
             cout<<"cw"<<endl;
         }
     }
     return 0;
 }