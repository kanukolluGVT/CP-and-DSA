"""
3
paris tokyo 9471
paris new-york 5545
new-york singapore 15344
"""
from collections import defaultdict
nb_edges=int(input())
g=defaultdict(dict)
for _ in range(nb_edges):
    u,v,weight=input().split()
    
