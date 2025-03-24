<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Book Showcase</title>
    <meta http-equiv="refresh" content="5">
    <!-- Bootstrap & Icons -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons/font/bootstrap-icons.css">

    <!-- Favicon -->
    <link rel="shortcut icon" href="../public/images/clashwin.png">

</head>

<body class="container-fluid d-flex justify-content-center ">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>


<script>
     function darkTheme() {
          let formLogin = document.querySelector(".formLogin");
          let themeDark = document.querySelector(".themeDark");
          let btnLogin = document.querySelector(".btnLogin");
          let checkbox = document.querySelector(".form-check-input"); // Add this line

          if (checkbox.checked) {
               formLogin.className = "formLogin border border-4 border-white w-50 p-3 m-1 text-white bg-black";
               themeDark.className = "bi bi-moon-stars themeDark";
               btnLogin.className = "btnLogin btn btn-dark";
          } else {
               formLogin.className = "formLogin border border-4 border-black w-50 p-3 m-1 text-black bg-white";
               themeDark.className = "bi bi-moon-stars-fill themeDark";
               btnLogin.className = "btnLogin btn btn-primary";
          }
     }
</script>

</body>
</html>








<script type="text/javascript">
     function createFolder(){
         result = prompt(
             "Enter the folderName","video|images|audio"
     )
         msg = document.getElementById("msg");
         if(result==null){
             msg.outerHTML="<h3>User Pressed Cancel button</h3>"
         }
         else if(result == ''){
             msg.outerHTML="<h3>Use Pressed Ok button without any Value</h3>"
         }
         else{
             // msg.outerHTML="<h3>Folder created with  Name: "+result+"</h3>"
            
             // msg.outerHTML = `<h3>Folder created with Name: ${result}</h3>`;
         
             msg.outerHTML = "<h3>Folder created with Name: </h3>,result";
         }
     }
 </script>
<dl>
     <dt>Enter OTP</dt>
     <dd><input type="text" id="textOtp" size="4" onblur="validOtp()"></dd>
</dl>
<p id="info"></p>

<script>
     function validOtp() {
          let otp = document.getElementById("textOtp");
          let info = document.getElementById("info");

          let otpResult = otp.value;
          let condition = otpResult === "1234";

          if (condition) {
               info.textContent = "OTP Valid";
               info.className = "success";
          } else {
               info.textContent = "OTP Invalid";
               info.className = "fail";
          }
     }
</script>


<dl>
     <dt>Enter Username</dt>
     <dd><input type="text" id="userName" placeholder="Enter in UpperCase" onkeyup="changeUpper()"></dd>
</dl>

<script>
     function changeUpper() {
          let userName = document.getElementById("userName");
          let data = userName.value.toUpperCase();
          userName.value = data;
     }
</script>


<script class="text/javascript">
     function updateAmount() {
          let amount = document.getElementById("amount").value;
          document.getElementById("totalAmount").value = amount;
     }
     function updateTime() {
          let time = document.getElementById("time").value;
          document.getElementById("totalTime").value = time;
     }
     function updateInterest() {
          let interest = document.getElementById("interest").value;
          document.getElementById("totalInterest").value = interest;
     }

     function compoundInterest() {

          let amount = parseFloat(document.getElementById("amount").value);
          let time = parseFloat(document.getElementById("time").value);
          let interest = parseFloat(document.getElementById("interest").value);


          let finalAmount = amount * Math.pow((1 + interest / 100), time);
          let totalCompoundInterest = finalAmount - amount;

          document.getElementById("addValue").textContent = `The Total Compound Interest is: ₹ ${totalCompoundInterest.toFixed(2)}`;
     }

</script>


<h1 id="heading">Hello Users</h1>
<p id="text">Welcome to the world of selectors</p>

<label for="lang-select">Choose Language</label>
<select id="lang-select">
  <option value="en">English</option>
  <option value="fr">French</option>
  <option value="ar">Arabic</option>
  <option value="hin">Hindi</option>
</select>

<script>
  const paragraph = document.getElementById('text');
  const select = document.getElementById('lang-select');

  const translations = {
    en: "Welcome to the world of selectors",
    fr: "Bienvenue dans le monde des sélecteurs",
    ar: "مرحبًا بكم في عالم المحددات",
    hin: "चयनकर्ताओं की दुनिया में आपका स्वागत है"
  };

  select.addEventListener('change', function () {
    const selectedLang = this.value;
    paragraph.textContent = translations[selectedLang];
  });
</script>
  
<style>
@media screen and (orientaton:landscape) {
            body{
                
            }
            
        }
        @media screen and (orientaton:potrait) {
            body{
            
            }
            
        }
        @media screen and (max-width: 600px) {
            nav {
                flex-direction: column;
                align-items: center;
            }
        }
        @media screen and (min-width: 400px) {
            nav {
                flex-direction: row;
                justify-content: space-between;
            }
        }
            
        .div2:hover {
        animation: slide 8s linear 2ms forwards;
      }   

      @keyframes alternate {
        0% {
            transform: translateX(100%);
        }
        100% {
            transform: translateX(0%);
        }
      }  
</style>




</html>

<!DOCTYPE html>
<html lang="en">

<head>
     <meta charset="UTF-8">
     <meta name="viewport" content="width=device-width, initial-scale=1.0">
     <title>Text Styler</title>
     <!-- Bootstrap -->
     <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
     <style>
          label {
               font-weight: bold;
          }

          #displayText {
               margin-top: 50px;
               padding: 20px;
               border: 1px solid #ccc;
               border-radius: 10px;
               min-height: 100px;
               background-color: #f8f9fa;
          }
     </style>
</head>
<!--colorpicker-->
<body class="container-fluid">
     <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>

     <header class="d-flex justify-content-around bg-danger p-3 w-100">
          <div>
               <label for="fontSize" class="form-label text-white">Font Size:</label>
               <input class="form-range" type="range" id="fontSize" min="1" max="5" onchange="applyChanges()">
               <div class="d-flex justify-content-between text-white">
                    <div>1</div>
                    <div>5</div>
               </div>
          </div>

          <div>
               <label for="colorPick" class="form-label text-white">Pick Color:</label><br>
               <input type="color" class="form-control-color" id="colorPick" onchange="applyChanges()">
          </div>

          <div>
               <label for="styleType" class="form-label text-white">Select Style:</label>
               <select id="styleType" class="form-select" onchange="applyChanges()">
                    <option value="normal">Normal</option>
                    <option value="bold">Bold</option>
                    <option value="italic">Italic</option>
               </select>
          </div>

          <div>
               <label for="alignStyle" class="form-label text-white">Text Align:</label>
               <select id="alignStyle" class="form-select" onchange="applyChanges()">
                    <option value="left">Start</option>
                    <option value="center">Center</option>
                    <option value="right">End</option>
               </select>
          </div>
     </header>

     <main class="d-flex flex-column align-items-center">
          <button onclick="alertMsg()" class="btn btn-primary mt-5" type="button">Enter The Text</button>
          <!-- Removed text-start to allow dynamic alignment -->
          <div id="displayText" class="w-75"></div>
     </main>

     <script>
          function alertMsg() {
               let userText = prompt("Enter your text:");
               if (userText) {
                    document.getElementById("displayText").textContent = userText;
                    applyChanges(); // Apply styles after entering text
               }
          }

          function applyChanges() {
               let textDiv = document.getElementById("displayText");
               let size = document.getElementById("fontSize").value;
               let color = document.getElementById("colorPick").value;
               let style = document.getElementById("styleType").value;
               let align = document.getElementById("alignStyle").value;

               // Apply font size (multiply by 8 for better visibility)
               textDiv.style.fontSize = (size * 8) + "px";

               // Apply color
               textDiv.style.color = color;

               // Apply style (bold / italic / normal)
               if (style === "bold") {
                    textDiv.style.fontWeight = "bold";
                    textDiv.style.fontStyle = "normal";
               } else if (style === "italic") {
                    textDiv.style.fontWeight = "normal";
                    textDiv.style.fontStyle = "italic";
               } else {
                    textDiv.style.fontWeight = "normal";
                    textDiv.style.fontStyle = "normal";
               }

               // Apply alignment
               textDiv.style.textAlign = align;
          }
     </script>
     <script type="text/javascript">
    function createFolder(){
        result = prompt(
            "Enter the folderName","video|images|audio"
    )
        msg = document.getElementById("msg");
        if(result==null){
            msg.outerHTML="<h3>User Pressed Cancel button</h3>"
        }
        else if(result == ''){
            msg.outerHTML="<h3>Use Pressed Ok button without any Value</h3>"
        }
        else{
            // msg.outerHTML="<h3>Folder created with  Name: "+result+"</h3>"
           
            // msg.outerHTML = `<h3>Folder created with Name: ${result}</h3>`;
        
            msg.outerHTML = "<h3>Folder created with Name: </h3>,result";
        }
    }
</script>

</body>
<!--calculator-->
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Simple Calculator</title>
  <style>
    body {
      background: #f5f5f5;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      font-family: Arial, sans-serif;
    }
    .calculator {
      background: #fff;
      padding: 20px;
      border-radius: 15px;
      box-shadow: 0 4px 8px rgba(0,0,0,0.2);
      width: 300px;
    }
    input[type="text"] {
      width: 100%;
      height: 50px;
      font-size: 24px;
      text-align: right;
      padding: 10px;
      border-radius: 10px;
      border: 1px solid #ccc;
      margin-bottom: 20px;
    }
    .buttons button {
      width: 60px;
      height: 60px;
      font-size: 20px;
      margin: 5px;
      border-radius: 10px;
      border: none;
      background-color: #4CAF50;
      color: white;
      cursor: pointer;
      transition: background-color 0.3s;
    }
    .buttons button:hover {
      background-color: #45a049;
    }
    .buttons .operator {
      background-color: #FF9800;
    }
    .buttons .operator:hover {
      background-color: #e68900;
    }
    .buttons .equal {
      background-color: #2196F3;
    }
    .buttons .equal:hover {
      background-color: #0b7dda;
    }
    .buttons .clear {
      background-color: #f44336;
    }
    .buttons .clear:hover {
      background-color: #da190b;
    }
  </style>
</head>
<body>

  <div class="calculator">
    <input type="text" id="result" disabled>
    <div class="buttons">
      <button onclick="clearResult()" class="clear">C</button>
      <button onclick="appendValue('/')">/</button>
      <button onclick="appendValue('*')">*</button>
      <button onclick="appendValue('-')" class="operator">-</button>

      <button onclick="appendValue('7')">7</button>
      <button onclick="appendValue('8')">8</button>
      <button onclick="appendValue('9')">9</button>
      <button onclick="appendValue('+')" class="operator">+</button>

      <button onclick="appendValue('4')">4</button>
      <button onclick="appendValue('5')">5</button>
      <button onclick="appendValue('6')">6</button>
      <button onclick="appendValue('.')">.</button>

      <button onclick="appendValue('1')">1</button>
      <button onclick="appendValue('2')">2</button>
      <button onclick="appendValue('3')">3</button>
      <button onclick="calculateResult()" class="equal">=</button>

      <button onclick="appendValue('0')" style="width: 130px;">0</button>
    </div>
  </div>

  <script>
    const resultField = document.getElementById('result');

    function appendValue(value) {
      resultField.value += value;
    }

    function clearResult() {
      resultField.value = '';
    }

    function calculateResult() {
      try {
        resultField.value = eval(resultField.value);
      } catch (error) {
        resultField.value = 'Error';
      }
    }
  </script>

</body>
</html>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Dynamic Form Builder</title>
  <style>
    body { font-family: Arial; background: #f5f5f5; padding: 50px; }
    .form-container { background: #fff; padding: 30px; border-radius: 15px; max-width: 500px; margin: auto; box-shadow: 0 4px 8px rgba(0,0,0,0.2); }
    select, input, button { margin: 10px 0; padding: 10px; width: 100%; border-radius: 8px; border: 1px solid #ccc; }
    button { background: #4CAF50; color: white; cursor: pointer; }
    button:hover { background: #45a049; }
  </style>
</head>
<body>

  <div class="form-container">
    <h2>Dynamic Form Builder</h2>
    <select id="fieldType">
      <option value="text">Text</option>
      <option value="email">Email</option>
      <option value="password">Password</option>
    </select>
    <button onclick="addField()">Add Field</button>

    <form id="dynamicForm"></form>
  </div>

  <script>
    function addField() {
      const fieldType = document.getElementById('fieldType').value;
      const form = document.getElementById('dynamicForm');

      const input = document.createElement('input');
      input.type = fieldType;
      input.placeholder = `Enter ${fieldType}`;
      form.appendChild(input);
    }
  </script>

</body>
</html>
<!--todolist-->
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Simple To-Do List</title>
  <style>
    body {
      background-color: #f0f0f0;
      font-family: Arial, sans-serif;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
    }
    .todo-container {
      background: #fff;
      padding: 30px;
      border-radius: 15px;
      box-shadow: 0 4px 8px rgba(0,0,0,0.2);
      width: 350px;
    }
    h2 {
      text-align: center;
      margin-bottom: 20px;
    }
    input[type="text"] {
      width: 70%;
      padding: 10px;
      border-radius: 8px;
      border: 1px solid #ccc;
      font-size: 16px;
    }
    button {
      padding: 10px 15px;
      margin-left: 10px;
      border: none;
      border-radius: 8px;
      background-color: #4CAF50;
      color: white;
      cursor: pointer;
      transition: background-color 0.3s;
    }
    button:hover {
      background-color: #45a049;
    }
    ul {
      list-style-type: none;
      padding: 0;
      margin-top: 20px;
    }
    li {
      background: #f9f9f9;
      padding: 10px 15px;
      margin-bottom: 10px;
      border-radius: 8px;
      display: flex;
      justify-content: space-between;
      align-items: center;
    }
    li.completed {
      text-decoration: line-through;
      color: #888;
    }
    .delete-btn {
      background-color: #f44336;
      padding: 5px 10px;
      border-radius: 5px;
      cursor: pointer;
      color: white;
      border: none;
      transition: background-color 0.3s;
    }
    .delete-btn:hover {
      background-color: #da190b;
    }
  </style>
</head>
<body>

  <div class="todo-container">
    <h2>To-Do List</h2>
    <input type="text" id="taskInput" placeholder="Add a new task">
    <button onclick="addTask()">Add</button>

    <ul id="taskList"></ul>
  </div>

  <script>
    const taskInput = document.getElementById('taskInput');
    const taskList = document.getElementById('taskList');

    function addTask() {
      const taskText = taskInput.value.trim();
      if (taskText === '') {
        alert('Please enter a task');
        return;
      }

      const li = document.createElement('li');
      li.textContent = taskText;

      // Toggle completion on click
      li.addEventListener('click', function() {
        li.classList.toggle('completed');
      });

      // Create delete button
      const deleteBtn = document.createElement('button');
      deleteBtn.textContent = 'Delete';
      deleteBtn.className = 'delete-btn';
      deleteBtn.onclick = function(e) {
        e.stopPropagation(); // Prevent triggering the completion toggle
        li.remove();
      };

      li.appendChild(deleteBtn);
      taskList.appendChild(li);
      taskInput.value = '';
    }
  </script>

</body>
</html>
<!--landingpage-->
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Simple Landing Page</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
  <style>
    /* Custom CSS (optional) */
    body {
      padding-top: 50px;
    }
    .hero-section {
      background: #f8f9fa;
      padding: 50px 0;
      text-align: center;
    }
  </style>
</head>
<body>

  <!-- Header -->
  <nav class="navbar navbar-expand-lg navbar-light bg-light">
    <a class="navbar-brand" href="#">MySite</a>
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span class="navbar-toggler-icon"></span>
    </button>
    <div class="collapse navbar-collapse" id="navbarNav">
      <ul class="navbar-nav ml-auto">
        <li class="nav-item active">
          <a class="nav-link" href="#">Home</a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="#">About</a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="#">Contact</a>
        </li>
      </ul>
    </div>
  </nav>

  <!-- Hero Section -->
  <section class="hero-section">
    <h1>Welcome to Our Site</h1>
    <p>We provide the best services just for you!</p>
    <a href="#contact-form" class="btn btn-primary">Get in Touch</a>
  </section>

  <!-- Contact Form Section -->
  <section id="contact-form" class="container">
    <h2>Contact Us</h2>
    <form onsubmit="return validateForm()" method="POST">
      <div class="form-group">
        <label for="name">Name</label>
        <input type="text" class="form-control" id="name" placeholder="Enter your name" required>
      </div>
      <div class="form-group">
        <label for="email">Email</label>
        <input type="email" class="form-control" id="email" placeholder="Enter your email" required>
      </div>
      <div class="form-group">
        <label for="message">Message</label>
        <textarea class="form-control" id="message" rows="3" placeholder="Enter your message" required></textarea>
      </div>
      <button type="submit" class="btn btn-success">Submit</button>
    </form>
  </section>

  <!-- Footer -->
  <footer class="text-center bg-light py-4">
    <p>Follow us on social media!</p>
    <p>&copy; 2025 MySite</p>
  </footer>

  <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
  <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.1/dist/umd/popper.min.js"></script>
  <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>

  <script>
    function validateForm() {
      var name = document.getElementById('name').value;
      var email = document.getElementById('email').value;
      var message = document.getElementById('message').value;

      if (name === ""  email === ""  message === "") {
        alert("Please fill in all fields.");
        return false;
      }
      alert("Form submitted successfully!");
      return true;
    }
  </script>

</body>
</html>
</html>
