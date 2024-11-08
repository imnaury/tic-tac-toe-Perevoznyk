body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #cbccd7;
}

.container {
    width: 70%;
    margin: 0 auto;
    padding: 20px;
    background-color: #f4f4fb;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

.header {
    text-align: center;
    margin-bottom: 20px;
}

.profile-img {
    width: 150px;
    height: 200px;
    border-radius: 50%;
}

h1 {
    margin: 10px 0;
    font-size: 35px;
      }

h2 {
    margin: 10px 0;
    font-size: 22px;
      }

h3 {
    border-bottom: 2px solid #b1b2ba;
    padding-bottom: 5px;
    margin-bottom: 10px;
}

p {
    line-height: 2;
    margin-bottom: 15px;
}

.experience .job {
    margin-bottom: 30px;
}

.contact {
    text-align: center;
    margin-top: 20px;
}

.btn {
    display: inline-block;
    margin: 5px;
    padding: 20px 450px;
    border: 1px solid black;
    border-radius: 20px;
    color: black;
    background-color: none;
    text-decoration: none;
    position: relative;
    padding-left: 40px;
}

.icon1{
    position: relative;
    cursor: pointer;
}

.icon1 {
        content: "";
        font-weight: 900;
        position: absolute;
        left: 10px;
        top: 50%;
        transform: translateY(-50%);
    }
   
.btn.email::before {
    content: "";
    width: 200px;
}

.btn.instagram::before {
    content: "";
    width: 200px;
}

.btn:hover {
    background-color: black;
    color: white;
}
