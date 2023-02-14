import itertools


def rgb(r, g, b):
    def f(x): return min(255, max(x, 0))

    return ("{:02X}" * 3).format(f(r), f(g), f(b))


def get_permutations(s):
    # return [''.join(y) for y in [x for x in set(itertools.permutations(s))]]
    return set(''.join(x) for x in itertools.permutations(s, r=len(s)))


if __name__ == '__main__':
    # input function to test
    print("Testing...")
