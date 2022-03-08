string pigLatin(string word){
    if(word[0]=='e'||word[0]=='u'||word[0]=='o'||word[0]=='a'||word[0]=='i'){
        word=word+"way";
    }
    else {
        char x=word[0];
        for(int i=0;i<word.length()-1;i++) word[i]=word[i+1];
        word[word.length()-1]=x;
        word=word+"ay";
    }
    return word;
}