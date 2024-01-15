import itertools


def solution(array_a, array_b):
    return sum(abs(a - b)**2 for a, b in zip(array_a, array_b)) / len(array_a) if array_a else 0


def multiplication_table(size):
    return [[(i + 1) * (j + 1) for j in range(size)] for i in range(size)]


def rgb(r, g, b):
    def f(x): return min(255, max(x, 0))

    return ("{:02X}" * 3).format(f(r), f(g), f(b))


def get_permutations(s):
    # return [''.join(y) for y in [x for x in set(itertools.permutations(s))]]
    return set(''.join(x) for x in itertools.permutations(s, r=len(s)))


if __name__ == '__main__':
    arr_a = [1, 2, 3]
    arr_b = [4, 5, 6]
    print(solution(arr_a, arr_b))
