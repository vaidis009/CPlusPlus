//Vaidas Siupienius
//18.11.16

//5) Write an application called SHUFFLE.CPP that will search a string  for a single ‘*’ character which
// may or may not be present. If the asterisk is present the string will be copied to another string in such a
// way that all that came after the ‘*’ will now come first, followed by the ‘*’, followed by all that originally
// came before the ‘*’. In other words, the two parts of the string separated by ‘*’ will be swapped. If there is no
//  asterisk present, then the string will be copied as it is, that is, with no shuffling taking place. If there is more
//  than one asterisk present, shuffling will take place about the first occurrence.
//Sample Input			Output
//↵				---->
//hello↵				---->hello
//* ↵				---->*
//characters*↵			---->*characters
//*characters↵			---->characters*
//**characters↵			---->*characters*
//characters*characters↵	---->characters*characters
//chara*ters*haracters↵		----> ters*haracters *chara
#include <iostream>
int main () {
    bool find =false;

    char text[]="aj*mk*lmk";
    int i=0, sizeArray=0, j=0, x=0, begin;
   sizeArray= sizeof(text);
   for(i=0;i<sizeArray;i++){
       if(text[i] == '*' && !find) {
           j = i;
           begin = i;
           for (x = i; x < (sizeArray -2); x++) {
               std::cout << text[j + 1];
               j++;
               find = true;
           }
           std::cout  << '*';
           for(x=0;x<begin;x++) {
               std::cout << text[x];

           }

       }
    }
    {
        if(!find){
            for(i=0;i<sizeArray-1;i++){
                std::cout << text[i];
            }
        }
    }



    return 0;
}