string pigLatin(string word){
    string result = word;
    string aiueo = "aiueo";
    if(aiueo.find(word[0]) == string::npos){
        result = result + result[0];
        result.erase(0, 1);
        result = result + "ay";
        return result;
    } else {
        result = result + "way";
        return result;
    }
}