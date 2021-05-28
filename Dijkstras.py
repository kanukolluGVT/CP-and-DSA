graph=dict()
print(graph)

graph["start"]=dict()
graph["start"]["a"]=6
graph["start"]["b"]=2
#print(graph["start"].keys())
graph["a"] = {}
graph["a"]["fin"] = 1
graph["b"] = {}
graph["b"]["a"] = 3
graph["b"]["fin"] = 5
graph["fin"] = {}
#costs_table
infinity=float("inf")
costs={}
costs["a"]=6
costs["b"]=2
costs["fin"]=infinity
#parents
parents={}
parents["a"]="start"
parents["b"]="start"
parents["fin"]=None
#processed
processed=[]
node=find_lowest_cost_node(costs)
while node is not None:
    cost=costs[node]
    neighbours=graph[node]
    for n in neighbours.keys():
        new_cost=cost+neighbours[n]
        if costs[n]>new_cost:
            cost[n]=new_cost
            parents[n]=node
        processed.append(node)
    node=find_lowest_cost_node(costs)
def find_lowest_cost_node(costs):
    lowest_cost=infinity
    lowets_cost_node=None
    for node in costs:
        cost=costs[node]
        if cost<lowest_cost and node not in processed:
            lowest_cost=cost
            lowets_cost_node=node
    return lowets_cost_node








