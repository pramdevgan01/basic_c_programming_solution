<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Functions & Recursion in C - Complete Solutions</title>
  <style>
    :root {
      --bg: #f8fafc;
      --text: #1e293b;
      --primary: #7c3aed;
      --accent: #ec4899;
      --card: #ffffff;
      --border: #e2e8f0;
      --code: #fdf4ff;
      --hover: #6d28d9;
    }
    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background: var(--bg);
      color: var(--text);
      line-height: 1.7;
      margin: 0;
      padding: 2rem;
    }
    h1 {
      text-align: center;
      font-size: 3.2rem;
      margin-bottom: 1rem;
      background: linear-gradient(90deg, var(--primary), var(--accent));
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent;
      font-weight: 900;
    }
    h2 {
      font-size: 2.1rem;
      color: var(--accent);
      border-bottom: 4px solid var(--primary);
      padding-bottom: 0.6rem;
      margin-top: 4rem;
    }
    .container {
      max-width: 1200px;
      margin: 0 auto;
      background: var(--card);
      padding: 3rem;
      border-radius: 20px;
      box-shadow: 0 15px 50px rgba(0,0,0,0.12);
    }
    ul {
      list-style: none;
      padding: 0;
    }
    li {
      margin: 1rem 0;
      padding: 1.4rem 2rem;
      background: var(--code);
      border-left: 7px solid var(--primary);
      border-radius: 14px;
      transition: all 0.4s ease;
      box-shadow: 0 5px 15px rgba(124,58,237,0.15);
    }
    li:hover {
      transform: translateY(-8px);
      box-shadow: 0 20px 40px rgba(124,58,237,0.3);
      border-left-color: var(--accent);
    }
    a {
      color: var(--primary);
      text-decoration: none;
      font-weight: 700;
      font-size: 1.1rem;
    }
    a:hover {
      color: var(--hover);
      text-decoration: underline;
    }
    .badge {
      display: inline-block;
      background: var(--primary);
      color: white;
      padding: 0.4rem 0.9rem;
      border-radius: 50px;
      font-size: 0.9rem;
      font-weight: bold;
      margin-right: 0.9rem;
    }
    .multi {
      font-size: 0.95rem;
      color: #d946ef;
      font-weight: bold;
      margin-left: 10px;
    }
    .file-list {
      font-size: 0.95rem;
      color: #8b5cf6;
      margin-left: 10px;
    }
    footer {
      text-align: center;
      margin-top: 7rem;
      padding: 3.5rem;
      background: linear-gradient(135deg, #7c3aed, #ec4899);
      color: white;
      border-radius: 18px;
      font-size: 1.1rem;
    }
    footer a {
      color: #fff;
      text-decoration: underline;
      font-weight: bold;
    }
  </style>
</head>
<body>

<div class="container">

<h1>Functions & Recursion in C</h1>

<div class="section">
  <h2>Introduction to Functions</h2>
  <ul>
    <li><span class="badge">1</span> <a href="./code/5.1.1.c">Cube of a Number using cube() Function</a></li>
    <li><span class="badge">2</span> <a href="./code/5.1.2.c">Sum of Digits using Function</a></li>
    <li><span class="badge">3</span> <a href="./code/5.1.3.c">Check Odd or Even</a></li>
    <li><span class="badge">4</span> <a href="./code/5.1.4.c">Decimal to Binary Conversion</a></li>
    <li><span class="badge">5</span> <a href="./code/5.1.5.c">Swap Two Numbers (Call by Reference)</a></li>
    <li><span class="badge">6</span> <a href="./code/5.1.6.c">Factorial using Function</a></li>
    <li><span class="badge">7</span> <a href="./code/5.1.7.c">Count Vowels in String</a></li>
    <li><span class="badge">8</span> <a href="./code/5.1.8.c">Check Palindrome Number</a></li>
    <li><span class="badge">9</span> <a href="./code/5.1.9.c">Check Prime Number</a></li>
    <li><span class="badge">10</span> <a href="./code/5.1.10.c">Generate Fibonacci Sequence</a></li>
  </ul>
</div>

<div class="section">
  <h2>Function Parameters and Scope</h2>
  <ul>
    <li><span class="badge">1</span> <a href="./code/5.2.1.c">Find Min & Max in Array</a></li>
    <li><span class="badge">2</span> <a href="./code/5.2.2.c">Sort Array in Ascending Order</a></li>
    <li><span class="badge">3</span> <a href="./code/5.2.3.c">Sum of Array Elements</a></li>
    <li><span class="badge">4</span> <a href="./code/5.2.4.c">Work with Multi-dimensional Arrays</a></li>
    <li><span class="badge">5</span> <a href="./code/5.2.5.c">Delete Element from Array</a></li>
    <li><span class="badge">6</span> <a href="./code/5.2.6.c">Sum of All Elements in 2D Array</a></li>
    <li><span class="badge">7</span> <a href="./code/5.2.7.c">Average of Array Elements</a></li>
    <li><span class="badge">8</span> Search Element → 
      <a href="./code/5.2.8.1.c" class="multi">[Linear Search]</a>
      <a href="./code/5.2.8.2.c" class="multi">[Binary Search]</a>
    </li>
    <li><span class="badge">9</span> <a href="./code/5.2.9.c">Reverse an Array</a></li>
    <li><span class="badge">10</span> <a href="./code/5.2.10.c">Merge Two Sorted Arrays</a></li>
  </ul>
</div>

<div class="section">
  <h2>Storage Classes in C</h2>
  <ul>
    <li><span class="badge">1</span> Scope Demo → 
      <a href="./code/5.3.1.1.c" class="file-list">Main.c</a> | 
      <a href="./code/5.3.1.2.c" class="file-list">helper.h</a> | 
      <a href="./code/5.3.1.3.c" class="file-list">helper.c</a>
    </li>
    <li><span class="badge">2</span> <a href="./code/5.3.2.c">Area of Rectangle using extern</a></li>
    <li><span class="badge">3</span> Volume of Cylinder → 
      <a href="./code/5.3.3.1.c" class="file-list">Main.c</a> | 
      <a href="./code/5.3.3.2.c" class="file-list">dimensions.c</a>
    </li>
    <li><span class="badge">4</span> <a href="./code/5.3.4.c">Pattern using register Keyword</a></li>
    <li><span class="badge">5</span> Parallelogram Perimeter → 
      <a href="./code/5.3.5.1.c" class="file-list">Main.c</a> | 
      <a href="./code/5.3.5.2.c" class="file-list">sides.c</a>
    </li>
    <li><span class="badge">6</span> <a href="./code/5.3.6.c">Demonstrate auto Storage Class</a></li>
    <li><span class="badge">7</span> <a href="./code/5.3.7.c">Demonstrate register Storage Class</a></li>
    <li><span class="badge">8</span> <a href="./code/5.3.8.c">static Variable in Function (Counter)</a></li>
    <li><span class="badge">9</span> extern Global Counter → 
      <a href="./code/5.3.9.1.c" class="file-list">counter.c</a> | 
      <a href="./code/5.3.9.2.c" class="file-list">counter.h</a> | 
      <a href="./code/5.3.9.3.c" class="file-list">increment.c</a> | 
      <a href="./code/5.3.9.4.c" class="file-list">Main.c</a>
    </li>
    <li><span class="badge">10</span> extern Global Decrement → 
      <a href="./code/5.3.10.1.c" class="file-list">Main.c</a> | 
      <a href="./code/5.3.10.2.c" class="file-list">counter.c</a>
    </li>
  </ul>
</div>

<div class="section">
  <h2>Recursion Basics</h2>
  <ul>
    <li><span class="badge">1</span> <a href="./code/5.4.1.c">Check Happy Number</a></li>
    <li><span class="badge">2</span> <a href="./code/5.4.2.c">Check Friendly Pair (Amicable Numbers)</a></li>
    <li><span class="badge">3</span> <a href="./code/5.4.3.c">Check Magic Number</a></li>
    <li><span class="badge">4</span> <a href="./code/5.4.4.c">Power using Recursion (x^n)</a></li>
    <li><span class="badge">5</span> <a href="./code/5.4.5.c">Sum of Digits using Recursion</a></li>
    <li><span class="badge">6</span> <a href="./code/5.4.6.c">GCD using Euclidean Algorithm</a></li>
    <li><span class="badge">7</span> <a href="./code/5.4.7.c">Fibonacci Sequence using Recursion</a></li>
    <li><span class="badge">8</span> <a href="./code/5.4.8.c">Factorial using Recursion</a></li>
    <li><span class="badge">9</span> <a href="./code/5.4.9.c">Sum of First N Natural Numbers</a></li>
    <li><span class="badge">10</span> <a href="./code/5.4.10.c">Power Function using Recursion</a></li>
  </ul>
</div>

<div class="section">
  <h2>Header Files & Standard Libraries</h2>
  <ul>
    <li><span class="badge">1</span> Arithmetic Operations → 
      <a href="./code/5.5.1.c" class="file-list">Main.c</a> | 
      <a href="./code/arithmetic.h" class="file-list">arithmetic.h</a>
    </li>
    <li><span class="badge">2</span> Temperature Conversion → 
      <a href="./code/5.5.2.c" class="file-list">Main.c</a> | 
      <a href="./code/temperature.h" class="file-list">temperature.h</a>
    </li>
    <li><span class="badge">3</span> Area Calculations → 
      <a href="./code/5.5.3.c" class="file-list">Main.c</a> | 
      <a href="./code/area.h" class="file-list">area.h</a>
    </li>
    <li><span class="badge">4</span> Utility Macros → 
      <a href="./code/5.5.4.c" class="file-list">Main.c</a> | 
      <a href="./code/utils.h" class="file-list">utils.h</a>
    </li>
    <li><span class="badge">5</span> Custom Data Types → 
      <a href="./code/5.5.5.c" class="file-list">Main.c</a> | 
      <a href="./code/datatype.h" class="file-list">datatype.h</a>
    </li>
    <li><span class="badge">6</span> String Utilities → 
      <a href="./code/5.5.6.c" class="file-list">Main.c</a> | 
      <a href="./code/stringutils.h" class="file-list">stringutils.h</a> | 
      <a href="./code/stringutils.c" class="file-list">stringutils.c</a>
    </li>
    <li><span class="badge">7</span> Array Utilities → 
      <a href="./code/5.5.7.c" class="file-list">Main.c</a> | 
      <a href="./code/arrayutils.h" class="file-list">arrayutils.h</a> | 
      <a href="./code/arrayutils.c" class="file-list">arrayutils.c</a>
    </li>
    <li><span class="badge">8</span> File Utilities → 
      <a href="./code/5.5.8.c" class="file-list">Main.c</a> | 
      <a href="./code/fileutils.h" class="file-list">fileutils.h</a> | 
      <a href="./code/fileutils.c" class="file-list">fileutils.c</a> | 
      <a href="./code/sample.txt" class="file-list">sample.txt</a>
    </li>
    <li><span class="badge">9</span> Config with enum → 
      <a href="./code/5.5.9.c" class="file-list">Main.c</a> | 
      <a href="./code/config.h" class="file-list">config.h</a> | 
      <a href="./code/config.c" class="file-list">config.c</a>
    </li>
  </ul>
</div>

<div class="section">
  <h2>Module Test - Real-World Projects</h2>
  <ul>
    <li><span class="badge">1</span> <a href="./code/5.6.1.c">Banking Transaction System (Static Counter + Modular Design)</a></li>
    <li><span class="badge">2</span> Tiered Electricity Billing → 
      <a href="./code/5.6.2.c" class="file-list">Main.c</a> | 
      <a href="./code/billing.h" class="file-list">billing.h</a> | 
      <a href="./code/billing.c" class="file-list">billing.c</a>
    </li>
    <li><span class="badge">3</span> <a href="./code/5.6.3.c">Railway Ticket Booking Simulation (Call by Value & Scope)</a></li>
  </ul>
</div>

</div>

<footer>
  <p style="margin-bottom: 8px;">
    Made with ❤️ for C Programming Learners<br>
    <strong>Author:</strong> Param Vishwakarma
  </p>
  <p>
    <strong>LinkedIn:</strong> 
    <a href="https://www.linkedin.com/in/vpramatma/" target="_blank" 
       style="color: #0A66C2; text-decoration: none; font-weight: 600;">
       Pramatma Vishwakarma ↗
    </a>
  </p>
  <p style="margin-top: 12px; color: #94a3b8; font-size: 0.9rem;">
    Last updated: November 2025
  </p>
</footer>


</body>
</html>