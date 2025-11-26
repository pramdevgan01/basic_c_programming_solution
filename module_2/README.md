<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Variables, Data Types & Operators in C</title>
  <style>
    :root {
      --bg: #f8fafc;
      --text: #1e293b;
      --primary: #8b5cf6;
      --accent: #ec4899;
      --card: #ffffff;
      --border: #e2e8f0;
      --code: #fdf4ff;
      --hover: #7c3aed;
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
      font-size: 2.9rem;
      margin-bottom: 1rem;
      background: linear-gradient(90deg, var(--primary), var(--accent));
      -webkit-background-clip: text;
      -webkit-text-fill-color: transparent;
    }
    h2 {
      font-size: 2rem;
      color: var(--accent);
      border-bottom: 3px solid var(--primary);
      padding-bottom: 0.5rem;
      margin-top: 3.5rem;
    }
    .container {
      max-width: 1100px;
      margin: 0 auto;
      background: var(--card);
      padding: 2.5rem;
      border-radius: 16px;
      box-shadow: 0 10px 30px rgba(0,0,0,0.08);
    }
    ul {
      list-style: none;
      padding: 0;
    }
    li {
      margin: 0.9rem 0;
      padding: 1.2rem 1.6rem;
      background: var(--code);
      border-left: 6px solid var(--primary);
      border-radius: 10px;
      transition: all 0.3s ease;
      box-shadow: 0 3px 10px rgba(139,92,246,0.1);
    }
    li:hover {
      transform: translateY(-5px);
      box-shadow: 0 12px 25px rgba(139,92,246,0.2);
      border-left-color: var(--accent);
    }
    a {
      color: var(--primary);
      text-decoration: none;
      font-weight: 600;
      font-size: 1.05rem;
    }
    a:hover {
      color: var(--hover);
      text-decoration: underline;
    }
    .badge {
      display: inline-block;
      background: var(--primary);
      color: white;
      padding: 0.3rem 0.7rem;
      border-radius: 50px;
      font-size: 0.85rem;
      font-weight: bold;
      margin-right: 0.7rem;
    }
    footer {
      text-align: center;
      margin-top: 5rem;
      padding: 2.5rem;
      background: linear-gradient(to right, #8b5cf6, #ec4899);
      color: white;
      border-radius: 12px;
      font-size: 1rem;
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

<h1>Variables, Data Types & Operators in C</h1>

<div class="section">
  <h2>Variables & Constants (const, #define), Scope</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.1.1.c">Declaration of Variables</a></li>
    <li><span class="badge">2</span> <a href="code/2.1.2.c">Assign Value to a Variable</a></li>
    <li><span class="badge">3</span> <a href="code/2.1.3.c">Calculate Area and Perimeter of Rectangle</a></li>
    <li><span class="badge">4</span> <a href="code/2.1.4.c">Demonstrate Local Variable Scope</a></li>
    <li><span class="badge">5</span> <a href="code/2.1.5.c">Update Global Variables from Function</a></li>
    <li><span class="badge">6</span> <a href="code/2.1.6.c">Sum of Variables & Check Divisibility</a></li>
    <li><span class="badge">7</span> <a href="code/2.1.7.c">Convert Minutes to Seconds using #define</a></li>
    <li><span class="badge">8</span> <a href="code/2.1.8.c">Calculate Price After Discount using const</a></li>
    <li><span class="badge">9</span> <a href="code/2.1.9.c">Demonstrate Local Scope with User Input</a></li>
    <li><span class="badge">10</span> <a href="code/2.1.10.c">Global vs Static vs Auto Scope Demo</a></li>
  </ul>
</div>

<div class="section">
  <h2>Data Types (int, float, char, bool)</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.2.1.c">Display ASCII Value of a Character</a></li>
    <li><span class="badge">2</span> <a href="code/2.2.2.c">Decimal to Octal & Hexadecimal Conversion</a></li>
    <li><span class="badge">3</span> <a href="code/2.2.3.c">Difference Between float and double</a></li>
    <li><span class="badge">4</span> <a href="code/2.2.4.c">Input and Display a Character</a></li>
    <li><span class="badge">5</span> <a href="code/2.2.5.c">Sum of Float and Double Values</a></li>
    <li><span class="badge">6</span> <a href="code/2.2.6.c">Print ASCII Values of Special Characters</a></li>
    <li><span class="badge">7</span> <a href="code/2.2.7.c">Sum of ASCII Values of a String</a></li>
    <li><span class="badge">8</span> <a href="code/2.2.8.c">Demonstrate Data Type Qualifiers</a></li>
    <li><span class="badge">9</span> <a href="code/2.2.9.c">Signed vs Unsigned Integers</a></li>
    <li><span class="badge">10</span> <a href="code/2.2.10.c">Qualifiers with Floating-Point Types</a></li>
  </ul>
</div>

<div class="section">
  <h2>Type Casting (Implicit & Explicit)</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.3.1.c">Implicit Type Conversion</a></li>
    <li><span class="badge">2</span> <a href="code/2.3.2.c">Explicit Type Casting</a></li>
    <li><span class="badge">3</span> <a href="code/2.3.3.c">Character to Integer Conversion</a></li>
    <li><span class="badge">4</span> <a href="code/2.3.4.c">With and Without Type Casting</a></li>
    <li><span class="badge">5</span> <a href="code/2.3.5.c">long to int Conversion</a></li>
    <li><span class="badge">6</span> <a href="code/2.3.6.c">Mixed Data Type Expressions</a></li>
    <li><span class="badge">7</span> <a href="code/2.3.7.c">Division Behavior with Type Casting</a></li>
    <li><span class="badge">8</span> <a href="code/2.3.8.c">double to int Truncation</a></li>
    <li><span class="badge">9</span> <a href="code/2.3.9.c">float vs double Precision</a></li>
    <li><span class="badge">10</span> <a href="code/2.3.10.c">Advanced Type Casting & Data Interpretation</a></li>
  </ul>
</div>

<div class="section">
  <h2>Arithmetic & Assignment Operators</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.4.1.c">Addition of Two Numbers</a></li>
    <li><span class="badge">2</span> <a href="code/2.4.2.c">Division of Two Numbers</a></li>
    <li><span class="badge">3</span> <a href="code/2.4.3.c">Subtraction of Two Numbers</a></li>
    <li><span class="badge">4</span> <a href="code/2.4.4.c">Multiplication of Two Numbers</a></li>
    <li><span class="badge">5</span> <a href="code/2.4.5.c">Weather Station (Temperature Conversion)</a></li>
    <li><span class="badge">6</span> <a href="code/2.4.6.c">Simple Calculator using Switch</a></li>
    <li><span class="badge">7</span> <a href="code/2.4.7.c">Reverse a Three-Digit Number</a></li>
    <li><span class="badge">8</span> <a href="code/2.4.8.c">Demonstrate Assignment Operators</a></li>
    <li><span class="badge">9</span> <a href="code/2.4.9.c">Chained Assignment: c = a = b</a></li>
    <li><span class="badge">10</span> <a href="code/2.4.10.c">Calculate Volume of Sphere/Cylinder</a></li>
  </ul>
</div>

<div class="section">
  <h2>Logical & Bitwise Operators</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.5.1.c">Logical AND (&&) Condition Check</a></li>
    <li><span class="badge">2</span> <a href="code/2.5.2.c">At Least One Number > 10 (Logical OR)</a></li>
    <li><span class="badge">3</span> <a href="code/2.5.3.c">Logical NOT Operator Demo</a></li>
    <li><span class="badge">4</span> <a href="code/2.5.4.c">Pre and Post Increment</a></li>
    <li><span class="badge">5</span> <a href="code/2.5.5.c">Pre and Post Decrement</a></li>
    <li><span class="badge">6</span> <a href="code/2.5.6.c">Bitwise AND, OR Operators</a></li>
    <li><span class="badge">7</span> <a href="code/2.5.7.c">Bitwise XOR Operator</a></li>
    <li><span class="badge">8</span> <a href="code/2.5.8.c">Bitwise NOT (Complement)</a></li>
    <li><span class="badge">9</span> <a href="code/2.5.9.c">Left Shift Operator (<<)</a></li>
    <li><span class="badge">10</span> <a href="code/2.5.10.c">Right Shift Operator (>>)</a></li>
  </ul>
</div>

<div class="section">
  <h2>Comparison Operators & Precedence</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.6.1.c">Check Positive, Negative or Zero</a></li>
    <li><span class="badge">2</span> <a href="code/2.6.2.c">Even Number Divisible by 3 or 7</a></li>
    <li><span class="badge">3</span> <a href="code/2.6.3.c">Find Greatest & Smallest of Three Numbers</a></li>
    <li><span class="badge">4</span> <a href="code/2.6.4.c">Check Pass/Fail Based on Marks</a></li>
    <li><span class="badge">5</span> <a href="code/2.6.5.c">Compare Using >= and <=</a></li>
    <li><span class="badge">6</span> <a href="code/2.6.6.c">Evaluate Complex Expression</a></li>
    <li><span class="badge">7</span> <a href="code/2.6.7.c">Ternary Operator (Conditional)</a></li>
    <li><span class="badge">8</span> <a href="code/2.6.8.c">Nested Ternary Operator</a></li>
    <li><span class="badge">9</span> <a href="code/2.6.9.c">Check Odd/Even Using Ternary</a></li>
    <li><span class="badge">10</span> <a href="code/2.6.10.c">Check Leap Year</a></li>
  </ul>
</div>

<div class="section">
  <h2>Module Test</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/2.7.1.c">Discount Calculator using const Keyword</a></li>
    <li><span class="badge">2</span> <a href="code/2.7.2.c">Precise Division Using Type Casting</a></li>
    <li><span class="badge">3</span> <a href="code/2.7.3.c">Arithmetic + Assignment Operator Evaluation</a></li>
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