#include<stdio.h>
#include<string.h>
char words[][2][40]={"dog","hund",
                   "no","nein",
                  "year","jahr",
                   "child","kind",
                   "I","Ich",
                   "drive","fahren",
                   "house","haus",
                   "to","zu",
                   "",""
                  };
int main()

{
    int i=0;
    char english[80];
    printf("Enter a english word:\n");
    gets(english);
    while(strcmp(words[i][0],""))
    {
     if(!strcmp(english,words[i][0]))
      {printf("German translation: %s",words[i][1]);}
      else
        printf("Not in dictionery.");
      break;

      i++;
    }
    return 0;

}
