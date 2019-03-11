#include<iostream>
#include<vector>
#include<string>

int all_equal(std::string s){
int flag=0;
  for (int i=0;i<s.size();i++){
    if(s[0]!=s[i])
      flag=1;
  }

  return flag;
}



std::string erase(std::string s) {
 std::string s2;
  for (int i = 0; i < s.size(); i++) {
    if (s[i]!=s[0]) {
      s2 += s[i];
    }
  }


 return s2;

}

int patternmatcher(std::string s){

std::string s1;
std::string s2;
int x1;
int x2;
int flag=0;

for (int i=0;i<s.size();i++){

  if(i%2==0)
  s1+=s[i];
  else
  s2+=s[i];
}


  for (char x:s1){

    std::cout<<x<<"\n";
  }

   for (char x:s2){

    std::cout<<x;
  }



x1=all_equal(s1);
x2=all_equal(s2);

if((x1 or x2)==1){

  flag=1;
}


  return flag;
}

int main(){

int flag=0;
std::string s1="beabeefeab";

int status=1;

while(status!=0)
{
 s1=erase(s1);
 if(s1.size()<2){
  flag =1;
  break;
 }

 //pass to check pattern
status=patternmatcher(s1);

}


if(flag){
  std::cout<<"not posible";
}
else
std::cout<<"possible";




//bool x=(s1==s2);

//std::cout<<status;




  return 0;
}

