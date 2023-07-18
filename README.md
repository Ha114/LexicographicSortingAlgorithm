# LexicographicSortingAlgorithm
Let S = ‘s1s2...sa’ and T = ‘t1t2...tb’ be strings of length a and b, respectively (we call si the ith letter of S). We say that S is lexicographically less than T, denoting S <lex T, if either a < b and si = ti for all i = 1, 2, ..., a, or
There exists an index i ≤ min {a, b} such that sj = tj for all j = 1, 2, ..., i − 1 and si < ti.
Lexicographic sorting algorithm aims to sort a given set of n strings into lexicographically ascending order (in case of ties due to identical strings, then in non-descending order).
