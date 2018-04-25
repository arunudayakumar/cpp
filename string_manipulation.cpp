#include<iostream>
#include<string>

int main()
{
//-------------------------------------------------------------------------------------------------------
//Comparing the Strings using strcmp()
int result = strcmp( argv[1], argv[2] ); 
if ( result == 0 )
      printf( "\"%s\" is identical to \"%s\"\n", argv[1], argv[2] );
else if ( result < 0 )
      printf( "\"%s\" is less than \"%s\"\n", argv[1], argv[2] );
else
      printf( "\"%s\" is greater than \"%s\"\n", argv[1], argv[2] );
//-------------------------------------------------------------------------------------------------------
//Find substring using find()
std::string str1 ("Apple and Orange are different");
std::string str2 ("Orange");
//if size_t = -1 then it assumes the largest possible value (4294967295 in my compiler)
//std::string::npos is a constant which represent -1
size_t found =str2.find(str1);
if (found != std::string::npos)
    std::cout<<"The substring is found"<<'\n';
//-------------------------------------------------------------------------------------------------------




}
