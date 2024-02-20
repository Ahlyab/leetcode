def gorosort(a):
    return sum(x != i for i, x in enumerate(a))
    N = int(input())
    a = list(map(lambda x: int(x)-1, input().split()))
    return sum(x != i for i, x in enumerate(a))


for case in range(int(input())):
    print('Case #%d: %s' % (case+1, gorosort([2, 1, 4, 3])))
