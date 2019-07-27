class StringRotation:
    def rotateString(self, A, n, p):
        fst = A[0:p]
        snd = A[p+1:]
        tgt = snd + fst
        return "".join(tgt)