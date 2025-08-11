/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazuraiq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:59:16 by hazuraiq          #+#    #+#             */
/*   Updated: 2025/08/11 22:20:03 by hazuraiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *dest, int val, size_t n)
{
    void *original_dest = dest;
    while (n--) {
        *(unsigned char *)dest = (unsigned char)val;
        dest = (unsigned char *)dest + 1;
    }
    return original_dest;
}

// int main(void)
// {
//     printf("=== Testing ft_memset ===\n\n");
    
//     // Test 1: Basic functionality
//     printf("Test 1: Basic functionality\n");
//     char buffer1[10];
//     char buffer2[10];
    
//     ft_memset(buffer1, 'A', 5);
//     memset(buffer2, 'A', 5);
    
//     printf("ft_memset result: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%c", buffer1[i]);
//     }
//     printf("\n");
    
//     printf("   memset result: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%c", buffer2[i]);
//     }
//     printf("\n");
//     printf("Match: %s\n\n", (memcmp(buffer1, buffer2, 5) == 0) ? "YES" : "NO");
    
//     // Test 2: Setting to zero
//     printf("Test 2: Setting to zero\n");
//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[5] = {1, 2, 3, 4, 5};
    
//     ft_memset(arr1, 0, sizeof(arr1));
//     memset(arr2, 0, sizeof(arr2));
    
//     printf("ft_memset zeros: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");
    
//     printf("   memset zeros: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr2[i]);
//     }
//     printf("\n");
//     printf("Match: %s\n\n", (memcmp(arr1, arr2, sizeof(arr1)) == 0) ? "YES" : "NO");
    
//     // Test 3: Large value (should truncate to lowest byte)
//     printf("Test 3: Large value truncation\n");
//     char buffer3[5];
//     char buffer4[5];
    
//     ft_memset(buffer3, 321, 5);  // 321 = 0x141, should become 0x41 = 65 = 'A'
//     memset(buffer4, 321, 5);
    
//     printf("ft_memset with 321: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", (unsigned char)buffer3[i]);
//     }
//     printf("\n");
    
//     printf("   memset with 321: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", (unsigned char)buffer4[i]);
//     }
//     printf("\n");
//     printf("Match: %s\n\n", (memcmp(buffer3, buffer4, 5) == 0) ? "YES" : "NO");
    
//     // Test 4: Negative value
//     printf("Test 4: Negative value\n");
//     char buffer5[5];
//     char buffer6[5];
    
//     ft_memset(buffer5, -1, 5);
//     memset(buffer6, -1, 5);
    
//     printf("ft_memset with -1: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", (unsigned char)buffer5[i]);
//     }
//     printf("\n");
    
//     printf("   memset with -1: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", (unsigned char)buffer6[i]);
//     }
//     printf("\n");
//     printf("Match: %s\n\n", (memcmp(buffer5, buffer6, 5) == 0) ? "YES" : "NO");
    
//     // Test 5: Return value check
//     printf("Test 5: Return value\n");
//     char buffer7[5];
//     void *ret1 = ft_memset(buffer7, 'X', 3);
//     void *ret2 = memset(buffer7, 'X', 3);
    
//     printf("ft_memset returns original pointer: %s\n", (ret1 == buffer7) ? "YES" : "NO");
//     printf("   memset returns original pointer: %s\n", (ret2 == buffer7) ? "YES" : "NO");
    
//     printf("\n=== All tests completed ===\n");
//     return 0;
// }