#include <stdio.h>
#include <string.h>
#include <string.h>

// klavyeden küçük harflerle girilen bir cümlede en fazla bulunan karakteri saptama

int main()
{
    char sentence[100];

    printf("Please enter a sentence: ");
    gets(sentence);
    char constantLetter;
    int count=0;

    for (int i = 0; i < strlen(sentence); i++)
    {
        constantLetter = sentence[i];
        if (sentence[i] >= 97 && sentence[i] <= 122)
        {
            for(int j=97; j<=122; j++){
                if(constantLetter= sentence[j]){
                    count++;
                }        
            }
        }
        else
        {
            printf("Please re-enter the sentence using lowercase letters.")
        }
    }

    return 0;
}