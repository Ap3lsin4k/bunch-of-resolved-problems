from math import inf


# coins 0 - p, 1 === w
coins = []

e, f = list(map(int, input().split()))
f -= e
cn = int(input())
for i in range(cn):
    coins.append(list(map(int, input().split())))


def takeSecond(elem):
    return elem[1]
coins.sort(key=takeSecond)

dp = [inf for i in range(cn+1)]
dp[0] = 0
for i in range(f):
    minim = inf
    for j in range(cn):
        # if not placed down
        if coins[j][1] > i:
            break
        if dp[i-coins[j][1]] == inf:
            continue # next type of coin
        
        # previous sum and its coin nominal
        temp = dp[i-coins[j][1]] + coins[j][0]
        if temp < minim:
            minim = temp

    dp[i] = minim

print(dp[f])
