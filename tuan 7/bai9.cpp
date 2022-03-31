void reverse(char *s) {
    // Your code goes here
    //what is this for?????????
    // *(s) = 's';
    // *(s + 1) = '\0';
    if(s == nullptr)return;
    char* endS = s + strlen(s) - 1;
    while(endS > s){
        char ch = *s;
        *s = *endS;
        *endS = ch;
        ++s, --endS;
    }
}