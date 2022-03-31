#include <algorithm>
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int* result = new int[lenArr1 + lenArr2];
    int i = 0, j = 0, k = 0;

    while (i < lenArr1) {
        result[k] = firstArr[i];
        i += 1;  
        k += 1;  
    }  
    while (j < lenArr2) {
        result[k] = secondArr[j];
        j += 1;  
        k += 1;  
    }
    
    sort(result, result + lenArr1 + lenArr2);
    for(i = 1; i < lenArr1; i++){
        if(firstArr[i] < firstArr[i - 1])reverse(result, result + lenArr1 + lenArr2);
        return result;
    }
    for(i = 1; i < lenArr2; i++){
        if(secondArr[i] < secondArr[i - 1])reverse(result, result + lenArr1 + lenArr2);
        return result;
    }
    
    return result;
}