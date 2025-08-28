### Level 3 (BONUS): The Keyword Caesar Cipher
**The Challenge:** Standard Caesar cipher uses the same shift for every letter, making it vulnerable. Implement a **Keyword Caesar Cipher** that uses a keyword to create variable shifts, along with **Base64** making it much more secure.

**How it Works:**
- Use a keyword (e.g., "SECRET") to determine shifts
- Each letter of the keyword determines the shift for that position
- When you reach the end of the keyword, start over
- Example: "SECRET" → S=18, E=4, C=2, R=17, E=4, T=19

**The Problem:** 
- Learn and Use Base64 encoding and decoding
- Encode: `HELLO WORLD` with keyword `SECRET` becomes `?????`
- Decode: Given an encoded message and keyword, recover the original
- Bonus: Can you break a keyword cipher without knowing the keyword?

> [!TIP]
> **Think About:** 
> Why is this more secure than regular Caesar cipher? What are the trade-offs between security and complexity?