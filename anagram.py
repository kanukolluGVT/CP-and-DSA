def anagram(s):
    d={}
    for word in s:
        s="".join(sorted(word))
        if s in d:
            d[s]+=1
        else:
            d[s]=1
    return [d[s] for s in d if len(d[s])>1]