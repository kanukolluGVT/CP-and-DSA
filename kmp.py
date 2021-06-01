def kmpsearch(patt,text):
    M=len(patt)
    N=len(text)
    lps=[0]*M
    computeLPSArray(pat,M,lps)

    i=0
    while i<N:
        if patt[j]==txt[i]:
            i+=1
            j+=1
        if j==M:
            print(" found patter at index" + str(i-j))
            j=lps[j-1]
            
        elif i<N and patt[j]!=text[i]:
            if j!=0:
                j-lps[j-1]

            else:
                i+=1
def computeLPSArray(pat, M, lps):
    len = 0 # length of the previous longest prefix suffix
  
    lps[0] # lps[0] is always 0
    i = 1
  
    # the loop calculates lps[i] for i = 1 to M-1
    while i < M:
        if pat[i]== pat[len]:
            len += 1
            lps[i] = len
            i += 1
        else:
            # This is tricky. Consider the example.
            # AAACAAAA and i = 7. The idea is similar 
            # to search step.
            if len != 0:
                len = lps[len-1]
  
                # Also, note that we do not increment i here
            else:
                lps[i] = 0
                i += 1
  
txt = "ABABDABACDABABCABAB"
pat = "ABABCABAB"


