 < !DOCTYPEhtml >
    <html>
        <head>
            <title>Vowel or Consonant Checker</title>
            <script> functioncheckCharacter() {varcharacter = document.getElementById('character').value.toLowerCase()};

                switch (character) { } case'a':
                case'e':
                case'i':
                case'o':
                case'u':
                document.getElementById('result').innerHTML = character + ' is a vowel.';
                break; default:
                document.getElementById('result').innerHTML = character + ' is a
                consonant.';


            </script>
        </head>
        <body>
            <h1>Vowel or Consonant Checker</h1>
            <form>
                <labelfor />="character">Enter a character:</label>
            <inputtype />="text"id="character"name="character"maxlength="1"/>
            <inputtype />="button"value="Check"onclick="checkCharacter()"/>
        </form>
        <pid />="result"></p>;
body>

html>

