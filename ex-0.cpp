#include <iostream>
#include <string>
using namespace std;
void checkPailindromString()
{
   string str = "Nitin";
   string str2 = str;
   char temp;
   for (int i = 0; i < str.length(); ++i)
   {
      temp = str[i];
      str2[i] = str[str.length() - i - 1];
      str[i] = temp;
   }

   for (int i = 0; i < str.length(); ++i)
   {
      if (str[i] == str2[i])
      {
         temp = 't';
      }
   }
   if (temp == 't')
   {
      cout << "String Is Pailindrom : " << endl;

   }
   else
   {
      cout << "Not pailindrom :" << endl;
   }
}

int main()
{
   checkPailindromString();
   return 0;
}
