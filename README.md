# SECURED

Sort the data on a stack with a limited set of intructions, using the lowest possible number of actions.

## Getting Started

### Dependencies

- [Linux](https://linux.org/)
- [Make](https://www.gnu.org/software/make/)
- [GCC](https://gcc.gnu.org/)

### Installation

- Download/Clone the repository and enter its directory

### Execution


```
make

gcc -Wall -g src/main.c -I./include -L./ -lhashtable

./a.out
```
An example main.c file is present in the src folder

## Innerworkings

### Proyect structure

#### Approach

### Approach:

The hashtable implementation uses separate chaining to handle collisions, where each slot in the hashtable contains a linked list of key-value pairs. The hash function computes a hash value for each key, and this value is used to determine the index in the hashtable. If multiple keys hash to the same index, they are stored in a linked list at that index.

#### Tools

The only allowed functions from C library are write, malloc, free the rest were custom made function.

### Hash Table and Function

The `hash()` function uses the division method to generate a hash value based on the string input, the value(s) are then stored in a hash table that can be generated or deleted by `new_hashtable()` and `delete_hashtable()` respectively.

### Insert

`ht_insert:` Inserts a key-value pair into the hashtable. The function computes the hash of the key to find the appropriate index and adds the new element to the list at that index.

### Delete

`ht_delete:` Deletes a key-value pair from the hashtable. The function computes the hash of the key to locate the corresponding index and removes the element from the list at that index if it exists.

### Search

`ht_search:` Searches for a key in the hashtable and returns the associated value if the key is found. The function computes the hash of the key to find the correct index and traverses the list at that index to locate the key.

### Dump

`ht_dump:` Outputs the contents of the hashtable, displaying all key-value pairs. This function is useful for debugging and verifying the contents of the hashtable.

## Acknowledgments

* [Epitech](https://www.epitech.eu/)

## Authors

* **Jad BGHIEL** ([GitHub](https://github.com/JadBghiel) / [LinkedIn](https://www.linkedin.com/in/jadbghiel/))

## License

This project is licensed under the GNU Public License version 3.0 - see the [LICENSE](https://www.gnu.org/licenses/gpl-3.0.html) file for details.