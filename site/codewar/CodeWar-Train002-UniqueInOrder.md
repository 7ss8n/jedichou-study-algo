# Unique In Order

## Instructions

* Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

```
For example:

unique_in_order('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
unique_in_order('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
unique_in_order([1,2,2,3,3])       == [1,2,3]
```

## Solution

```python

def unique_in_order(iterable):

    if len(iterable) == 0:
        return []
    
    if len(iterable) == 1:
        return [iterable[0]]

    curr_mark = iterable[0]
    target = [curr_mark]
    for elt in iterable[1:]:
        if elt != curr_mark:
            target.append(elt)
            curr_mark = elt

    return target

```

## Test case

```python

test.assert_equals(unique_in_order('AAAABBBCCDAABBB'), ['A','B','C','D','A','B'])
test.assert_equals(unique_in_order([1,2,2,3,3]), [1,2,3])
test.assert_equals(unique_in_order('ABBCcAD'), ['A', 'B', 'C', 'c', 'A', 'D'])
test.assert_equals(unique_in_order(''), [])
test.assert_equals(unique_in_order([]), [])
test.assert_equals(unique_in_order('A'), ['A'])

```