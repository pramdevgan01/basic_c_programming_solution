<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Introduction to C & Setup - Practice Solutions</title>
  <style>
    :root {
      --bg: #f8fafc;
      --text: #1e293b;
      --primary: #10b981;
      --accent: #3b82f6;
      --card: #ffffff;
      --border: #e2e8f0;
      --code: #f0fdf4;
      --hover: #059669;
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
      color: var(--primary);
      font-size: 2.8rem;
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
      margin-top: 3rem;
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
      box-shadow: 0 3px 10px rgba(16,185,129,0.1);
    }
    li:hover {
      transform: translateY(-5px);
      box-shadow: 0 12px 25px rgba(16,185,129,0.2);
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

<h1>Getting Started with C<br><small style="background: linear-gradient(90deg, #10b981, #3b82f6); -webkit-background-clip: text; -webkit-text-fill-color: transparent; font-size:1.2rem;">Input/Output, Basics & Debugging</small></h1>

<div class="section">
  <h2>Input and Output in C + Error Types</h2>
  <ul>
    <li><span class="badge">1</span> <a href="code/1.c">Print "Hello" and "World" on separate lines</a></li>
    <li><span class="badge">2</span> <a href="code/2.c">Swap Two Float Values Using a Temporary Variable</a></li>
    <li><span class="badge">3</span> <a href="code/3.c">Demonstrate Case Sensitivity in Identifiers</a></li>
    <li><span class="badge">4</span> <a href="code/4.c">Single-line and Multi-line Comments Example</a></li>
    <li><span class="badge">5</span> <a href="code/5.c">Demonstrate All Escape Sequences (\n, \t, \b, etc.)</a></li>
    <li><span class="badge">6</span> <a href="code/6.c">Take College Address as Input and Display Formatted</a></li>
    <li><span class="badge">7</span> <a href="code/7.c">Input First & Last Name → Print on Separate Lines</a></li>
    <li><span class="badge">8</span> <a href="code/8.c">BMI Calculator with Weight & Height Input + Validation</a></li>
    <li><span class="badge">9</span> <a href="code/9.c">Identify & Fix Errors in Circle Area Calculation Program</a></li>
    <li><span class="badge">10</span> <a href="code/10.c">Debug a Faulty Tax Calculator Program (Syntax + Logic Errors)</a></li>
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