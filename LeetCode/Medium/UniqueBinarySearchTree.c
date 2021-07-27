#include <stdio.h>

int numTrees(int n)
{
  int unique_tree_cache[20] = {0};
  
  unique_tree_cache[0] = 1;
  
  for(int node = 1; node < 20; ++node)
  {
    for(int i = 0; i < node; ++i)
    {
        unique_tree_cache[node] += unique_tree_cache[i] * unique_tree_cache[node - i - 1];
    }
  }
  
  return unique_tree_cache[n];
}

int main()
{
  int test_case;
  scanf("%d", &test_case);

  for(int i = 0; i < test_case; ++i)
  {
    int number;
    scanf("%d", &number);

    printf("%d\n", numTrees(number));
  }
  
  return 0;
}