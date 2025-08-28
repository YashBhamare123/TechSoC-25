### Level 2 (BONUS): The Smart Cipher Breaker
**The Challenge:** You've intercepted an encoded message, but you don't know the shift value. Create an intelligent function that can automatically find the correct shift by analyzing letter frequencies.

**The Problem:** English letters appear with different frequencies (E is most common, Z is least common). Your decoder should:
- Try all possible shifts (1-25)
- Score each result based on how closely it matches English letter frequency patterns
- Automatically return the most likely correct decryption
- Develop your own algorithm to score sentences which resemble English

> [!TIP]
> **Think About:** 
> How can you determine if a decoded message "looks like" English? What makes one decryption more likely than another?