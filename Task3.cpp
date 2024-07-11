#include<iostream>
using namespace std;
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int rows;
int columns;
 string n1,n2;
char token='x';
bool tie=false;
void fone(){

    cout<<"   |     | \n";
    cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"   | "<<space[0][2]<<endl;
    cout<<"___|_____|___\n";
    cout<<"   |     | \n";
    cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"   | "<<space[1][2]<<endl;
    cout<<"___|_____|___\n";
    cout<<"   |     | \n";
    cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"   | "<<space[2][2]<<endl;
    cout<<"   |     | \n";
    cout<<"\n"<<endl;
}

void ftwo(){
int digit;
if(token=='x'){
    cout<<n1<<" please enter:";
    cin>>digit;
}
else{
    cout<<n2<<" please enter:";
    cin>>digit;
}

if(digit==1){
    rows=0;
    columns=0;
}
else if(digit==2){
    rows=0;
    columns=1;
}
else if(digit==3){
    rows=0;
    columns=2;
}
else if(digit==4){
    rows=1;
    columns=0;
}
else if(digit==5){
    rows=1;
    columns=1;
}
else if(digit==6){
    rows=1;
    columns=2;
}
else if(digit==7){
    rows=2;
    columns=0;
}
else if(digit==8){
    rows=2;
    columns=1;
}
else if(digit==9){
    rows=2;
    columns=2;
}
else{
    cout<<"Invalid!"<<endl;
}
if(token=='o' && space[rows][columns] !='x' && space[rows][columns] !='o'){
    space[rows][columns]='o';
    token='x';
}
else if(token=='x' && space[rows][columns] !='x' && space[rows][columns] !='o'){
    space[rows][columns]='x';
    token='o';
}
else{
    cout<<"There is no empty space"<<endl;
}
}
bool fthree(){
    for(int i=0;i<3;i++){
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i]){
            return true;
        }
    }
    if(space[0][0]==space[1][1] && space[0][0]==space[2][2] || space[2][0]==space[1][1] && space[2][0]==space[0][2]){
        return true;
    }
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j]!='x' && space[i][j]!='o'){ 
             return false;
            }
        }
    }
     tie=true;
    return true;
}

void four(){
    cout<<"Enter the name of first player:";
    getline(cin,n1);
    cout<<"Enter the name of second player:";
    getline(cin,n2);
    cout<<n1<<" is first so he will play first"<<endl;
    cout<<n2<<" is second so he will play second"<<endl;

    while(!fthree()){
        fone();
        ftwo();
        fthree();
    }

    if(token=='x' && tie==false){
        cout<<n2<<" Wins!"<<endl;
    }
    else if(token=='o' && tie==false){
        cout<<n1<<" Wins!"<<endl;
    }
    else if(tie){
        cout<<"Its a draw"<<endl;
    }
}
int main(){
    four();
    return 0;
}