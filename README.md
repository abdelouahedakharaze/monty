**Name:** Abdelouahed Akharaze

**GitHub:** https://github.com/abdelouahedakharaze



---

**_0. push, pall_**

---

<p>Implement the <code>push</code> and <code>pall</code> opcodes.</p>

<p><strong>The push opcode</strong></p>

<p>The opcode <code>push</code> pushes an element to the stack.</p>

<p><strong>The pall opcode</strong></p>

<p>The opcode <code>pall</code> prints all the values on the stack, starting from the top of the stack.</p>

<pre><code>julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
</code></pre>

---


---

**_1. pint_**

---

<p>Implement the <code>pint</code> opcode.</p>

<p><strong>The pint opcode</strong></p>

<p>The opcode <code>pint</code> prints the value at the top of the stack, followed by a new line.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes/06.m 
1
2
3
julien@ubuntu:~/monty$ 
</code></pre>

---


---

**_2. pop_**

---

<p>Implement the <code>pop</code> opcode.</p>

<p><strong>The pop opcode</strong></p>

<p>The opcode <code>pop</code> removes the top element of the stack.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/monty$ ./monty bytecodes/07.m 
3
2
1
2
1
1
julien@ubuntu:~/monty$ 
</code></pre>

---


---

**_3. swap_**

---

<p>Implement the <code>swap</code> opcode.</p>

<p><strong>The swap opcode</strong></p>

<p>The opcode <code>swap</code> swaps the top two elements of the stack.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
julien@ubuntu:~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/monty$ 
</code></pre>

---


---

**_4. add_**

---

<p>Implement the <code>add</code> opcode.</p>

<p><strong>The add opcode</strong></p>

<p>The opcode <code>add</code> adds the top two elements of the stack.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

julien@ubuntu:~/monty$ ./monty bytecodes/12.m 
3
2
1
5
1
julien@ubuntu:~/monty$
</code></pre>

---


---

**_5. nop_**

---

<p>Implement the <code>nop</code> opcode.</p>

<p><strong>The nop opcode</strong></p>

<p>The opcode <code>nop</code> doesn’t do anything.</p>

---


---

**_6. sub_**

---

<p>Implement the <code>sub</code> opcode.</p>

<p><strong>The sub opcode</strong></p>

<p>The opcode <code>sub</code> subtracts the top element of the stack from the second top element of the stack.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/19.m 
push 1
push 2
push 10
push 3
sub
pall
julien@ubuntu:~/monty$ ./monty bytecodes/19.m 
7
2
1
julien@ubuntu:~/monty$
</code></pre>

---


---

**_7. div_**

---

<p>Implement the <code>div</code> opcode.</p>

<p><strong>The div opcode</strong></p>

<p>The opcode <code>div</code> divides the second top element of the stack by the top element of the stack.</p>

---


---

**_8. mul_**

---

<p>Implement the <code>mul</code> opcode.</p>

<p><strong>The mul opcode</strong></p>

<p>The opcode <code>mul</code> multiplies the second top element of the stack with the top element of the stack.</p>

---


---

**_9. mod_**

---

<p>Implement the <code>mod</code> opcode.</p>

<p><strong>The mod opcode</strong></p>

<p>The opcode <code>mod</code> computes the rest of the division of the second top element of the stack by the top element of the stack.</p>

---


---

**_10. comments_**

---

<p>Every good language comes with the capability of commenting. When the first non-space character of a line is <code>#</code>, treat this line as a comment (don’t do anything).</p>

---


---

**_11. pchar_**

---

<p>Implement the <code>pchar</code> opcode.</p>

<p><strong>The pchar opcode</strong></p>

<p>The opcode <code>pchar</code> prints the char at the top of the stack, followed by a new line.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/28.m 
push 72
pchar
julien@ubuntu:~/monty$ ./monty bytecodes/28.m 
H
julien@ubuntu:~/monty$
</code></pre>

---


---

**_12. pstr_**

---

<p>Implement the <code>pstr</code> opcode.</p>

<p><strong>The pstr opcode</strong></p>

<p>The opcode <code>pstr</code> prints the string starting at the top of the stack, followed by a new line.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/31.m 
push 1
push 2
push 3
push 4
push 0
push 110
push 0
push 108
push 111
push 111
push 104
push 99
push 83
pstr
julien@ubuntu:~/monty$ ./monty bytecodes/31.m 
School
julien@ubuntu:~/monty$ 
</code></pre>

---


---

**_13. rotl_**

---

<p>Implement the <code>rotl</code> opcode.</p>

<p><strong>The rotl opcode</strong></p>

<p>The opcode <code>rotl</code> rotates the stack to the top.</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/35.m 
push 1
push 2
push 3
push 4
push 5
push 6
push 7
push 8
push 9
push 0
pall
rotl
pall
julien@ubuntu:~/monty$ ./monty bytecodes/35.m 
0
9
8
7
6
5
4
3
2
1
9
8
7
6
5
4
3
2
1
0
julien@ubuntu:~/monty$ 
</code></pre>

---


---

**_14. rotr_**

---

<p>Implement the <code>rotr</code> opcode.</p>

<p><strong>The rotr opcode</strong></p>

<p>The opcode <code>rotr</code> rotates the stack to the bottom.</p>

---


---

**_15. stack, queue_**

---

<p>Implement the <code>stack</code> and <code>queue</code> opcodes.</p>

<p><strong>The stack opcode</strong></p>

<p>The opcode <code>stack</code> sets the format of the data to a stack (LIFO). This is the default behavior of the program.</p>

<p><strong>The queue opcode</strong></p>

<p>The opcode <code>queue</code> sets the format of the data to a queue (FIFO).</p>

<p>When switching mode:</p>

<pre><code>julien@ubuntu:~/monty$ cat bytecodes/47.m
queue
push 1
push 2
push 3
pall
stack
push 4
push 5
push 6
pall
add
pall
queue
push 11111
add
pall
julien@ubuntu:~/monty$ ./monty bytecodes/47.m
1
2
3
6
5
4
1
2
3
11
4
1
2
3
15
1
2
3
11111
julien@ubuntu:~/monty$ 
</code></pre>

---


---

**_16. Brainf*ck_**

---

<p>Write a Brainf*ck script that prints <code>School</code>, followed by a new line.</p>

<pre><code>julien@ubuntu:~/monty/bf$ bf 1000-school.bf 
School
julien@ubuntu:~/monty/bf$ 
</code></pre>

---


---

**_17. Add two digits_**

---

<p>Add two digits given by the user.</p>

<pre><code>julien@ubuntu:~/monty/bf$ bf ./1001-add.bf
81
9julien@ubuntu:~/monty/bf$
</code></pre>

---


---

**_18. Multiplication_**

---

<p>Multiply two digits given by the user.</p>

<pre><code>julien@ubuntu:~/monty/bf$ bf 1002-mul.bf
24
8julien@ubuntu:~/monty/bf$
</code></pre>

---


---

**_19. Multiplication level up_**

---

<p>Multiply two digits given by the user.<br/>
<br/>
<img src="http://mein-fun.com/data/media/5/brainfuck_bean.jpg"/><br/>
<br/></p>

<pre><code>julien@ubuntu:~/monty/bf$ bf 1003-mul.bf 
77
49
julien@ubuntu:~/monty/bf$ 
</code></pre>

---
