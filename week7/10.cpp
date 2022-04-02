
void rFilter(char *s){
    int pos=strlen(s);
    for(int i=pos-1;i>=0;--i){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) continue;
        s[i]='_';
    }
}
// đúng 1 phần 