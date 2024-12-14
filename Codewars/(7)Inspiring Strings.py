# https://www.codewars.com/kata/5939ab6eed348a945f0007b2/train/python

def longest_word(string_of_words):
    List_str = string_of_words.split(" ")
    
    mx_length = -1
    
    answer_word = ""
    
    for i_str in List_str:
        if (len(i_str) >= mx_length):
            mx_length = len(i_str)
            answer_word = i_str
    
    return answer_word