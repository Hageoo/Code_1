#I will be using a context manager just to prevent any leaks, it is also considered best practice when it comes to working with files 
with open('/mnt/d/UPY/Code_1/prog/notes.txt', 'r') as f:
    filecontent = f.read()
    print(filecontent)
#since the context manager takes care of opening and closing the file for us, it also considered best practice
    f.seek(0) #f.seek pretty much just returns to the beginning of the text in the file
    def lineT():
        linenum = 0
        for line in f:  #we iterate through each line contained in the file 
            if line[0] not in 'T': #our conditional statement to count the # of lines that do not have "T" as the first character 
                #the "[0]" is there to check the character contained in the string in the position 0
                linenum += 1
        print("\nLines that do not start with T =", linenum) #we print the result
    lineT()

    def words():
        words = filecontent.split() #doing this specific function got kinda tricky so I stole the idea of counting the blank spaces :)
        print("Total amount of words: ", len(words)) #len is useful since it provides the total number of elements
    words()

    def the():
        string = filecontent  #here I take the whole text as a string so then I can look for substrings 
        substring = "the" #defining the substring 
        substring2 = "The" #due to the fact that it was not considering the variations on the letter case I came up with this "solution" prolly not the most efficient tho
        count = string.count(substring) #we count the substrings contained in the main string 
        count2 = string.count(substring2)

        print("Total 'the' in file: ", count + count2) #we add both values and print the result
    the()