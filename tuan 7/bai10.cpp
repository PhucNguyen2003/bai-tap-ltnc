void rFilter(char *s) {
    // Your code goes here
    // *(s) = '_';
    // *(s + 1) = '\0';
    int i = strlen(s) - 1;
    while(i >= 0){
        if( !(*(s + i) >= 'A' && *(s + i) <= 'Z') && !(*(s + i) >= 'a' && *(s + i) <= 'z') ){
            *(s + i) = '_';
        } else {
            return;
        }
        i--;
    }
}