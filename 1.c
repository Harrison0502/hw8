#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool YN(char s[]){
    int i=0,j=strlen(s)-1;
    while(i<j){
        if(s[i]<='Z'&&s[i]>='A')
            s[i]=s[i]+32;
        if(s[j]<='Z'&&s[j]>='A')
            s[j]=s[j]+32;
        if(s[i]>122||s[i]<97){//非字母則跳過
            i++;
            }
        if(s[j]>122||s[j]<97){//非字母
            j--;     
            }
        if(s[i]==s[j]){
            i++;
            j--;    
            }
        else
            break;     
    }
    if(i>=j) 
        return true;
    else
        return false;          
}
 int main(){
    char str[200000];
    fgets(str,200000,stdin);
    if(YN(str)==true){
        printf("YES\n");
    }
    else if(YN(str)==false){
        printf("NO\n");
    }
    
    
    

 }