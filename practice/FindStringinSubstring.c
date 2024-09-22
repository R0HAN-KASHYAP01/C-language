int strStr(char* haystack, char* needle) {
    int needle_length = 0, haystack_length = 0;
    
    // Calculate lengths of needle and haystack
    while (needle[needle_length] != '\0') {
        needle_length++;
    }
    while (haystack[haystack_length] != '\0') {
        haystack_length++;
    }

    // If the needle is empty, return 0 (as per the typical strStr behavior)
    if (needle_length == 0) {
        return 0;
    }

    // Iterate through the haystack
    for (int i = 0; i <= haystack_length - needle_length; i++) {
        int j;
        // Check if the substring matches the needle
        for (j = 0; j < needle_length; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }

        // If the whole needle matches, return the current index
        if (j == needle_length) {
            return i;
        }
    }

    // If no match is found, return -1
    return -1;
}
