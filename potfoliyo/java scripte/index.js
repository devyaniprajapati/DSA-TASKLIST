  <html>
<html>
<head>
<title>Power Calculator</title>
<script> functioncalculatePower()
     {
varbase = document.getElementById('base').value; varexponent = document.getElementById('exponent').value;
varresult = Math.pow(base, exponent); document.getElementById('result').innerHTML = 'Result: ' + result;
}
</script>
</head>
<body>
<h1>Power Calculator</h1>
<form>
<labelfor="base"Enter the base:</form></label>
<inputtype="number"id="base"name="base"/>
<br/>
<labelfor="exponent">Enter the exponent:</label>
<inputtype="number"id="exponent"name="exponent"/>
<br/>
<inputtype="button"value="Calculate"onclick="calculatePower()"/>
</form>
<pid="result"></p>
</body>
</html>


